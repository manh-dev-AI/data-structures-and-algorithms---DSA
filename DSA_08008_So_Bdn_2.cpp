#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        queue<string> qu;
        int n;
        cin >> n;

        qu.push("1");
        queue<int> du;
        du.push(1 % n);

        while(!qu.empty()){
            string s = qu.front();
            qu.pop();
            
            int r = du.front();
            du.pop();

            if(r == 0){
                cout << s << "\n";
                break;
            }

            du.push((r * 10) % n);
            du.push((r * 10 + 1) % n);


            qu.push(s + "0");
            qu.push(s + "1");

        }
    }
    return 0;
}