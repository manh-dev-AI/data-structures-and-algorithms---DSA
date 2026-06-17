#include <bits/stdc++.h>

using namespace std;


vector<char> op = {'+' , '-' , '*' , '/'};
vector<char> num = {'0' , '1', '2' , '3', '4', '5', '6','7' , '8' , '9'};

int tinh(int a,int b,char op){
    if(op == '+'){
        return a + b;
    }
    else if(op == '-'){
        return a - b;
    }
    else if(op == '*'){
        return a * b;
    }
    else if(op == '/'){
        return a / b;
    }
}

bool kt(string s){
    stringstream ss(s);
    int A,B,C;
    char op, equal;

    ss >> A >> op >> B >> equal >> C;

    if(A < 10 || A >= 100){
        return false;
    }

    if(B < 10 || B >= 100){
        return false;
    }
    if(C < 10 || C >= 100){
        return false;
    }
    if(op == '/'){
        if(B == 0) return false;
        if(A % B != 0) return false;
    }
    if(tinh(A , B , op) != C){
        return false;
    }

    return true;
        

}
bool ok = true;
void backtrack(int pos,vector<int> vitri,string s){
    if(!ok) return;
    if(pos == vitri.size()){
        if(kt(s)){
            cout << s << "\n";
            ok = false;
        }
        return;
    }

    if(vitri[pos] == 3){
        for(int i = 0;i < 4;i++){
            s[vitri[pos]] = op[i];
            backtrack(pos + 1,vitri , s);
            s[vitri[pos]] = '?';
        }
    }
    else {
        for(int i = 0;i < 10;i++){
            s[vitri[pos]] = num[i];
            backtrack(pos + 1,vitri , s);
            s[vitri[pos]] = '?';
        }
    }
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        ok = true;
        string s;
        getline(cin , s);
        int n = s.size();
        vector<int> vtri;
        for(int i = 0;i < n;i++){
            if(s[i] == '?'){
                vtri.push_back(i);
            }
        }
        backtrack(0 , vtri , s);
        if(ok){
            cout << "WRONG PROBLEM!\n";
        }
    }
    return 0;
}