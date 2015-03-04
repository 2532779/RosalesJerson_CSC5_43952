/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on February 22, 2015, 4:28 PM
 * Purpose: Problem number 3!
 */

#include <iostream>

using namespace std;
//User Libraries

//Global Libraries

//Function Prototypes

//Execution Begins

int main(int argc, char** argv) {
            float ttl,
            statTx = .04,
            ctyTx = .02,
            ttlTx,
            addTx,
            prchse = 95.00 ;
    ttlTx = statTx + ctyTx ;
    addTx = prchse * ttlTx ; 
    ttl = prchse + addTx ;
    
    cout << "If the state tax is 4  and the county tax is 2 \n ";
    cout << "percent of a 95$ purchase, then the total is " << ttl << "$.\n";

    return 0;
}

