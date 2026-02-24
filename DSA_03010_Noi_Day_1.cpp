#include <bits/stdc++.h>

using namespace std;

void test(){
    int n;
    cin >> n;
    multiset<long long> s;
    for(int i = 0;i < n;i++){
        long long x;
        cin >> x;
        s.insert(x);
    }
    long long cost = 0;
    while(s.size() > 1){
        auto it1 = s.begin();
        long long a = *it1;
        s.erase(it1);

        auto it2 = s.begin();
        long long b = *it2;
        s.erase(it2);

        long long sum = a+b;
        s.insert(sum);
        cost += sum;

    }
    cout << cost << "\n";
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