#include "vehicle_purchase.h"
#include <string>

namespace vehicle_purchase {

// needs_license determines whether a license is needed to drive a type of
// vehicle. Only "car" and "truck" require a license.
bool needs_license(std::string kind) {
    return kind == "car" or kind == "truck";
}

// choose_vehicle recommends a vehicle for selection. It always recommends the
// vehicle that comes first in lexicographical order.
std::string choose_vehicle(std::string option1, std::string option2) {
    return (option1 < option2 ? option1 : option2) + " is clearly the better choice.";
}

// calculate_resell_price calculates how much a vehicle can resell for at a
// certain age.
double calculate_resell_price(double original_price, double age) {
    // TODO: Return the age-corrected resell price.
    double finalPrice = original_price;
    if (age == 3) finalPrice = original_price * (1 - 20/100) * 100;
    if (age == 10) finalPrice = original_price * (1 - 50/100) * 100;
    else if (age > 3 && age < 10)  finalPrice = original_price * (1 - 30/100) * 100;
    return finalPrice;
}

}  // namespace vehicle_purchase
