#include <bits/stdc++.h>

using namespace std;

long long fibo[92];
void tinh(){
    fibo[1] = 1;
    fibo[2] = 1;
    for(int i = 3;i <= 92;i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}
/*
xét g = g_t-2 + g_t-1 
--> nếu k > len(g_t-2) thì dãy nằm ở bên phải k -= len(g_t-)
nếu k < len(g_t-2) thì k nằm ở dãy bên trái  tại dãy g(n-1)
*/
int main(){
    tinh();
    int t;
    cin >> t;
    while(t--){
        int n , k;
        cin >> n >> k;
        while(n > 2){
            if (k <= fibo[n-2]) n-=2;
            else {
                k -= fibo[n-2];
                n -= 1;
            }
        }
        if(n == 1){
            cout << "A\n";
        }
        else cout << "B\n";
        
    }
    return 0;
}