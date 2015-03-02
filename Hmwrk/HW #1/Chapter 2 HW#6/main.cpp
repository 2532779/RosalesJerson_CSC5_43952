/* 
 * File:   Problem Number 6!
 * Author: Jerson Rosales
 *
 * Created on February 22, 2015, 5:44 PM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    int payAmount = 2200.0,
            
            payPeriods = 26,
            
            annualPay;
    
    annualPay = payAmount * payPeriods;
    
    cout << "Total Annual Pay:" << annualPay << "$\n";
            

    return 0;
}

