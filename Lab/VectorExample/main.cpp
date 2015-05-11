/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on May 11, 2015, 9:31 AM
 * Purpose: Vector Example
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void filAray(vector<int> &,int );
void prntAry(vector<int> &,int,int);

//Execution Begins here
int main(int argc, char** argv) {
    //Set Random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    const int SIZE=100;
    vector<int> array(SIZE);
    //Fill the array
    filAray(array,SIZE);
    //Print Array
    prntAry(array,SIZE,10);
    //Find something
    //int rndVal=rand()%90+10;
    //cout<<rndVal<<" was found at position "
    //<<linSrch(array,SIZE,rndVal)<<endl;
    //Exit Stage right
    
    return 0;
}


void prntAry(vector<int> &a,int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==perLine-1)cout<<endl;
    }
}

void filAray(vector<int> &a,int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//Two digit number
    }
}