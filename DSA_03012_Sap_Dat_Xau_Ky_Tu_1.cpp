#include <bits/stdc++.h>

using namespace std;

void test(){
    string s;
    cin >> s;
    map<char,int> mp;
    for(int i = 0;i < s.length();i++){
        mp[s[i]]++;
    }
    int n = s.length();
    bool ok = true;
    for(auto x : mp){
        if(x.second > (n+1)/2  ){
            ok = false;
            break;
        }
    }
    if(ok){
        cout << "1\n"; 
    }
    else {
        cout << "-1\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        test();
    }
    return 0;
}
 