
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

string ciphers[10]; //cipher messages 
char conversionchart[26] = {'a','b','c','d','e','f'
, 'g', 'h','i','j','k','l',
'm','n','o','p','q','r','s',
't','u','v','w','x','y','z'}; //conversion chart
int tries;//user has 3 tries
int i;
int j;
int encrypter;//encrpyter formula
char encryptermess;
char gemini;

public: //public class
  

//reg encryption
void encryption(){
 int modifier;
    //ciphers
    //string ci1 = ciphers[0] = "stephen was here";
    string ci1 = ciphers[0] = "stop thief";
    string ci2 = ciphers[1] = " sly fox, try pox, old slots";
    string ci3 = ciphers[2] = "the quick brown fox jumps over the lazy dog";
    string ci4 = ciphers[3] = "operation nimord is a go";
    string ci5 = ciphers[4] = "geronimo geronimo geronimo";

cout << ci1 << endl;
cout << endl;
//find way to encrypt properly from first phrase to alphapet with caesars cipher PROPERLY
for( i = 0; i < ci1.length(); i++){
 for( j =0; j<26; j++){


     
           /*
           encrpytion:
           1. compare if the letters in the setence and coversion chart match
           2. if they match, apply the ceasers cipher regular formula 
           3. use the modded letters into a new array
           4. output the modded encrpyted phrase 
           
           
           */
          
//cout << ci1[i] << endl;

if(conversionchart[j] == ci1[i]){
    ci1[i] = j;

  
         //cout << j << " " ; //phrase is seperated into numbers
            
           //formula to encrypt the phrase
           encrypter = (j+15)%26;
        
        
          // cout << encrypter << endl;	

        
if(j = encrypter){

           
                 encrypter = conversionchart[j];
            encryptermess =  encrypter;
            gemini = encryptermess;
             
     
     }
 cout << gemini << " ";
}


}
 
}
 
}

//decipher
void decipher(){
cout << gemini << endl;
}


//amount of hints/ hints for each messages
void hints(){




}
};

// main class
int main(){

//object of the dicpher class. Just testing if the encryption is accurate
regciphers encrypter;

encrypter.encryption();
cout << endl;


    return 0;
}