#include "power_of_troy.h"

namespace troy {
    void give_new_artifact(human& human,const std::string& new_artifact)
    {
        if(new_artifact == "") return;
        human.possession = std::make_unique<artifact>(new_artifact);
    }
    void exchange_artifacts(std::unique_ptr<artifact>& artifactA,std::unique_ptr<artifact>& artifactB)
    {
        std::swap(artifactA,artifactB);
    }
    void manifest_power(human& human,std::string newPower)
    {
        human.own_power = std::make_shared<power>(newPower);
    }
    
    void use_power(human& caster,human& target)
    {
        target.influenced_by = caster.own_power;
    }
    
    int power_intensity(const human& human)
    {
        return human.own_power.use_count();
    }
}  // namespace troy
