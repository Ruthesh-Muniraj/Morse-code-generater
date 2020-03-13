 #include<iostream>
 #include<string> 
 #include<algorithm>
using namespace std;

int main(){
    
    string text;
    string alfabet="abcdefghijklmnopqrstuvwxyz";
    string Morse[]= {"*_**","**_*_*_*","*_*__*","**_*_*","*","*_**_*","**_**_*",
                    "*_*_*_*","*_*","**_*_**_*","**_*_**","****","**_**","**_*",
                    "*__*","*_*_*_*_*","*_*_**_*","*__*_*","*_*_*","**","*_*_**",
                    "*_*_*_**","*_**_**","*_**_*_*","*_*__*_*","*_*_*__*"," "};

    cout<<"Enter the text to conver in to string :";
    getline(cin,text);
    transform(text.begin(),text.end(),text.begin(),::tolower);
    
    for(const string& x : text){
        
        int m = alfabet.find(x,0);
        cout<<Morse[m]<<" "; // Exception on passing space between text
    }
}/