#include <bits/stdc++.h>
using namespace std;

int main(){
    int  t = 1;
    
    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int &x : a) cin >> x;

        vector<string> luu;
        int cnt = 0;

        for(int i = 0;i < n;i++){
            int top = a[i];
            int j =  i- 1;
            while(j >= 0 && top < a[j]){
                a[j + 1] = a[j]; 
                j--;
            }
            a[j + 1] = top;
            string s = "Buoc " + to_string(cnt) + ": ";
            for(int u = 0; u <= i; u++){
                s += to_string(a[u]) + " ";
            }

            luu.push_back(s);
            cnt++;
        
        }
        reverse(luu.begin(), luu.end());

        for(auto x : luu){
            cout << x << "\n";
        }
        
    }
    return 0;
}