/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on April 29, 2015, 7:56 AM
 * Purpose: Having fun with the exponential
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float ourExp(float x);
double ourExp(double x);

//Execution Begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize variables
    const unsigned int MAX=pow(2,31)-1;
    float xf=1.0f*rand()/MAX*3+1;//(1,4)
    double xd=1.0*rand()/MAX*3+1;//(1,4)
    //Call Function and compare
    float expAprx=ourExp(xf);
    float libExp=exp(xf);
    float prcntEr=(libExp-expAprx)/libExp*100;
    cout<<"exp("<<x<<")="<<libExp<<","<<expAprx<<","<<prcntEr<<"%"<<endl;
    //Call Function and compare
    double expAprxd=ourExp(xd);
    double libExpd=exp(xf);
    double prcntErd=(libExpd-expAprxd)/libExp*100;
    cout<<"exp("<<xf<<")="<<libExpd<<","<<expAprxd<<","<<prcntErd<<"%"<<endl;
    

    return 0;
}

float ourExp(float x){
    //Declare Variables
    float term=1,exp=1,tol=x*1.0e-7f;
    for(int nterm=1;term>tol;nterm++){
        term*=x/nterm;
        exp+=term;
    }
    return exp;
}
double ourExp(double x){
    //Declare Variables
    double exp=1;
    for(int nterm=1;term>tol;nterm++){
        term*=x/nterm;
        exp+=term;
    }
    return exp;
}