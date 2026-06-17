#include <bits/stdc++.h>
using namespace std;


string add(string a, string b) {
    if(a.length() < b.length()) swap(a, b);

    while(b.length() < a.length()) b = "0" + b;

    string res = "";
    int carry = 0;

    for(int i = a.length() - 1; i >= 0; i--) {
        int sum = (a[i]-'0') + (b[i]-'0') + carry;
        res = char(sum % 10 + '0') + res;
        carry = sum / 10;
    }

    if(carry) res = char(carry + '0') + res;
    return res;
}


string multiply(string a, string b) {
    int n = a.size(), m = b.size();
    vector<int> res(n+m, 0);

    for(int i = n-1; i >= 0; i--) {
        for(int j = m-1; j >= 0; j--) {
            int mul = (a[i]-'0')*(b[j]-'0');
            int sum = mul + res[i+j+1];
            res[i+j+1] = sum % 10;
            res[i+j] += sum / 10;
        }
    }

    string s = "";
    for(int x : res) {
        if(!(s.empty() && x == 0)) s += char(x + '0');
    }
    return s.empty() ? "0" : s;
}

int main() {
    int t;
    cin >> t;

    vector<string> dp(101);
    dp[0] = dp[1] = "1";

    for(int i = 2; i <= 100; i++) {
        dp[i] = "0";
        for(int j = 0; j < i; j++) {
            string temp = multiply(dp[j], dp[i-j-1]);
            dp[i] = add(dp[i], temp);
        }
    }

    while(t--) {
        int n;
        cin >> n;
        cout << dp[n] << "\n";
    }
}