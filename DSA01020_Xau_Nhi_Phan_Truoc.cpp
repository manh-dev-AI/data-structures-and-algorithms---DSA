#include<bits/stdc++.h>

using namespace std;



void test(){
    string s;
    cin >> s;
    int n = s.length();
    int i = n - 1;
    while(i >= 0 && s[i] == '0'){
        i--;
    }
    if(i < 0){
        for(int j = 0;j < n;j++){
            s[j] = '1';
        }
    }
    else{
        s[i] = '0';
        for(int j = i + 1;j < n;j++){
            s[j] = '1';
        }
    }
    for(int i = 0;i< n;i++){
        cout << s[i];
    }
    cout << endl;
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