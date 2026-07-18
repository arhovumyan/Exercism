#include <string>
#include <vector>


namespace election {

    struct ElectionResult {
        //Name of the candidate
        std::string name{};
        //Number of votes the candidate has
        int votes{};
    };

    int vote_count(const ElectionResult& election_result) {
        return election_result.votes; 
    }

    void increment_vote_count(ElectionResult& election_result, int num_votes_to_add) {
        election_result.votes += num_votes_to_add;
    }

    ElectionResult& determine_result(std::vector<ElectionResult>& final_count) {
        ElectionResult *result = nullptr; 

        for(ElectionResult& election_result : final_count) {
            if(!result || result->votes < election_result.votes) {
                result = &election_result; 
            }
        }

        result->name = "President " + result->name; 
        return *result; 
    }










































}


/*
// struct ElectionResult {
//     std::string name{};
//     int votes{};
// };

// int vote_count(const ElectionResult& candidate) {
//     return candidate.votes;
// }

// void increment_vote_count(ElectionResult& candidate, int addedVotes){
//     candidate.votes += addedVotes;
// }

// void remove_candidate(std::vector<ElectionResult>& candidates, std::string name) {
//     for (int i = 0; i < candidates.size();i++){
//         if (candidates[i].name == name) candidates.erase(candidates.begin() + i); 
//         return;
//     }   
// }

// ElectionResult* found_candidate(std::vector<ElectionResult>& candidates, std::string name){
//     for (int i = 0; i < candidates.size();i++) if (candidates[i].name == name) return &candidates[i];
//     return nullptr;
// }

// void transfer_votes(std::vector<ElectionResult>& candidates, std::string from_name, std::string to_name, int votes_to_transfer){
//     ElectionResult* from_candidate = found_candidate(candidates, from_name);
//     ElectionResult* to_candidate = found_candidate(candidates, to_name);

//     if (from_candidate == pullptr || to_candidate == pullptr) return;
//     if (from_candidate->votes < votes_to_transfer){
//         votes_to_transfer = from_candidate->votes;
//     }

//     from_candidate->votes -= votes_to_transfer;
//     to_candidate->votes += votes_to_transfer;
// }

// ElectionResult& determine_result(std::vector<ElectionResult>& final_count) {
//     int winner_index = 0;
//     for (int i = 0; i < final_count.size();i++) {
//         if (final_count[i].votes >= final_count[winner_index].votes) winner_index = i;
//     }

//     final_count[winner_index].name = "President " + final_count[winner_index].name;

//     return final_count[winner_index];
// }

}  // namespace election
*/