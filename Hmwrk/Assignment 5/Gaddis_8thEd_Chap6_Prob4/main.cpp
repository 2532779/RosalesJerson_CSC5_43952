/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on May 7, 2015, 10:04 AM
 * Purpose: To determine the safest accident zone in the nation
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int numAcci(int);
void fndLow(int,int,int,int,int);

//Execution begins here

int main(int argc, char** argv) {
    //Declare Variables
    int accN,accS,accC,accE,accW;//To hold the accidents in each region
    int num1;//To hold the values for the function
    //Prompt use for inputs
    cout<<"How many accidents are there in the North?"<<endl;
    accN=numAcci(num1);//To get the accidents in the north
    cout<<"How many accidents are there in the South?"<<endl;
    accS=numAcci(num1);//To get the accidents in the south
    cout<<"How many accidents are there in the Central?"<<endl;
    accC=numAcci(num1);//To get the accidents in the Central
    cout<<"How many accidents are there in the East?"<<endl;
    accE=numAcci(num1);//To get the accidents in the East
    cout<<"How many accidents are there in the West?"<<endl;
    accW=numAcci(num1);//To get the accidents in the West
    fndLow(accN,accS,accC,accE,accW);
    

    return 0;
}

int numAcci(int A){
    cin>>A;
    while(A<=0){
        cout<<"You must enter a number greater than zero!"<<endl;
        cin>>A;
    }
    return A;
}

void fndLow(int a,int b,int c,int d,int e){
    cout<<"Now determining which is the safest zone for driving..."<<endl;
    if (a<b&&a<c&&a<d&&a<e){
        cout<<"The lowest Accident rate is North with: "<<endl;
        cout<<a<<" accidents!"<<endl;
    }
    else if (b<a&&b<c&&b<d&&b<e){
        cout<<"The lowest Accident rate is South with: "<<endl;
        cout<<b<<" accidents!"<<endl;
    }
    else if (c<a&&c<b&&c<d&&c<e){
        cout<<"The lowest Accident rate is Central with: "<<endl;
        cout<<c<<" accidents!"<<endl;
    }    
    else if (d<a&&d<b&&d<c&&d<e){
        cout<<"The lowest Accident rate is East with: "<<endl;
        cout<<d<<" accidents!"<<endl;
    }
    else if (e<a&&e<b&&e<c&&e<d){
        cout<<"The lowest Accident rate is West with: "<<endl;
        cout<<e<<" accidents!"<<endl;
    }
}