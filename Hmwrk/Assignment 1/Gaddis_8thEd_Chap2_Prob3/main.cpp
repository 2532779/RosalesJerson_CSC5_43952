/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on February 22, 2015, 4:28 PM
 * Purpose: Problem number 3!
 */

#include <iostream>

using namespace std;
//User Libraries

//Global Constants
unsigned char CNVPCT=100;

//Function Prototypes

//Execution Begins

int main(int argc, char** argv) {
            float ttl;
            unsigned short statTx = 4,//State Tax
            ctyTx = 2;//City tax
            float ttlTx,//Total Tax
            addTx,//Added Tax
            prchse = 95.00 ;
    ttlTx = statTx + ctyTx ;//State Tax + City Tax
    addTx = prchse * ttlTx/CNVPCT ; //Purchase times the total tax 
    ttl = prchse + addTx ;//We get our total here!
    
    cout << "If the state tax is 4 %  and the county tax is 2% \n ";
    cout << "percent of a 95$ purchase, then the total is " << ttl << "$.\n";

    return 0;
}

