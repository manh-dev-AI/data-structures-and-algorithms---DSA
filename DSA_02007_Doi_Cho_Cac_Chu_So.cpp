#include <bits/stdc++.h>

using namespace std;

string ans;

void backtrack(string s,int k){

    ans = max(s , ans);
    
    if(k == 0){
        return ;
    }
    

    for(int i = 0;i < s.size();i++){
        for(int j = i + 1;j < s.size();j++){
            if(s[j] > s[i]){
                swap(s[j],s[i]);
                backtrack(s , k - 1);
                swap(s[i] , s[j]);
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        string s;
        cin >> k >> s;
        backtrack(s , k);
        cout << ans << "\n";
        ans.clear();
    }
    return 0;
}