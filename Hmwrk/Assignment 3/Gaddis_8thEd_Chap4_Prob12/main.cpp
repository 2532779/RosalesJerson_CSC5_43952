/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 30, 2015, 7:39 AM
 * Purpose: Math Tutor
 */

//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global COnstants

//Function Prototypes

//Execution Begins here



int main(int argc, char** argv) {
    //Declare Variables
    short ttl,qant,pck,cst=99;
    unsigned int   ttlwD1,ttlwD2,ttlwD3,ttlwD4,ttlw;
    //Prompt user for inputs
    cout<<"Enter the amount of packages you bought"<<endl;
    cin>>pck;
    //Calculations
    ttl=pck*cst;
    ttlwD1=ttl-(.20*ttl);
    ttlwD2=ttl-(.30*ttl);
    ttlwD3=ttl-(.40*ttl);
    ttlwD4=ttl-(.50*ttl);
    //if else
    if      (pck>=10&&pck<=19)
        cout<<"Your total cost is going to be $ "<<ttlwD1<<endl;
    else if (pck>=20&&pck<=49)
        cout<<"Your total cost is going to be $ "<<ttlwD2<<endl;
    else if (pck>=50&&pck<=99)
        cout<<"Your total cost is going to be $ "<<ttlwD3<<endl;
    else if (pck>=100)
        cout<<"Your total cost is going to be $ "<<ttlwD4<<endl;
    else if (pck<=0)
        cout<<"Enter a number great than 0!"<<endl;
    return 0;
}

