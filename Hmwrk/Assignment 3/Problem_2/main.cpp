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
    short num;
    //Prompt user to enter inputs
    cout<<"Choose a number from 1-10 to convert to Roman Numeral"<<endl;
    cin>>num;
        if (num==1)
            cout<<"Roman Numeral: I"<<endl;
        else if (num==2)
            cout<<"Roman Numeral: II"<<endl;
        else if (num==3)
            cout<<"Roman Numeral: III"<<endl;
        else if (num==4)
            cout<<"Roman Numeral: IV"<<endl;
        else if (num==5)
            cout<<"Roman Numeral: V"<<endl;
        else if (num==6)
            cout<<"Roman Numeral: VI"<<endl;
        else if (num==7)
            cout<<"Roman Numeral: VII"<<endl;
        else if (num==8)
            cout<<"Roman Numeral: VIII"<<endl;
        else if (num==9)
            cout<<"Roman Numeral: IX"<<endl;
        else if (num==10)
            cout<<"Roman Numeral: X"<<endl;
        else
            cout<<"You Must Enter a number from 1-10!"<<endl;
        
                    
    
    

    return 0;
}

