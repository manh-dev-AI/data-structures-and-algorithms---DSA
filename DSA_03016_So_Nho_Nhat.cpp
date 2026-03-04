#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int s , d;
        cin >> s >> d;
        if(s > d*9){
            cout <<"-1\n";
        }
        else {
            string st = "";
            int i = 9;
            int cnt = 0;
            while(s > 0 ){
                if(s - i >= 0){
                    cnt++;
                    s -= i;
                    if(s == 0 && cnt < d){
                        
                        s += i;
                        cnt--;
                        i--;
                        
                    }
                    else {
                        st = to_string(i) + st;
                    }
                    
                }
                else {
                    i--;
                }
                
            }
            cout << st << "\n";
        }
    }
    return 0;
}