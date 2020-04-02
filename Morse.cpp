#include<iostream>
#include<string> 
#include<algorithm>

int main(){
    
    std::string text;
    std::string alphabet="abcdefghijklmnopqrstuvwxyz1234567890.,?/@!& ";
    std::string Morse[]= {".-","-...","-.-.","-..",".","..-.","--.",
                    "....","..",".---","-.-",".-..","--","-.",
                    "---",".--.","--.-",".-.","...","-","..-",
                    "...-",".--","-..-","-.--","--..",".----",
                    "..---","...--","....-",".....","-....",
                    "--...","---..","----.","-----",".-.-.-",
                    "--..--","..--..","-..-.",".--.-.","-.-.--",".-..."," / "};
    
    std::cout<<"+-----------------------------------------+\n";
    std::cout<<">In morse an character can represented by \n>  ~Dot(.) and Dash(-) \n>  ~(/) Represent space between words   >_\n";
    std::cout<<"+-----------------------------------------+\n\n";
    
    std::cout<<"Enter the text to conver in to string : ";
    getline(std::cin,text);
    transform(text.begin(),text.end(),text.begin(),::tolower);
 
    if(text == "sos"){
    std::cout<<"...---...";
    }
 
    else{
      for(const char& x : text){
          int m = alphabet.find(x,0);
          std::cout<<Morse[m]<<"   ";
      }
    }
}
