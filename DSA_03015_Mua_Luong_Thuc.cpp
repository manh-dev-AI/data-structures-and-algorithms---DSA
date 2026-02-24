#include <bits/stdc++.h>

using namespace std;


long long lcm(int a,int b){
    long long c = a*b;
    while(b != 0){
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return c/a;
}

void test(){
    int n,s,m;
    cin >> n >> s >> m;
    float gt_mua = (s - s/7)*n;
    float gt_ban = s * m;
    if(gt_mua >= gt_ban){
        long long day = ceil((1.0 * s * m) / n);
        cout << day << "\n";
    }
    else {
        cout << "-1\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        test();
    }
    return 0;
}