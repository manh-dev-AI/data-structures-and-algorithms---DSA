#include <bits/stdc++.h>  

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for(int r = 1;r <= t;r++){
        int k;
        string s;
        cin >> k >> s;
        int i = s.size() - 1;
        while(s[i-1] >= s[i] && i > 0){
            i--;
        }
        if(i == 0){
            cout << k << " " << "BIGGEST\n";
            continue;
        }
        int j = s.size() - 1;
        while(s[j] <= s[i - 1]){
            j--;
        }
        swap(s[i - 1] , s[j]);
        reverse(s.begin() + i , s.end());
        cout << k << " " << s << "\n";

    }
    return 0;
}