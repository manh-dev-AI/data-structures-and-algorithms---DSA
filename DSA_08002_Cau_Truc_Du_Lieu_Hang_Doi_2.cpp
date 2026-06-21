#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    queue<int> qu;
    for(int i = 0;i < q;i++){
        string s;
        cin >> s;
        if(s == "PUSH"){
            int x;
            cin >> x;
            qu.push(x);
        }
        if(s == "POP"){
            if(!qu.empty()){
                qu.pop();
            }
        }
        if(s == "PRINTFRONT"){
            if(!qu.empty()){
                cout << qu.front() << "\n";
            }
            else cout << "NONE\n";
        }
    }
    return 0;
}