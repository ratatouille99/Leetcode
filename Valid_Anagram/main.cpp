#include <iostream>
#include <string>

using namespace std;

bool isAnagram(string, string);

int main()
{
    string s = "anagram";
    string t = "naragam";

    cout<<isAnagram(s,t);

    return 0;
}

bool isAnagram(string s, string t) {
    int chars[26] = {0};
    int index1, index2;

    if(s.length() != t.length()) return false;

    for(int i = 0; i < s.length(); i++){
        index1 = int(s[i]) - 'a';
        index2 = int(t[i]) - 'a';

        chars[index1] += 1;
        chars[index2] -= 1;
    }

    for(int j = 0; j < 26; j++){
        if(chars[j] != 0){
            return false;
        }
    }
    return true;
}
