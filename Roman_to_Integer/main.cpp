#include <iostream>

using namespace std;

int romandToInteger(string s);

int main()
{
    string s = "LIV";

    cout << romandToInteger(s)<< endl;

    return 0;
}

int romandToInteger(string s){
    int numero = 0, i = 0;

    while(i < s.length()){
        switch(s[i]){
            case 'I': numero++;
                      if(s[i+1] == 'V' || s[i+1] == 'X'){
                        numero-=2;
                      }break;
            case 'V': numero+=5; break;
            case 'X': numero+=10;
                      if(s[i+1] == 'L' || s[i+1] == 'C'){
                        numero-=20;
                      }break;
            case 'L': numero+=50;break;
            case 'C': numero+=100;
                      if(s[i+1] == 'D' || s[i+1] == 'M'){
                        numero-=200;
                      }break;
            case 'D': numero+=500;break;
            case 'M': numero+=1000;break;
        }
        i++;
    }

    return numero;
}
