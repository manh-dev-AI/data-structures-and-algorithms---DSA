#include <bits/stdc++.h>

using namespace std;

int n,k;
int cnt = 0;
vector<string> res;

bool check(string s){
    int d = 0;
    int var = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'A') {
            d++;
        }
        else {
            d = 0;
        }
        var = max(d , var);
    }
    return var == k;
}

void Try(int i,string s){
    if(i == n){
        if(check(s)){
            cnt++;
            res.push_back(s);
        }
        return;
    }
    Try(i + 1,s + "A");
    Try(i + 1,s + "B");
}

int main(){
    
    cin >> n >> k;
    Try(0 , "");
    cout << cnt << "\n";
    for(auto x : res){
        cout << x << "\n";
    }
    return 0;
}