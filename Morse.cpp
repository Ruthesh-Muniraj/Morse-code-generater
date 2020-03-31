#include<iostream>
#include<string> 
#include<algorithm>
using namespace std;

int main(){
    
    string text;
    string alphabet="abcdefghijklmnopqrstuvwxyz1234567890.,?/@ ";
    string Morse[]= {".-","-...","-.-.","-..",".","..-.","--.",
                    "....","..",".---","-.-",".-..","--","-.",
                    "---",".--.","--.-",".-.","...","-","..-",
                    "...-",".--","-..-","-.--","--..",".----",
                    "..---","...--","....-",".....","-....",
                    "--...","---..","----.","-----",".-.-.-",
                    "--..--","..--..","-..-.",".--.-."," / "}
    
    cout<<"-----------------------------------------";
    cout<<"In morse an character can represented by \n  Dot(.) and Dash(-) \n  (/)represent space between words";
    cout<<"Enter the text to conver in to string :";
    getline(cin,text);
    transform(text.begin(),text.end(),text.begin(),::tolower);
 
    if(text == "sos"){
    cout<<"...---...";
    }
 
    else{
      for(const char& x : text){
          int m = alphabet.find(x,0);
          cout<<Morse[m]<<" ";
      }
    }
}
