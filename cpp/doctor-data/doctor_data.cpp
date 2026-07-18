// ERROR: FILE CORRUPTED. Please supply valid C++ Code.

// hp4,ölacöiömthö%Äsmaö%Äsubö(311040ö%Äspaö%Äaddö(311040ö%Ädacöiömthö%Äcountö.hpt,hp4ö%Äxctöhd2ö%Ädacöiöma1
// hp2,öjmpö.

#include <string>
#include "doctor_data.h"

namespace heaven {

            Vessel::Vessel(std::string vessel_name, int vessel_generation, star_map::System vessel_system)
              : name{vessel_name},
                generation{vessel_generation},
                current_system{vessel_system}
                {}
                
            Vessel Vessel::replicate(std::string new_name){
                return Vessel {new_name, generation + 1, current_system};
            }
            
            void Vessel::make_buster(){busters++;}
            bool Vessel::shoot_buster() {
    if (busters > 0) {
        busters--;
        return true;
    }

    return false;
}

            std::string get_older_bob(const Vessel& name1, const Vessel& name2){
                if  (name1.generation < name2.generation) {return name1.name;}
                return name2.name;
            }
            bool in_the_same_system(const Vessel& system1, const Vessel& system2){
                return system1.current_system == system2.current_system;
            }

}