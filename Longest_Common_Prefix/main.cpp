#include <iostream>
#include <vector>

using namespace std;

string longest_common(vector<string>&vec);

int main()
{
    vector<string>strs;

    strs.push_back("reflower");
    strs.push_back("flow");
    strs.push_back("flight");

    cout<<longest_common(strs);

    return 0;
}

string longest_common(vector<string>&vec){

    string salida = "";

    if(vec.size() == 1){
        salida += vec[0];
        return salida;
    }

    for(int i = 1, z = i+1; i < vec.size(); i++){//3
        for(int j = 0; j < vec[0].length(); j++){//4
            if(vec.size()>= 3){
                if(vec[0][j] == vec[i][j] && vec[0][j] == vec[z][j]){
                    salida += vec[0][j];
                }
            }
            else if(vec.size() == 2){
                if(vec[0][j] == vec[i][j]){
                    salida += vec[0][j];
                }
                else{
                    break;
                }
            }
        }
        break;
    }
    return salida;
}
