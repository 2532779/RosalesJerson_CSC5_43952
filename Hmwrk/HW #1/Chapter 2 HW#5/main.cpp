/* 
 * File:   Problem number 5!
 * Author: Jerson Rosales
 *
 * Created on February 22, 2015, 5:22 PM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
           double  avg,// Divide everything by 5
                   sum, // Add all of the variables
                   var1 = 28,
                   var2 = 32,
                   var3 = 37,
                   var4 = 24,
                   var5 = 33;
           sum = var1 + var2 + var3 + var4 + var5;
           avg = sum / 5;
           
           cout << "The average is : " << avg << endl;
           return 0;
}

