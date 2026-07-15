#include <string>
#include <vector>

namespace election {

struct ElectionResult {
    std::string name{};
    int votes{};
};

int vote_count(const ElectionResult& candidate) {
    return candidate.votes;
}

void increment_vote_count(ElectionResult& candidate, int addedVotes){
    candidate.votes += addedVotes;
}

ElectionResult& determine_result(std::vector<ElectionResult>& final_count) {
    int winner_index = 0;
    // ElectionResult& winner = final_count[0];
    for (int i = 0; i < final_count.size();i++) {
        if (final_count[i].votes >= final_count[winner_index].votes) winner_index = i;
    }

    final_count[winner_index].name = "President " + final_count[winner_index].name;

    return final_count[winner_index];
}

}  // namespace election
