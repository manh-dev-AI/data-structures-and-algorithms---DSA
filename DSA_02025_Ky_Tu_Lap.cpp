#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<string> a(n) ;
    vector<int> b(n);

    for(int i = 0;i < n;i++){
        cin >> a[i];
        b[i] = i;
    }
    int luu[n + 1][n + 1];
    for(int i = 0;i < n;i++){
        luu[i][i] = 0;
    }
    for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            string s1 = a[i];
            string s2 = a[j];

            vector<int> mask(26 , 0);
            for(char c : s1){
                mask[c - 'A'] = 1;
            }
            int cnt = 0;
            for(char c : s2){
                if(mask[c - 'A']){
                    cnt++;
                }
            }
            luu[i][j] = cnt;
            luu[j][i] = cnt;
        }
    }
    int ans = INT_MAX;
    do{
        int cnt = 0;
        for(int i = 0;i < n - 1;i++){
            cnt += luu[b[i]][b[i+1]];
        }
        ans = min(cnt , ans);
    }while(next_permutation(b.begin() , b.end()));
    cout << ans << "\n";
    return 0;
}