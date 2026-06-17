#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        vector<string> luu;
        int cnt = 1;
        vector<int> b = a;
        sort(b.begin() , b.end());
        for(int i = 0;i < n - 1;i++){
            
                for(int j = 0; j < n - i - 1; j++){
                    if(a[j] > a[j+1]){
                        swap(a[j], a[j+1]);
                    }
                }
            
            string s = "Buoc " + to_string(cnt) + ": ";
            for(int u = 0; u < n; u++){
                s += to_string(a[u]) + " ";
            }

            luu.push_back(s);
            cnt++;
        
            if(a == b){
                break;
            }
        }
        reverse(luu.begin(), luu.end());

        for(auto x : luu){
            cout << x << "\n";
        }
    }
    return 0;
}