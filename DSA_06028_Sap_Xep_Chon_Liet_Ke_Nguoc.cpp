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
        int cnt = 1;

        for(int i = 0; i < n - 1; i++){
            int index = i;

            for(int j = i + 1; j < n; j++){
                if(a[j] < a[index]){
                    index = j;
                }
            }

            if(index != i) swap(a[i], a[index]);

            string s = "Buoc " + to_string(cnt) + ": ";
            for(int u = 0; u < n; u++){
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