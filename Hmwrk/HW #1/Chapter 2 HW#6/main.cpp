/* 
 * File:   Problem Number 6!
 * Author: Jerson Rosales
 * Created on February 22, 2015, 5:44 PM
 * Purpose: Solution to problem 6!
 */

#include <iostream>

using namespace std;
//User Libraries

//Global Functions

//Function Prototypes

//Execution Begins!


int main(int argc, char** argv) {
    float pyAmnt = 2200.0,//Gets 2200 each payment Period!
            
            pyPrds = 26,//How many Payment periods per year!
            
            anlPy;//Total Annual pay
    
    anlPy = pyAmnt * pyPrds;
    
    cout << "Total Annual Pay: " << anlPy << "$\n";
            

    return 0;
}

