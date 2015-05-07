/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on May 6, 2015, 9:01 AM
 * Purpose: Example Linear Search/Mark Sort
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void filAray(int[],int );
void prntAry(int[],int,int);
int linSrch (int[],int,int);
void markSrt(int[],int);

//Execution Begins here
int main(int argc, char** argv) {
    //Set Random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    //Fill the array
    filAray(array,SIZE);
    //Print Array
    prntAry(array,SIZE,10);
    //Sort the array
    markSrt(array,SIZE);
    //Print again
    prntAry(array,SIZE,10);
    //Find something
    int rndVal=rand()%90+10;
    cout<<rndVal<<" was found at position "
    <<linSrch(array,SIZE,rndVal)<<endl;
    //Exit Stage right
    
    return 0;
}

int linSrch (int a[],int n,int val){
    int found =-1;
    for(int i=0;i<n;i++){
        if (a[i]==val)return i;
    }
    return-1;
    
}

void markSrt(int a[],int n){
    for (int pos=0;pos<n-1;pos++){
        for(int lst=pos+1;lst<n;lst++){
            if(a[pos]>a[lst]){
                int temp=a[pos];
                a[pos]=a[lst];
                a[lst]=temp;
            }
        }
    }
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==perLine-1)cout<<endl;
    }
}

void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;//Two digit number
    }
}