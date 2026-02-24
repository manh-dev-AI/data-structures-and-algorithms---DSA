#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    vector<int> v;

    while(cin >> s){
        if(s == "push"){
            int x;
            cin >> x;
            v.push_back(x);
        }
        else if(s == "pop"){
            if(!v.empty())
                v.pop_back();
        }
        else if(s == "show"){
            for(int i = 0; i < v.size(); i++){
                cout << v[i] << " ";
            }
            cout << "\n";
        }
    }
    if(v.empty()){
        cout << "empty\n";
    }
    return 0;
}
