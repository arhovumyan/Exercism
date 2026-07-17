// ERROR: FILE CORRUPTED. Please supply valid C++ Code.

// hp1, üapöhp2ö % Äcountöiöma1,
//     öhp2ö % Älawöhp3öö / önextöstepö % Ädacöiöml1ö % Älawö7ö % Ädacöiömb1ö %
//         Ärandomöö % Äscrö9sö % Äsirö9sö % Äxctöhr1ö % Äaddöiömx1ö %
//         Ädacöiömx1ö % Äswapö % Äaddöiömy1ö % Ädacöiömy1ö % Ärandomö % Äscrö9sö %
//         Äsirö9sö % Äxctöhr2ö % Ädacöiömdyö % Ädioöiömdxö % Äsetupö.hpt,
//     3ö % Älacöranö % Ädacöiömth


// ERROR: FILE CORRUPTED. Please supply valid C++ Code.

// hp4,ölacöiömthö%Äsmaö%Äsubö(311040ö%Äspaö%Äaddö(311040ö%Ädacöiömthö%Äcountö.hpt,hp4ö%Äxctöhd2ö%Ädacöiöma1
// hp2,öjmpö.
#pragma once
#include <string>

namespace star_map {
    enum class System {
        Sol,
        AlphaCentauri,
        BetaHydri,
        DeltaEridani,
        EpsilonEridani,
        Omicron2Eridani
    };
}

namespace heaven {
    class Vessel {
        public:
            std::string name;
            int generation;
            star_map::System current_system;
            int busters = 0;

            Vessel::Vessel(std::string vessel_name, int vessel_generation,
                star_map::System vessel_system = star_map::System::Sol);
                
            
            Vessel Vessel::replicate(std::string new_name);

            void Vessel::make_buster();
            bool Vessel::shoot_buster();
            };
        std::string get_older_bob(const Vessel& name1, const Vessel& name2);
        bool in_the_same_system(const Vessel& system1, const Vessel& system2);
}