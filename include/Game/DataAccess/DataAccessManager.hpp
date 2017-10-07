#ifndef INCLUDED_ASCENDANCY_GAME_DATA_ACCESS_DATA_ACCESS_MANAGER_HPP_
#define INCLUDED_ASCENDANCY_GAME_DATA_ACCESS_DATA_ACCESS_MANAGER_HPP_

#include <string>
#include <vector>

namespace asc {
	class DataAccessManager {
	public:
		bool loadFromFile(const std::string& _name, const std::string& _filename);
		bool loadFromString(const std::string& _name, const std::string& _data);

		std::string getData(const std::string& _name) const;

	private:
		std::vector<std::pair<std::string, std::string>> m_Data;
	};
}

#endif // INCLUDED_ASCENDANCY_GAME_DATA_ACCESS_DATA_ACCESS_MANAGER_HPP_