#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int s , d;
        cin >> s >> d;
        if(s == 0 && d == 1){
            cout << "0\n";
            continue;
        }
        if(s > d*9){
            cout << "-1\n";
        }
        else {
            int r = s % 9;
            int cnt = s / 9;
            
            int so = d - cnt;
            
            

            string st = "";
            for(int i = 0;i < cnt;i++){
                st += "9";
            }
            string dau = "";
            for(int i = 0;i < so - 1;i++){
                dau += "0";
            }
            dau = dau + to_string(r);
            string ans = dau + st;
            if(ans[0] == '0'){
                ans[0] = '1';
                for(int i = 1;i <  d;i++){
                    if(ans[i] > '0'){
                        int x = ans[i] - '0';
                        x -= 1;
                        ans[i] = x + '0';
                        break;
                    }
                }   
            }
            
            cout << ans << "\n";
        }

    }
    return 0;
}