#include <bits/stdc++.h>

using namespace std;

vector<string> v;

int check(string s){
    if(s[4] != '2'  || (s[0] == '0' && s[1] == '0') || (s[2] == '2' && s[3] == '2') || (s[2] == '0' && s[3] == '0') || (s[2] == '2' && s[3] == '0')){
        return false;
    }
    return true;
}
void in(string s){
    for(int i = 0;i < 8;i++){
        cout << s[i];
        if(i == 1){
            cout << "/";
        }
        if(i == 3){
            cout << "/";
        }
    }
    cout << "\n";
}
void Try(string s){
    if(s.length() == 8){
        if(check(s)){
            v.push_back(s);
        }
        return;
    }
    Try(s + "0");
    Try(s + "2");
}

bool cmp(string &a,string &b){
    string x = "";
    string y = "";
    for(int i = 4; i < 8;i++){
        x += a[i];
        y += b[i];
    }
    return x < y;
}

int main(){
    Try("");
    sort(v.begin() , v.end() );
    for(auto x : v){
        in(x);
    }
    return 0;
}