/* 
 * File:  Problem for number 8
 * Author: Jerson Rosales
 *
 * Created on February 22, 2015, 6:29 PM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    
    
    double priceOfItem1 = 15.95,
            priceOfItem2 = 24.95,
            priceOfItem3 = 6.95,
            priceOfItem4 = 12.95,
            priceOfItem5 = 3.95,
            tax = .07,
            total1,//The total with tax (repeats to total5)
            total2,
            total3,
            total4,
            total5,
            tax1,// The tax with the purchases (repeats to tax5)
            tax2,
            tax3,
            tax4,
            tax5;
    
    
    tax1 = priceOfItem1 * tax;// Price of taxed item (repeats to tax5)
    tax2 = priceOfItem2 * tax;
    tax3 = priceOfItem3 * tax;
    tax4 = priceOfItem4 * tax;
    tax5 = priceOfItem5 * tax;
    
    total1 = priceOfItem1 + tax1;//Total With Purchase and Tax!
    total2 = priceOfItem2 + tax2;
    total3 = priceOfItem3 + tax3;
    total4 = priceOfItem4 + tax4;
    total5 = priceOfItem5 + tax5;
    
    
    cout << "Item 1: \n";
    cout << "Subtotal: " << priceOfItem1 << endl;
    cout << "Sales Tax: " << tax1 << endl;
    cout << "Total: " << total1 << endl;
    
    cout << "Item 2: \n";
    cout << "Subtotal: " << priceOfItem2 << endl;
    cout << "Sales Tax: " << tax2 << endl;
    cout << "Total: " << total2 << endl;
    
    cout << "Item 3: \n";
    cout << "Subtotal: " << priceOfItem3 << endl;
    cout << "Sales Tax: " << tax3 << endl;
    cout << "Total: " << total3 << endl;
    
    cout << "Item 4: \n";
    cout << "Subtotal: " << priceOfItem4 << endl;
    cout << "Sales Tax: " << tax4 << endl;
    cout << "Total: " << total4 << endl;
    
    cout << "Item 5: \n";
    cout << "Subtotal: " << priceOfItem5 << endl;
    cout << "Sales Tax: " << tax5 << endl;
    cout << "Total: " << total5 << endl;
            return 0;
}

