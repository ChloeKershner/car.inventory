//
// Created by Chloe Kershner on 9/22/22

#include "sortcar.h"
/**
 * @brief sort car inventory
 *
 * @param carInventory      input car inventory array
 * @param promotionOrder    car promotion order
 * @return vector<string>   sorted car inventory according to the car promotion
order
 *
 * Time complexity is linear: O(N), N is the size/length of the input car
inventory array
 * Space complexity is constant: O(1),
 */
vector<string> SortCar::sortCarInventory(vector<string> carInventory,
                                         vector<string> promotionOrder) {

    int switchIndex = 0;
    string temp = "none";
    int promoIndex = 0;

    //loops through carInventory and compares first element of promotionOrder with every element
    //if found, it swaps it with the element at the switch index and increments the switch index
    for (int i = 0; i < carInventory.size(); i++) {
        if (carInventory.at(i) == promotionOrder.at(promoIndex)) {
            temp = carInventory.at(switchIndex);
            carInventory.at(switchIndex) = promotionOrder.at(promoIndex);
            carInventory.at(i) = temp;
            switchIndex++;
        }
    }
    promoIndex++;
    // same loop as above with next element of promotionOrder
    for (int i = 0; i < carInventory.size(); i++) {
        if (carInventory.at(i) == promotionOrder.at(promoIndex)) {
            temp = carInventory.at(switchIndex);
            carInventory.at(switchIndex) = promotionOrder.at(promoIndex);
            carInventory.at(i) = temp;
            switchIndex++;
        }
    }

    return carInventory;
}
