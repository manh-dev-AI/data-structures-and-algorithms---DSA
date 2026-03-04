#include <bits/stdc++.h>
using namespace std;

string tinh(int k, string a, string b){
    int n = a.length();
    int m = b.length();
    string s = "";
    int nho = 0;

    while(n > 0 || m > 0 || nho > 0){
        int digitA = 0;
        int digitB = 0;

        if(n > 0){
            digitA = a[n-1] - '0';
            n--;
        }

        if(m > 0){
            digitB = b[m-1] - '0';
            m--;
        }

        int sum = digitA + digitB + nho;
        nho = sum / k;
        sum = sum % k;

        s = char(sum + '0') + s;
    }

    return s;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int k;
        string a, b;
        cin >> k >> a >> b;

        cout << tinh(k, a, b) << "\n";
    }

    return 0;
}