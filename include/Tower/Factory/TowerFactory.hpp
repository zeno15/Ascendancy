#ifndef INCLUDED_ASCENDANCY_TOWER_FACTORY_TOWER_FACTORY_HPP_
#define INCLUDED_ASCENDANCY_TOWER_FACTORY_TOWER_FACTORY_HPP_

#include <string>
#include <vector>

#include <Utility/XML.hpp>

namespace tower {
    class Tower;
    class TowerFactory {
    public:
        TowerFactory(void);
        ~TowerFactory(void);

        void initialise(const std::string& _name, const std::string& _resourcePath);
        void initialise(const std::string& _name, asc::XML _resource);
        bool isTowerInitialised(const std::string& _name);
        Tower *createTowerInstance(const std::string& _name);

        std::vector<std::string> getInitialisedTowers(void) const;

    private:
        std::vector<std::pair<std::string, asc::XML>> m_Resources;
    };
}

#endif // INCLUDED_ASCENDANCY_TOWER_FACTORY_TOWER_FACTORY_HPP_