#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> v;

    while(t--){
        string s;
        cin >> s;

        if(s == "PUSH"){
            int x;
            cin >> x;
            v.push_back(x);
        }
        else if(s == "POP"){
            if(!v.empty()){
                v.pop_back();
            }
        }
        else if(s == "PRINT"){
            if(v.empty()){
                cout << "NONE\n";
            }
            else{
                cout << v.back() << "\n";
            }
        }
    }
    return 0;
}
