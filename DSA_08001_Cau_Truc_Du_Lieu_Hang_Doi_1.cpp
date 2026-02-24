#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<int> q;
        while (n--)
        {
            int digit;
            cin >> digit;
            if(digit == 1){
                cout << q.size() << "\n";
            }
            else if(digit == 2){
                if(q.empty()){
                    cout << "YES\n";
                }
                else {
                    cout << "NO\n";
                }
            }
            else if(digit == 3){
                int c;
                cin >> c;
                q.push(c);
            }
            else if(digit == 4){
                if(!q.empty()){
                    q.pop();
                }
            }
            else if(digit == 5){
                if(!q.empty()){
                    cout << q.front() << "\n";
                }
                else {
                    cout << "-1\n";
                }
            }
            else if(digit == 6){
                if(!q.empty()){
                    cout << q.back() << "\n";
                }
                else {
                    cout << "-1\n";
                }
            }
        }
        cout << "\n";
        
    }
    return 0;
}