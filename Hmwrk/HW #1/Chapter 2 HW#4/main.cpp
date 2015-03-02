/* 
 * File:   Program for number 4!
 * Author: Jerson Rosales
 *
 * Created on February 22, 2015, 4:56 PM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
            double mealWithTaxAndTip,
            meal = 88.67,//Cost of Meal
            tax = .0675, // tax for meal
            totalTax, //Tax times meal
            totalTip, //Tip with tax and meal        
            tip = .2, //Tips 
            mealWithTax;// meal plus tax 
             
            totalTax = meal * tax;
            mealWithTax = meal + totalTax;
            totalTip = mealWithTax * tip;
            mealWithTaxAndTip = mealWithTax + totalTip;
            
            cout << "Meal cost: " << meal << "$\n"; 
            cout << "Total tax: "  << totalTax << "$\n";
            cout << "Tip Amount : " << totalTip << "$\n";
            cout << "Meal With Tax And Tip: " << mealWithTaxAndTip<< "$\n";
           return 0;
}

