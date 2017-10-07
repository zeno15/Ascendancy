#include <Tower/DataAccess/DataAccessManager.hpp>

#include <fstream>

namespace tower {
	bool DataAccessManager::loadFromFile(const std::string& _name, const std::string& _filename) {
		std::ifstream infile{ _filename };
		if (!infile.good()) {
			return false;
		}
		std::string data{ std::istreambuf_iterator<char>(infile), std::istreambuf_iterator<char>() };
		infile.close();
		return loadFromString(_name, data);
	}
	bool DataAccessManager::loadFromString(const std::string& _name, const std::string& _data) {
		for (auto& p : m_Data) {
			if (p.first == _name) {
				p.second = _data;
				return true;
			}
		}

		m_Data.emplace_back(_name, _data);
		return true;
	}

	std::string DataAccessManager::getData(const std::string& _name) const {
		for (const auto& p : m_Data) {
			if (p.first == _name) {
				return p.second;
			}
		}

		return std::string();
	}
}