/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on April 6, 2015, 3:33 PM
 * Purpose:Hotel Occupancy
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short flr,rms,ocu,unocu;
    float ttlrms,ttlocu;
    //Prompt user for inputs
    cout<<"How many floors are in the Hotel"<<endl;
    cin>>flr;
    for(unsigned short cnt=1;cnt<=flr;cnt++)
    {
        if(cnt!=13){
            cout<<"How many rooms are there in floor "<<cnt<<"?"<<endl;
            cin>>rms;
            cout<<"How many rooms are occupied in floor "<<cnt<<"?"<<endl;
            cin>>ocu;
            ttlrms+=rms;
            ttlocu+=ocu;
            if (cnt==flr){
                cout<<"Total Floor in the Hotel: "<<flr<<endl;
                cout<<"Total Rooms in the Hotel: "<<ttlrms<<endl;
                cout<<"Total Rooms occupied: "<<ttlocu<<endl;
                cout<<"Total Rooms unoccupied: "<<(ttlrms-ttlocu)<<endl;
                cout<<setprecision(2)<<fixed<<showpoint<<endl;
                cout<<"Percentage of rooms occupied: %"<<(ttlocu/ttlrms)*100<<endl; 
            }
        }
        else if (cnt==13)
        {
            cout<<"Skipping 13 floor"<<endl;
        }
            
    }
    

    return 0;
}

