#include "lasagna_master.h"
// #pragma once
#include <vector>
#include <utility>

namespace lasagna_master {
int ovenTime() {
    return 40;
}

amount quantities(const std::vector<std::string>& layers){
    int noodleAmt = std::count(layers.begin(), layers.end(), "noodles");
    int sauceAmt  = std::count(layers.begin(), layers.end(), "sauce");    
    return {noodleAmt * 50, sauceAmt * 0.2};
}

void addSecretIngredient(std::vector<std::string>& layer1, const std::vector<std::string>& layer2){
    layer1.back() = layer2.back();
}

void addSecretIngredient(std::vector<std::string>& layer1, const std::string someString){
    layer1.back() = someString;   
}

std::vector<double> scaleRecipe(const std::vector<double>& amount, const int portions){
    std::vector<double> result = amount;

    for (double& n : result) n = n * portions / 2; 
    return result;
}

int remainingOvenTime(int actualMinutesInOven) {
    int TotalOvenTime = ovenTime();
    return TotalOvenTime - actualMinutesInOven;
}

int preparationTime(const std::vector<std::string> layers, int prepTime) {
    return layers.size() * prepTime;
}

int elapsedTime(int numberOfLayers, int actualMinutesInOven) {
    return 2 * numberOfLayers + actualMinutesInOven;
}
}
