#include <Tower/Factory/TowerFactory.hpp>

#include <Tower/Entities/Tower.hpp>
#include <Tower/Entities/SingleTargetTower.hpp>

namespace tower {
    TowerFactory::TowerFactory(void) {

    }   
    
    TowerFactory::~TowerFactory(void) {
        
    }


    void TowerFactory::initialise(const std::string& _name, const std::string& _resourcePath) {
        
    }
    void TowerFactory::initialise(const std::string& _name, asc::XML _resource) {
        if (isTowerInitialised(_name)) {
            return;
        }

        m_Resources.push_back(std::pair<std::string, asc::XML>(_name, _resource));
    }
    bool TowerFactory::isTowerInitialised(const std::string& _name) {
        for (auto& pair : m_Resources) {
            if (pair.first == _name) {
                return true;
            }
        }
        return false;
    }
    Tower *TowerFactory::createTowerInstance(const std::string& _name) {
        return nullptr;
    }

    std::vector<std::string> TowerFactory::getInitialisedTowers(void) const {
        std::vector<std::string> towerNames;

        for (auto& pair : m_Resources) {
            towerNames.push_back(pair.first);
        }

        return towerNames;
    }
}