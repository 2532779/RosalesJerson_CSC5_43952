/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on February 22, 2015, 4:56 PM
 * Purpose: Problem number 4!
 */

#include <iostream>

using namespace std;
//User Libraries

//Global Functions
unsigned char CNVPCT=100;

//Function Prototypes

//Execution Begins!


int main(int argc, char** argv) {
            float mlWtx,//Meal With Tax
            mlWTxTp,        
            meal = 88.67,//Cost of Meal
            tax = 6.75, // tax for meal
            ttlTx, //Tax times meal
            ttlTp, //Tip with tax and meal        
            tip = 2, //Tips 
            mlWTx;// meal plus tax 
             
            ttlTx = meal * tax/CNVPCT;//Getting the tax of meal
            mlWTx = meal + ttlTx;//Meal With tax!
            ttlTp = mlWTx * tip/CNVPCT;//Meal w/ Tax to get the tip
            mlWTxTp = mlWTx + ttlTp;//Meal w/ Tax with the tip
            
            cout << "Meal cost: " << meal << "$\n"; 
            cout << "Total tax: "  << ttlTx << "$\n";
            cout << "Tip Amount : " << ttlTp << "$\n";
            cout << "Meal With Tax And Tip: " << mlWTxTp<< "$\n";
           return 0;
}

