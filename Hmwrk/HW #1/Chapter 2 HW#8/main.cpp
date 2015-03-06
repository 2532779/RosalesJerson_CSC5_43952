/* 
 * File:  Problem for number 8
 * Author: Jerson Rosales
 * Created on February 22, 2015, 6:29 PM
 */

#include <iostream>

using namespace std;
//User Libraries

//Global Functions
unsigned char CNVPCT=100;
//Function Prototypes

//Execution Begins


int main(int argc, char** argv) {
    
    
    float prcOI1 = 15.95,//Price of item 1
            prcOI2 = 24.95,//Price of item 2
            prcOI3 = 6.95,//Price of item 3
            prcOI4 = 12.95,//Price of item 4
            prcOI5 = 3.95,//Price of item 5
            tax = 7,//Tax
            ttl1,//The total with tax (repeats to ttl5)
            ttl2,
            ttl3,
            ttl4,
            ttl5,
            tax1,// The tax with the purchases (repeats to tax5)
            tax2,
            tax3,
            tax4,
            tax5;
    
    
    tax1 = prcOI1 * tax/CNVPCT;// Price of taxed item (repeats to tax5)
    tax2 = prcOI2 * tax/CNVPCT;
    tax3 = prcOI3 * tax/CNVPCT;
    tax4 = prcOI4 * tax/CNVPCT;
    tax5 = prcOI5 * tax/CNVPCT;
    
    ttl1 = prcOI1 + tax1;//Total With Purchase and Tax!
    ttl2 = prcOI2 + tax2;
    ttl3 = prcOI3 + tax3;
    ttl4 = prcOI4 + tax4;
    ttl5 = prcOI5 + tax5;
    
    
    cout << "Item 1: \n";
    cout << "Subtotal: " << prcOI1 << endl;
    cout << "Sales Tax: " << tax1 << endl;
    cout << "Total: " << ttl1 << endl;
    cout << endl;
    cout << "Item 2: \n";
    cout << "Subtotal: " << prcOI2 << endl;
    cout << "Sales Tax: " << tax2 << endl;
    cout << "Total: " << ttl2 << endl;
    cout << endl;
    cout << "Item 3: \n";
    cout << "Subtotal: " << prcOI3 << endl;
    cout << "Sales Tax: " << tax3 << endl;
    cout << "Total: " << ttl3 << endl;
    cout << endl;
    cout << "Item 4: \n";
    cout << "Subtotal: " << prcOI4 << endl;
    cout << "Sales Tax: " << tax4 << endl;
    cout << "Total: " << ttl4 << endl;
    cout << endl;
    cout << "Item 5: \n";
    cout << "Subtotal: " << prcOI5 << endl;
    cout << "Sales Tax: " << tax5 << endl;
    cout << "Total: " << ttl5 << endl;
            return 0;
}

