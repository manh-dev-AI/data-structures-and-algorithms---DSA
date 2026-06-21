#include <bits/stdc++.h>
using namespace std;

set<long long> cube;

int main(){
    for(long long i = 0; i <= 1000000; i++){
        cube.insert(i * i * i);
    }

    int T;
    cin >> T;

    while(T--){
        string n;
        cin >> n;

        int m = n.size();
        long long ans = -1;

        for(int len = m; len >= 1; len--){

            vector<int> bit(m, 0);

            for(int i = 0; i < len; i++){
                bit[i] = 1;
            }
            
            do{
                long long val = 0;

                for(int i = 0; i < m; i++){
                    if(bit[i]){
                        val = val * 10 + (n[i] - '0');
                    }
                }

                if(cube.count(val)){
                    ans = max(ans, val);
                }

            }while(prev_permutation(bit.begin(), bit.end()));
        }

        cout << ans << "\n";
    }

    return 0;
}