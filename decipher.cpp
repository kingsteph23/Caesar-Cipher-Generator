
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//decipher function
//list of potiental deciphers
//each are random
// game goes up to x amount of times

//some random decipher is based on potiental pre made phrase✅
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
int i; // for loop for message
int j; //for loop for conversion chart

int s;
int t;
int encrypter;//encrpyter formula
int decrypter;
   //ciphers
    //string ci1 = ciphers[0] = "stephen was here";
    string ci1 = ciphers[0] = "stop thief";
    string ci2 = ciphers[1] = " sly fox, try pox, old slots";
    string ci3 = ciphers[2] = "the quick brown fox jumps over the lazy dog";
    string ci4 = ciphers[3] = "operation nimord is a go";
    string ci5 = ciphers[4] = "geronimo geronimo geronimo";



public: //public class
  string gemini;//holder for the new encrypted message
  string apollo = " ";

//reg encryption
void encryption(){
 int modifier;
 
 
//cout << "Reg Message: " << ci1 << endl;
//cout << endl;
//find way to encrypt properly from first phrase to alphapet with caesars cipher PROPERLY
for( i = 0; i < ci1.length(); i++){ // first statment 
 for( j =0; j<26; j++){ //caesar converstion

//if the conversionchart and phrase have the same character
if(conversionchart[j] == ci1[i]){
    ci1[i] = j; // character of sentence is equivalent to conversion chart letter

  
         //cout << j << " " ; //phrase is seperated into numbers
            
           //formula to encrypt the phrase
           encrypter = (j+15)%26;
        
        
          // cout << encrypter << endl;	

        //conversion chart is equivlanet to encrypter value
if(j = encrypter){
// encrypter number is equal to conversion chat index
         encrypter = conversionchart[j];
         gemini += encrypter; // converts the number to a string
     }
}
} 
}
//cout <<"Encrypted message: " << gemini << " "; //actual encrypted message
}

//decipher
//attempt to view the entire decrpytion message
void decipher(){
cout <<"Encrypted message: " << gemini << " "; // encrypted message


for( s = 0; s < gemini.length(); s++){ // first statment 
 for( t =0; t<26; t++){ //caesar converstion

//if the conversionchart and phrase have the same character
if(conversionchart[t] == gemini[s] ){
      gemini[s] = t ; // character of sentence is equivalent to conversion chart letter

  
         //cout << j << " " ; //phrase is seperated into numbers
            
           //formula to encrypt the phrase
           decrypter = (t-15)%26;
        
        
          // cout << encrypter << endl;	

        //conversion chart is equivlanet to encrypter value
if( t = decrypter ){
// encrypter number is equal to conversion chat index
         decrypter = conversionchart[t];
         apollo += decrypter; // converts the number to a string
     }
}
} 
} 
cout << endl;
cout <<"decrypted message: " << apollo << " "; //actual encrypted message
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
//cout << endl;
encrypter.decipher();
cout << endl;


    return 0;
}