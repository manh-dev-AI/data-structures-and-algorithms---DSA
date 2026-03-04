#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        string s;
        cin >> s;
        vector<pair<char,int>> v;
        for(int i = 0;i < s.length();i++){
            char c = s[i];
            bool xet = true;
            for(auto &x : v){
                if(x.first == c){
                    x.second++;
                    xet = false;
                }
            }
            if(xet){
                v.push_back({c , 1});
            }
        }
        sort(v.begin() , v.end() , [&](auto x , auto y){
            return x.second > y.second;
        });
        int n = v.size();
        vector<int> a(n , 0);
        for(int i = 0;i < n;i++)
        {
            a[i] = v[i].second;
        }
        while(k--)
        {   
            a[0]--;
            sort(a.rbegin() , a.rend());
        }
        long long sum = 0;
        for(int i = 0;i < n;i++){
            sum += 1ll*a[i]*a[i];
        }
        cout << sum << "\n";
   
    }
    return 0;
}