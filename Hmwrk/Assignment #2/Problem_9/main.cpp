/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 17, 2015, 8:48 PM
 * Purpose:Figure how many calories you consume from cookies
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins
int main(int argc, char** argv) {
    //Declare Variables
    //How many cookies,total calories,calories per cookies,
    unsigned short ckies=30,cal=300,calpC=10;
    //Input users amount of cookie eaten and left over cookies from bag
    float amtoC,lftovrC;
    //Total calories of cookies and total calories of final cookies
    float ttlc;
    cout<<"How many cookies have you eaten?"<<endl;
    cin>>amtoC;
    //Calculations
    lftovrC=ckies-amtoC;
    ttlc=cal-(lftovrC*static_cast<float>(calpC));
    
    //Output the results
    cout<<"Total Number of cookies eaten: "<<amtoC<<endl;
    cout<<"Total Number of calories consumed: "<<ttlc<<endl;
    
            
            
    

    return 0;
}

