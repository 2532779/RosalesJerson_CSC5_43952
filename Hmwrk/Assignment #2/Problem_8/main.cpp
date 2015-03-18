/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 17, 2015, 6:08 PM
 * Purpose:To calculate the amount of widgets in a pallet
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins!


int main(int argc, char** argv) {
    //Declare variables
    //Pallet weight,total weight,widget weight,initial widget weight
    //stacks of widget
    float palW,ttlW,wigW,iwigW=12.5,stkWi;
    //Prompt user for inputs
    cout<<"What is the weight of the pallet?"<<endl;
    cin>>palW;
    cout<<"What is the weight of the widgets with the pallet?"<<endl;
    cin>>ttlW;
    //Calculations
    wigW=ttlW-palW;
    stkWi=wigW/iwigW;
    //Output results
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Pallet Weight: "<<palW<<" lbs"<<endl;
    cout<<"Total Weight: "<<ttlW<<" lbs"<<endl;
    cout<<"Total Widgets: "<<stkWi<<endl;
    
    

    return 0;
}

