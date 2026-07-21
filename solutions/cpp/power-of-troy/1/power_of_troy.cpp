#include "power_of_troy.h"
#include <memory>
#include <string>

namespace troy {
    void give_new_artifact(human& person, const std::string& artifact_name) {
     // person.possession accesses member of the human
     // std::make_unique<artifact>(artifact_name) created a branch new artifact object on the HEAP
        person.possession = std::make_unique<artifact>(artifact_name);
    }
    void exchange_artifacts (std::unique_ptr<artifact>& first, 
        std::unique_ptr<artifact>& second) {
        std::swap(first, second);
    }
    void manifest_power (human& person, const std::string& power_name){
        person.own_power = std::make_shared<power>(power_name);
    }
    void use_power (human& caster, human& target){
        // make a central power that shares own power and influenced by power
        target.influenced_by = caster.own_power;
    }
    int power_intensity(const human& caster){
        if (!caster.own_power)return 0;

        return caster.own_power.use_count();
    }

}  // namespace troy
