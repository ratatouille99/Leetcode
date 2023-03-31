
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isValid(string s);

int main()
{
    string s = "()";

    cout<<isValid(s);
}

bool isValid(string s){

    vector<char>bracks;

    if(s.length() % 2 != 0) return false;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') bracks.push_back(s[i]);

        else if(s[i] == ')'){
            if(bracks.empty()) return false;
            else if(bracks.back() != '(') return false;
            else bracks.pop_back();
        }

        else if(s[i] == ']'){
            if(bracks.empty()) return false;
            else if(bracks.back() != '[') return false;
            else bracks.pop_back();
        }

        else if(s[i] == '}'){
            if(bracks.empty()) return false;
            else if(bracks.back() != '{') return false;
            else bracks.pop_back();
        }
    }

    if(bracks.empty()) return true;
    else return false;

    return true;
}
