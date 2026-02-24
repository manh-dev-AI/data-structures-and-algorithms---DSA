#include <bits/stdc++.h>

using namespace std;

int thaydoixuong(int a,int b){
    string str_a = to_string(a);
    string str_b = to_string(b);
    for(int i = 0;i < str_a.length();i++){
        if(str_a[i] == '6'){
            str_a[i] = '5';
        }
    }
    for(int i = 0;i < str_b.length();i++){
        if(str_b[i] == '6'){
            str_b[i] = '5';
        }
    }
    a = stoi(str_a);
    b = stoi(str_b);
    return a + b;
}
int thaydoilen(int a,int b){
    string str_a = to_string(a);
    string str_b = to_string(b);
    for(int i = 0;i < str_a.length();i++){
        if(str_a[i] == '5'){
            str_a[i] = '6';
        }
    }
    for(int i = 0;i < str_b.length();i++){
        if(str_b[i] == '5'){
            str_b[i] = '6';
        }
    }
    a = stoi(str_a);
    b = stoi(str_b);
    return a + b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int a,b;
    cin >> a >> b;
    cout << thaydoixuong(a,b) << " " << thaydoilen(a,b);
    return 0;
}