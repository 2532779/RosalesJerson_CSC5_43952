/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on May 7, 2015, 9:15 AM
 * Purpose: To figure out which division has the most sales
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float getSale(float);
void fndHigh(float,float);

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    float divA,divB,divC,divD;//Division Sale holder
    float num1,num2,num3,num4;
    //Prompt User for inputs
    cout<<"Input the NorthEast Division's sales"<<endl;
    divA=getSale(num1);
    cout<<"Input the NorthWest Division's Sales"<<endl;
    divB=getSale(num2);
    fndHigh(divA,divB);
    return 0;
}

float getSale(float q){
    cout<<"Enter the amount of sales this Division has earned quarterly"<<endl;
    cin>>q;
    return q;
}

void fndHigh(float a, float b){
    if (a<b){
        cout<<"NorthWest has the most sales with a total of $"<<b<<endl;
    }
    else if (b<a){
        cout<<"NorthEast has the most sales with a total of $"<<a<<endl;
    }
    else if (a==b){
        cout<<"NorthWest and NorthEast are tied in sales!"<<endl;
    }
}