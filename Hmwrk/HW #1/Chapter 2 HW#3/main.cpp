/* 
 * File:   main.cpp
 * Author: Jarson
 *
 * Created on February 22, 2015, 4:28 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
            double total,
            stateTax = .04,
            countyTax = .02,
            totalTax,
            addedTax,
            purchase = 95.00 ;
    totalTax = stateTax + countyTax ;
    addedTax = purchase * totalTax ; 
    total = purchase + addedTax ;
    
    cout << "If the state tax is 4 percent and the county tax is 2 \n ";
    cout << "percent of a 95$ purchase, then the total is " << total << "$.\n";

    return 0;
}

