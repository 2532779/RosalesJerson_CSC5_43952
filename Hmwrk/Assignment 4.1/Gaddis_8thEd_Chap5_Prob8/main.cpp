/* 
 * File:   main.cpp
 * Author: Jerson Rosales
 * Created on April 6, 2015, 1:56 PM
 * Purpose:Math tutor!
 * Addition Tutor is A
 * Subtraction Tutor is B
 * Multiplication Tutor is C
 * Division Tutor is D
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

//User libraries

//Global Constants
short minval=1,maxval=50;//Minimum Addition and Subtraction Values
short minMval=1,maxMval=12;//Minimum Multiplication and Division Values

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
    char choice;
    do{
    //Menu
    cout<<"If you wish to use the Addition tutor enter 1"<<endl;
    cout<<"If you wish to use the Subtraction tutor enter 2"<<endl;
    cout<<"If you wish to use the Multiplication tutor enter 3"<<endl;
    cout<<"If you wish to use the Division tutor enter 4"<<endl;
    cout<<"Type any other number to exit"<<endl;
    cin>>choice;
    switch (choice){
        case '1':{
                //Declare variables
                unsigned char again;
                unsigned short num1,num2,ansr;
                //System time
                unsigned seed = time(0);
                //Seed random number generator
                srand(seed);
                cout<<"This program is a Addition Math Tutor"<<endl;
                cout<<"You must Type a number!"<<endl;
                do{
                num1=(rand()%(maxval-minval+1))+minval;
                num2=(rand()%(maxval-minval+1))+minval;
                cout<<" "<<num1<<endl;
                cout<<"+"<<num2<<endl;
                cout<<"----"<<endl;
                cin>>ansr;
                if(ansr==num1+num2)
                    cout<<"Hurray you did it!"<<endl;
                else if (ansr!=num1+num2)
                    cout<<"Oh no! The answer is actually: "<<(num1+num2)<<endl;
                cout<<"Do you want to try another problem?(Y/N)"<<endl;
                cin>>again;
                }while (again=='Y'||again=='y');
                break;
        }
        case '2':{
                unsigned char again;
                short num1,num2,ansr;
                //System time
                unsigned seed = time(0);
                //Seed random number generator
                srand(seed);
                cout<<"This program is a Subtraction Math Tutor"<<endl;
                cout<<"You must Type a number!"<<endl;
                do{
                num1=(rand()%(maxval-minval+1))+minval;
                num2=(rand()%(maxval-minval+1))+minval;
                cout<<" "<<num1<<endl;
                cout<<"-"<<num2<<endl;
                cout<<"----"<<endl;
                cin>>ansr;
                if(ansr==num1-num2)
                    cout<<"Hurray you did it!"<<endl;
                else if (ansr!=num1-num2)
                    cout<<"Oh no! The answer is actually: "<<(num1-num2)<<endl;
                cout<<"Do you want to try another problem?(Y/N)"<<endl;
                cin>>again;
                }while (again=='Y'||again=='y');
                break;
        }
        case '3':{
                unsigned char again;
                unsigned short num1,num2,ansr;
                //System time
                unsigned seed = time(0);
                //Seed random number generator
                srand(seed);
                cout<<"This program is a Multiplication Math Tutor"<<endl;
                cout<<"You must Type a number!"<<endl;
                do{
                num1=(rand()%(maxMval-minMval+1))+minval;
                num2=(rand()%(maxMval-minMval+1))+minval;
                cout<<" "<<num1<<endl;
                cout<<"*"<<num2<<endl;
                cout<<"----"<<endl;
                cin>>ansr;
                if(ansr==num1*num2)
                    cout<<"Hurray you did it!"<<endl;
                else if (ansr!=num1*num2)
                    cout<<"Oh no! The answer is actually: "<<(num1*num2)<<endl;
                cout<<"Do you want to try another problem?(Y/N)"<<endl;
                cin>>again;
                }while (again=='Y'||again=='y');
                break;
        }
        case '4':{
                unsigned char again;
                float num1,num2,ansr;
                //System time
                unsigned seed = time(0);
                //Seed random number generator
                srand(seed);
                cout<<"This program is a Division Math Tutor"<<endl;
                cout<<"You must Type a number!"<<endl;
                do{
                num1=(rand()%(maxMval-minMval+1))+minval;
                num2=(rand()%(maxMval-minMval+1))+minval;
                cout<<" "<<num1<<endl;
                cout<<"%"<<num2<<endl;
                cout<<"----"<<endl;
                cin>>ansr;
                //Formatting output
                cout<<setprecision(2)<<fixed<<showpoint<<endl;
                if(ansr==num1/num2)
                    cout<<"Hurray you did it!"<<endl;
                else if (ansr!=num1/num2)
                    cout<<"Oh no! The answer is actually: "<<(num1/num2)<<endl;
                cout<<"Do you want to try another problem?(Y/N)"<<endl;
                cin>>again;
                }while (again=='Y'||again=='y');
                break;
        }
        default:{
                cout<<"Exit?"<<endl;
                break;
        }
    };
    }while(choice>='1'&&choice<='4');
    
    return 0;
}

