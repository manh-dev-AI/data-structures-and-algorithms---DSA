#include <bits/stdc++.h>

using namespace std;

string add(string a,string b){
    string s = "";
    int n = a.length() - 1 , m = b.length() - 1;
    int nho = 0;
    while (n >= 0 || m  >= 0 || nho)
    {   
        int sum = nho;
        if(n >= 0) sum +=  (a[n--] - '0' );
        if(m >= 0) sum += (b[m--] - '0');

        s += (sum % 2 + '0');
        nho = sum / 2;
    }
    reverse(s.begin() , s.end());
    return s;
}
string mutify(string a,string b){
    string ans = "0";
    int m = b.size();

    for(int i = m - 1; i >= 0; i--){
        if(b[i] == '1'){
            string tmp = a + string(m - i - 1, '0');
            ans = add(ans , tmp);
        }
    }
    return ans;
}
long long chuyendoi(string s){
    long long ans = 0;
    for(char c : s){
        ans = ans * 2 + (c - '0');
    }
    return ans;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s1,s2;
        cin >> s1 >> s2;
        string s = mutify(s1 , s2);
        long long ans =chuyendoi(s);
        cout << ans << "\n";
    }
    return 0;
}