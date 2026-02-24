#include <bits/stdc++.h>

using namespace std;

void test(){
    string s;
    cin >> s;
    int i = s.length() - 1;
    while (s[i] == '1' && i >= 0)
    {
        i--;
    }
    if (i < 0){
        for(int j = 0;j < s.length();j++){
            cout << "0";
        }
        cout << endl;
        return;
    }
    s[i] = '1';
    for(int j = i + 1;j < s.length();j++){
        s[j] = '0';
    }
    for(auto x : s){
        cout << x;
    }
    cout << endl;
}

int main(){\
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        test();
    }
    return 0;
}