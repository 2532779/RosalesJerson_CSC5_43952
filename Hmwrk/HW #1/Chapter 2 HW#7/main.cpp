/* 
 * File:   Problem for Number 7!
 * Author: Jerson Rosales
 * Created on February 22, 2015, 5:54 PM
 * Purpose: Solution to number 7!
 */

#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins


int main(int argc, char** argv) {
     float ocnLvlR = 1.5,
        
            ocnR1 = 5,// Ocean rise in 5 years
            
             ocnR2 = 7, //Ocean rise in 7 years
             
             ocnR3 = 10, // Ocean rise in 10 years
             
             ttlR1,//Total rise in 5 years!
             ttlR2,//Total rise in 7 years!
             ttlR3;//Total rise in 10 years
     
     ttlR1 = ocnR1 * ocnLvlR;//Calculating Rise after 5 years
     ttlR2 = ocnR2 * ocnLvlR;//Calculating Rise after 7 years
     ttlR3 = ocnR3 * ocnLvlR;//Calculating rise after 10 years
     
     cout << "Ocean Rise after 5 years: " << ttlR1 << "mm" << endl;
     cout << "Ocean Rise After 7 years: " << ttlR2 << "mm" << endl;
     cout << "Ocean Rise after 10 years: " << ttlR3 <<"mm" << endl;
     return 0;
}

