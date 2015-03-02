/* 
 * File:   Problem for Number 7!
 * Author: Jerson Rosales
 *
 * Created on February 22, 2015, 5:54 PM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
     double oceanLevelRise = 1.5,
        
            oceanRise1 = 5,// Ocean rise in 5 years
            
             oceanRise2 = 7, //Ocean rise in 7 years
             
             oceanRise3 = 10, // Ocean rise in 10 years
             
             totalRise1,
             totalRise2,
             totalRise3;
     
     totalRise1 = oceanRise1 * oceanLevelRise;
     totalRise2 = oceanRise2 * oceanLevelRise;
     totalRise3 = oceanRise3 * oceanLevelRise;
     
     cout << "Ocean Rise after 5 years: " << totalRise1 << "mm" << endl;
     cout << "Ocean Rise After 7 years: " << totalRise2 << "mm" << endl;
     cout << "Ocean Rise after 10 years: " << totalRise3 <<"mm" << endl;
     return 0;
}

