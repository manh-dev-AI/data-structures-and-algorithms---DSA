#include<bits/stdc++.h>

using namespace std;

string s;
vector<string> v;
void solve(string ,int n){
    if(s[0] == 'H' && s[n-1] == 'A' && s.find("HH") == -1){
        v.push_back(s);
    }
}

void Try(int i,int n){
    for(int j = 0;j <= 1;j++){
        if (j == 0){
            s[i] = 'H';
        }
        else{
            s[i] = 'A';
        }
        if(i == n - 1){
            solve(s,n);
        }
        else{
            Try(i + 1,n);
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        s.resize(n);
        v.clear();
        Try(0,n);
        sort(v.begin(),v.end());
        for(auto i : v){
            cout << i << "\n";
        }
    }
    return 0;
}