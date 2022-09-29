// Copyright (c) 2022 Joseph Kwon All rights reserved.
//
// Created by: Joseph Kwon
// Created on: Sep. 27, 2022
// This program asks the user for the radius of a circle
// and displays the circumference and area
#include <bits/stdc++.h>

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    // declare constants
    const float HST = 0.13;
    const int LABOUR_COST = 2;
    const float RENTAL_COST = 2.25;
    const float INGRED_COST = 1.5;

    // declare variables
    float diameter;

    // get input from user (radius())
    std::cout << "Calculator for pizza price with tax\n";
    std::cout << "Enter the diameter of the pizza (inches): ";
    std::cin >> diameter;

    // calculate the circumference and area using TAU
    float subtotal = LABOUR_COST + RENTAL_COST + INGRED_COST * diameter;
    float tax = subtotal * HST;
    float total = subtotal + tax;

    // display the results to the user
    std::cout << std::endl;
    std::cout << "total price is $" << fixed << setprecision(2) << total << ".";
    return 0;
}
