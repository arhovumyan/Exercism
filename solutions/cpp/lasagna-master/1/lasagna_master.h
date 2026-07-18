#pragma once
#include <vector>
#include <utility>
#include <string>

namespace lasagna_master {

class lasagna {
    public:
    
    int ovenTime();
    int remainingOvenTime(int actualMinutesInOven);
    // int preparationTime(const std::vector<std::string> layers, int prepTime);
    int elapsedTime(int numberOfLayers, int actualMinutesInOven);
};

struct amount {
    int noodles;
    double sauce;
};
    void addSecretIngredient(std::vector<std::string>& layer1, const std::string someString);
    std::vector<double> scaleRecipe(const std::vector< double>& amount, const int portions);
    void addSecretIngredient(std::vector<std::string>& layer1, const std::vector<std::string>& layer2);
    int preparationTime(const std::vector<std::string> layers, int prepTime = 2);
    amount quantities(const std::vector<std::string>& layers);

}  // namespace lasagna_master
