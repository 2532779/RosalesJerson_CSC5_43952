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
unsigned char roll(unsigned char , unsigned char );
//Execution begins here
int main(int argc, char** argv) {
    //Random Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    int win=0,lose=0,nThrows=0,nGames=10000;
    //Loop on the games and take stats
    for (int game=1;game<=nGames;game++){
        int sum=roll(2,6);
        if (sum==2||sum==3||sum==12)lose++;
        else if (sum==7||sum==11)win++;
        else{
            //Keep throwing
            bool rollAgn;
            do{
                bool rollAgn=true;
                int sum2=roll(2,6);
                if(sum2==sum){
                    win++;
                    rollAgn=false;
                }else if sum2==7{
                    lose++;
                    rollAgn=false;
                }
            }while(rollAgn)
        }
    }
    return 0;
}
unsigned char roll(unsigned char nDie, unsigned char sides){
    unsigned char sum=0;
    for (int die=1;die<=nDie;die++){
        sum+=(rand()%sides+1);
    }
    return sum;
}

