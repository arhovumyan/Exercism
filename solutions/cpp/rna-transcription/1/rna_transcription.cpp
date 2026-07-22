#include "rna_transcription.h"
#include <string>

namespace rna_transcription {

    char to_rna(char ch) {
        if (ch == 'A') return 'U';
        if (ch == 'G') return 'C';
        if (ch == 'T') return 'A';
        if (ch == 'C') return 'G';
        return 'v';
    }

    std::string to_rna(std::string str) {
        for (char& c : str){
            c = to_rna(c);
        }
        return str;
    }
}  // namespace rna_transcription
