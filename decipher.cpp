
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//decipher function
//list of potiental deciphers
//each are random
// game goes up to x amount of times

//some random decipher is based on potiental pre made phrase
//user has 3x tries to decipher, than answer is revealved
//might have option to  


/*
    1. 3x tries to decipher
    2. if user fails, answer is revealed
    3. user can try again
    4. user can quit
    5. user can get hint
    6. user can get answer
    9. user can get new game with new phrase
   

arcthype:

class:
global variables for instances

functions for automations(amount of tries, hints, answers, etc.)
//reg ciphers
//stephen was here
// sly fox, try pox, old slots
//the quick brown fox jumps over the lazy dog
//operation nimord is a go
//Geronimo Geronimo Geronimo,

tues:
find the ciphers/ and make a the foundations of everything(a class/ciphers)

*/


//class

class regciphers{

string ciphers[10];
string conversionchart[26] = {"A","B","C","D","E","F"
                        ,"G","H","I","J","K","L",
                        "M","N","O","P","Q","R","S",
                        "T","U","V","W","X","Y","Z"};
int tries;


public:
  

//reg encryption
void encryption(){

    //ciphers
    string ci1 = ciphers[0] = "stephen was here";
    string ci2 = ciphers[1] = " sly fox, try pox, old slots";
    string ci3 = ciphers[2] = "the quick brown fox jumps over the lazy dog";
    string ci4 = ciphers[3] = "operation nimord is a go";
    string ci5 = ciphers[4] = "Geronimo Geronimo Geronimo";


//find way to encrypt properly from first phrase to alphapet with caesars cipher PROPERLY
for(int i = 0; i < ci1.size(); i++){
    for(int j = 0; j < conversionchart[26].size(); j++){
       //if for statement if(){
           
    






}

}
}



//decipher
void decipher(){

}



void hints(){



    
}
};


int main(){


regciphers encrypter;

encrypter.encryption();
cout << endl;


    return 0;
}