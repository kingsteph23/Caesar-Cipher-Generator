
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//class

class regciphers{

//string ciphers[10]; //cipher messages 
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
   
//array of phrases
string ciphers[5] = {"stephen was here","sly fox, try pox, old slots"
,"the quick brown fox jumps over the lazy dog","operation nimrod is a go",
 "geronimo geronimo geronimo"}; //ciphers
int randomciphers; //random ciphers
string encryptgemini = " ";//holder for the new encrypted message
string decryptapollo = " "; //holfer for decrypted message

public: //public class
  
  //function that allows different phrases to print out.
  void randomizer(){

srand(time(0));

randomciphers = rand()%5; //random ciphers


  }

//reg encryption
void encryption(){
 
//cout << "Reg Message: " << ci1 << endl;
//cout << endl;
//find way to encrypt properly from first phrase to alphapet with caesars cipher PROPERLY
for( i = 0; i < ciphers[randomciphers].length(); i++){ // first statment 
 for( j =0; j<26; j++){ //caesar converstion

//if the conversionchart and phrase have the same character
if(conversionchart[j] == ciphers[randomciphers][i]){
    ciphers[randomciphers][i] = j; // character of sentence is equivalent to conversion chart letter
            
           //formula to encrypt the phrase
           encrypter = (j+15)%26;
        
        //conversion chart is equivlanet to encrypter value
if(j = encrypter){
// encrypter number is equal to conversion chat index
         encrypter = conversionchart[j];
         encryptgemini += encrypter; // converts the number to a string
     }
}
} 
}
cout <<"Encrypted message: " << encryptgemini << " "; //actual encrypted message
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

           //formula to encrypt the phrase
           decrypter =  (t-15 +26)%26;
    
        //conversion chart is equivlanet to encrypter value

// decrypter number is equal to conversion chat index
         decrypter = conversionchart[decrypter];
         decryptapollo += decrypter; // converts the number to a string

}
} 
} 
cout << endl;
//cout <<"decrypted message: " << decryptapollo << " "; //actual encrypted message

}
//message actual
void generatoractual(){

  string userchoice;//user option
  string userinput;
  int tries = 1; // incrementer
  int maxamount = 0; // maximum amount
   //while loop for game.
  while(true){
//user can only place game once before exiting
    if(maxamount == 1){
      cout << "You have reached the maximum amount of times you can use this game." << endl;
      exit(0);
    }
  cout << "Would you like to play a game?" << endl;
  cout << "Type 'yes' to play or 'exit' to quit." << endl;
  getline(cin,userinput);
  // if user exits the game
  if(userinput == "exit"){
    cout << "You have exited the game." << endl;
    break;
  }

  //if user wishes to proceed with the game.
  if(userinput == "yes"){
    cout << "You have chosen to play the game." << endl;
   tries = 0;// for each time the user decides the play game, counter resets to 0.
 while(tries != 3){
  
//user input for the game
  cout << "Please enter your guess:" << endl;

getline(cin,userchoice); //user input

// if user successflly deciphers correctly.
if(userchoice == decryptapollo){
    cout << "You have correctly decrypted the message!" << endl;
  exit(0);
  //for each time the user gets the decipher wrong, the incrementer goes up. If incrememnter == 3, game over
  }else if(!(userchoice == decryptapollo)){
    cout << "Incorrect. Please Try Again." << endl;
  tries++;
  }

// hint appears after 2nd failed attempt. Has first 3 letters, and last 3 letters
if(tries == 2){
  cout << "Hint: The Phrase Starts with "<< decryptapollo[1]<< decryptapollo[2]<<decryptapollo[3] << " and ends with " 
 << decryptapollo[decryptapollo.length()-3]<< decryptapollo[decryptapollo.length()-2]<< decryptapollo[decryptapollo.length()-1]<< endl;
}

//if the increment equals 3, the loop breaks, and the user didn't decipher the code properly.
  if(tries == 3){
    cout << "You have failed to decrypt the message." << endl;
    cout << "Answer: " << decryptapollo << endl;
    exit(0);
  maxamount++;
  }
  

 }
  }
  //if user enters invalid input
  if(userinput != "yes" || userinput != "exit"){
    cout << "Invalid input. Please try again." << endl;
  
 }

  
}
}



};


// main class
int main(){

//object of the dicpher class. Just testing if the encryption is accurate
regciphers encrypter;
encrypter.randomizer(); // generates random messages
encrypter.encryption(); //  encryption algorithm
cout << endl;
encrypter.decipher(); //decipher algorithm

cout << endl;
encrypter.generatoractual(); // object for the actual

    return 0;
}




