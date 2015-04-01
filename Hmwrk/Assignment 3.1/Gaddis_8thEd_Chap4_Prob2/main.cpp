/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on March 25, 2015, 10:02 AM
 * Purpose: Roman Numeral Converter
 */

//System Libraries
#include <iostream>

using namespace std;

//User libraries

//Global Constants

//Function Prototypes

//Execution Begins
int main(int argc, char** argv) {
    //Declare Variables
     unsigned short num;
    //Prompt user to enter inputs
    cout<<"Choose a number from 1-10 to convert to Roman Numeral"<<endl;
    cin>>num;
    switch (num)
    {
            case 1:
            cout<<"Roman Numeral: I"<<endl;
            break;
            case 2:
            cout<<"Roman Numeral: II"<<endl;
            break;
            case 3:
            cout<<"Roman Numeral: III"<<endl;
            break;
            case 4:
            cout<<"Roman Numeral: IV"<<endl;
            break;
            case 5:
            cout<<"Roman Numeral: V"<<endl;
            break;
            case 6:
            cout<<"Roman Numeral: VI"<<endl;
            break;
            case 7:
            cout<<"Roman Numeral: VII"<<endl;
            break;
            case 8:
            cout<<"Roman Numeral: VIII"<<endl;
            break;
            case 9:
            cout<<"Roman Numeral: IX"<<endl;
            break;
            case 10:
            cout<<"Roman Numeral: X"<<endl;
            break;
            default:
            cout<<"You Must Enter a number from 1-10!"<<endl;
            break;
    }
        
                    
    
    

    return 0;
}

