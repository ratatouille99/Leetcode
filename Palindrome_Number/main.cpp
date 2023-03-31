#include <iostream>

using namespace std;

bool isPalindrome(int);

int main()
{
    int n = 121;

    cout<<isPalindrome(n);

    return 0;
}


bool isPalindrome(int x) {
    string numero = to_string(x);
    int tamano = numero.length();

    for(int i = 0; i < numero.length()/2; i++){//1221
        if(numero[i] == numero[tamano-1]){
            tamano = tamano -1;
            continue;
        }
        return false;
    }
    return true;
}
