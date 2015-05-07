/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on May 4, 2015, 9:39 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
void sieve (bool [],int);
void prntPrm(const bool [],int,int);
void intial (bool [],int);
//Execution Begins here

int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=1001;
    bool prime[SIZE];
    //Initialize the array
    intial(prime,SIZE);
    //Perform the Sieve
    sieve(prime,SIZE);
    //Print the results
    prntPrm(prime,SIZE,10);
    //Exit Stage Right!!

    return 0;
}

void prntPrm(const bool primes[],int n,int perLine){
    //Print out only the prime numbers
    int nPrimes=0;
    for(int i=0;i<n;i++){
        if(primes[i]){
            nPrimes++;
            cout<<setw(5)<<i;
            if(nPrimes%perLine==(perLine-1))cout<<endl;
            nPrimes++;
        }
    }
    cout<<endl<<"Total Number of primes "
            <<"between 0 and "<<n-1<<" = "<<nPrimes<<endl;
}

void sieve (bool primes[],int n){
    //Outer-loop to process the sieve
    for(int i=2;i<sqrt(n);i++){
        if(primes [i]){
            //Inner-loop
            for(int j=2*i;j<n;j+=i){
                primes[j]=false;
            }
        }
    }
    
}

void intial (bool primes[],int n){
    for (int i=0;i<n;i++){
        primes[i]=true;
    }
    primes[0]=false;
    primes[1]=false;
}
