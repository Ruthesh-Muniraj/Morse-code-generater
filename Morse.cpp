#include <iostream>
#include <string> 
#include <algorithm>
void intro(){
    
    std::cout<<"+-----------------------------------------+\n";
    std::cout<<">In morse an character can represented by \n>  ~(.) Dot and (-) Dash \n>  ~(/) Represent space between words \n>  ~(#) Unsupported Characters          >_\n";
    std::cout<<"+-----------------------------------------+\n\n";
  
}
int main(){
    
    std::string textInputs;
    
    std::string alphabet = "~abcdefghijklmnopqrstuvwxyz1234567890.,?/@!& " ;
    
    std::string Morse[] = {"#",".-","-...","-.-.","-..",".","..-.","--.",
                    "....","..",".---","-.-",".-..","--","-.",
                    "---",".--.","--.-",".-.","...","-","..-",
                    "...-",".--","-..-","-.--","--..",".----",
                    "..---","...--","....-",".....","-....",
                    "--...","---..","----.","-----",".-.-.-",
                    "--..--","..--..","-..-.",".--.-.","-.-.--",".-..."," / "};
    
    intro();
    
    std::cout<<"Enter the textInputs to conver in to Morse code: ";
    getline( std::cin,textInputs );
    transform( textInputs.begin(),textInputs.end(),textInputs.begin(),::tolower );
    
    if(textInputs == "sos") std::cout<<"...---...";
    
    for(const char& input : textInputs){
        
        
        int indexValue = 0;
        indexValue = alphabet.find(input,0);
        
        if( indexValue == -1 ) std::cout<< '#' ;
                
        else std::cout<< Morse[indexValue] << "   " ;
    }
    
}

