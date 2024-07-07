
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//decipher function✅
//list of potiental deciphers✅
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

int s;// for loop for decrypted message
int t;// for loop for decrypted conversion chart
char encrypter;//encrpyter formula
char decrypter; //decryption formula
   //ciphers
    //string ci1 = ciphers[0] = "stephen was here";
    string ci1 = ciphers[0] = "stephen was here";
    string ci2 = ciphers[1] = "sly fox, try pox, old slots";
    string ci3 = ciphers[2] = "the quick brown fox jumps over the lazy dog";
    string ci4 = ciphers[3] = "operation nimrod is a go";
    string ci5 = ciphers[4] = "geronimo geronimo geronimo";

string encryptgemini = " ";//holder for the new encrypted message
string decryptapollo = " "; //holfer for decrypted message

public: //public class
  

//reg encryption
void encryption(){
 
//cout << "Reg Message: " << ci1 << endl;
//cout << endl;
//find way to encrypt properly from first phrase to alphapet with caesars cipher PROPERLY
for( i = 0; i < ci4.length(); i++){ // first statment 
 for( j =0; j<26; j++){ //caesar converstion

//if the conversionchart and phrase have the same character
if(conversionchart[j] == ci4[i]){
    ci4[i] = j; // character of sentence is equivalent to conversion chart letter

  
         //cout << j << " " ; //phrase is seperated into numbers
            
           //formula to encrypt the phrase
           encrypter = (j+15)%26;
        
        
         //  cout << encrypter << endl;	

        //conversion chart is equivlanet to encrypter value
if(j = encrypter){
// encrypter number is equal to conversion chat index
         encrypter = conversionchart[j];
         encryptgemini += encrypter; // converts the number to a string
     }
}
} 
}
cout <<" message: " << encryptgemini << " "; //actual encrypted message
}


//generator actual

//decipher
//attempt to view the entire decrpytion message
void decipher(){
//cout <<"Encrypted message: " << encryptgemini << " "; // encrypted message


for( s = 0; s < encryptgemini.length(); s++){ // first statment 
 for( t =0; t<26; t++){ //caesar converstion

//if the conversionchart and phrase have the same character
if(conversionchart[t] == encryptgemini[s] ){
      encryptgemini[s] = t ; // character of sentence is equivalent to conversion chart letter

  
         //cout << j << " " ; //phrase is seperated into numbers
            
           //formula to encrypt the phrase
           decrypter =  (t-15 +26)%26;
        
          // cout << encrypter << endl;	

        //conversion chart is equivlanet to encrypter value

// decrypter number is equal to conversion chat index
         decrypter = conversionchart[decrypter];
         decryptapollo += decrypter; // converts the number to a string

}
} 
} 
cout << endl;
cout <<"decrypted message: " << decryptapollo << " "; //actual encrypted message

}
//message actual
void generatoractual(){
  string userchoice;//user option
  string userinput;
  int tries = 0;

 
while(true){
  
  cout << "Please enter your guess:" << endl;

getline(cin,userchoice); //gets


if(userchoice == decryptapollo){
  break;
    cout << "You have correctly decrypted the message!" << endl;
  cout << "Answer: " << decryptapollo << endl;
  }if(!(userchoice == decryptapollo)){
  tries++;
  cout << "Incorrect. Please Try Again." << endl;
  }



  if(tries == 3){
    cout << "You have failed to decrypt the message." << endl;
    cout << "Answer: " << decryptapollo << endl;
    break;

  }
  
  
   if(userchoice == "exit"){
    cout << "You have exited the game." << endl;
    break;

   
   }
}
}



};



/*

TODO: 
    1. 3x tries to decipher <-✅
    2. if user fails, answer is revealed<-✅
    3. user can try again (might have to do a random generator, as oppossed to same ans)✅
    4. user can quit✅
    5. user can get hint
    6. user can get answer✅
    9. user can get new game with new phrase

    basic idea:
    reveal message
    ask the user what is the decrypted message
    has 3 tries
    after the 2nd try, they will get a hint
    after the 3rd try, they will get the answer

    user will be asked to play again or quit. Will output a different message.
    same process, until user quits the game.
   */






// main class
int main(){

//object of the dicpher class. Just testing if the encryption is accurate
regciphers encrypter;
cout << "Actual message:" << endl; //actual message
encrypter.encryption();
cout << endl;
encrypter.decipher();

cout << endl;
 encrypter.generatoractual();

    return 0;
}




