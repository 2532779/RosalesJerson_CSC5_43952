/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on April 29, 2015, 9:39 AM
 * Purpose: check out dice stats
 */

//System libraries
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
unsigned char roll(unsigned char, unsigned char);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE=15;//Size larger than needed
    int freq[SIZE]={};//Setting whole array to zero
    int nThrows=36000;//NUmber of throws
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Loop, throw her dice, take the stats!
    for(int throws=1;throws<=nThrows;throws++){
        freq[roll(2,6)]++;
    }
    //Print the results
    for(int value=0;value<SIZE;value++){
        cout<<value<<" was thrown"<<freq[value]<<" times!"<<endl;;
    }
    //Exit Stage right

    return 0;
}

unsigned char roll(unsigned char nDie, unsigned char sides){
    unsigned char sum=0;
    for (int die=1;die<=nDie;die++){
        sum+=(rand()%sides+1);
    }
    return sum;
}