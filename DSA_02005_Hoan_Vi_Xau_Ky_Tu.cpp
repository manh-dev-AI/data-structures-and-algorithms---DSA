#include <bits/stdc++.h>

using namespace std;

int x[20] = {0};
int used[20] = {0};
void Try(int i,string s){
    for(int j = 0;j < s.size();j++){
        if(!used[j]){
            x[i] = j;
            used[j] = 1;
            if(i == s.size() - 1){
                for(int t = 0;t < s.size();t++){
                    cout << s[x[t]];
                }
                cout << " ";
            }
            else {
                Try(i + 1,s);
            }
            used[j] = 0;
        }       
    }  
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Try(0 , s);
        cout << "\n";
    }
    return 0;
}