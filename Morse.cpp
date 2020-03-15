 #include<iostream>
 #include<string> 
 #include<algorithm>
using namespace std;

int main(){
    
    string text;
    string alphabet="abcdefghijklmnopqrstuvwxyz ";
    string Morse[]= {"*_**","**_*_*_*","*_*__*","**_*_*","*","*_**_*","**_**_*",
                    "*_*_*_*","*_*","**_*_**_*","**_*_**","****","**_**","**_*",
                    "*__*","*_*_*_*_*","*_*_**_*","*__*_*","*_*_*","**","*_*_**",
                    "*_*_*_**","*_**_**","*_**_*_*","*_*__*_*","*_*_*__*"," "};

    cout<<"Enter the text to conver in to string :";
    getline(cin,text);
    transform(text.begin(),text.end(),text.begin(),::tolower);
    
    // if ( alphabet.find(' ',0) == -1) {

    // }

    for(const char& x : text){
        
        int m = alphabet.find(x,0);
        cout<<Morse[m]<<" "; // Exception on passing space between text
    }
}