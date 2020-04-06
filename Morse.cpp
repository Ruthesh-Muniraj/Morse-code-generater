#include <iostream>
#include <string> 
#include <algorithm>

int main(){
    
    std::string text;
    int unsupo_symb;
    std::string alphabet="abcdefghijklmnopqrstuvwxyz1234567890.,?/@!& ";
   
    std::string Morse[]= {".-","-...","-.-.","-..",".","..-.","--.",
                    "....","..",".---","-.-",".-..","--","-.",
                    "---",".--.","--.-",".-.","...","-","..-",
                    "...-",".--","-..-","-.--","--..",".----",
                    "..---","...--","....-",".....","-....",
                    "--...","---..","----.","-----",".-.-.-",
                    "--..--","..--..","-..-.",".--.-.","-.-.--",".-..."," / "};
    
    std::cout<<"+-----------------------------------------+\n";
    std::cout<<">In morse an character can represented by \n>  ~(.) Dot and (-) Dash \n>  ~(/) Represent space between words \n>  ~(#) Unsupported Characters          >_\n";
    std::cout<<"+-----------------------------------------+\n\n";
    
    std::cout<<"Enter the text to conver in to Morse code: ";
    getline(std::cin,text);
    transform(text.begin(),text.end(),text.begin(),::tolower);
    
    if(text == "sos") std::cout<<"...---...";
    
    for(const char& x : text){
        
        unsupo_symb=int(x);

        if(unsupo_symb==35||unsupo_symb==36||unsupo_symb==96||unsupo_symb==126||unsupo_symb==40||unsupo_symb==41||unsupo_symb==91||
        unsupo_symb==93||unsupo_symb==123||unsupo_symb==125||unsupo_symb==43||unsupo_symb==45||unsupo_symb ==42||unsupo_symb==61||
        unsupo_symb==92||unsupo_symb==37||unsupo_symb==94||unsupo_symb==58||unsupo_symb==59||unsupo_symb==124||unsupo_symb==39||unsupo_symb==34)
        
        std::cout<<'#';
                
        else{
            int m = alphabet.find(x,0);
            std::cout<<Morse[m]<<"   ";
        }
    }
    
}
/*int found = alphabet.find(x,0);
if(found) std::cout<<Morse[found]<<"   ";
*/
