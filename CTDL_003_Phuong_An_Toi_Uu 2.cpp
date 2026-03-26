#include <bits/stdc++.h>
using namespace std;

int fopt = INT_MIN;
int n, b;

struct Item{
    int w, v, id;
};

vector<Item> a;
vector<int> x, xopt;

double Bound(int i, int weight, int value){
    if(i >= n) return value;
    if(weight >= b) return value;

    return value + (b - weight) * (double)a[i].v / a[i].w;
}

void Branch(int i, int sumW, int sumV){
    if(i == n){
        if(sumV > fopt){
            fopt = sumV;
            xopt = x;
        }
        return;
    }

    for(int j = 1; j >= 0; j--){
        x[i] = j;

        int newW = sumW + j * a[i].w;
        int newV = sumV + j * a[i].v;

        if(newW <= b){
            if(Bound(i+1,newW,newV) > fopt){
                Branch(i+1,newW,newV);
            }
        }
    }
}

int main(){
    cin >> n >> b;

    vector<int> w(n), v(n);

    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=0;i<n;i++) cin >> w[i];

    a.resize(n);

    for(int i=0;i<n;i++){
        a[i] = {w[i], v[i], i};
    }

    sort(a.begin(), a.end(), [](Item x, Item y){
        return (double)x.v/x.w > (double)y.v/y.w;
    });

    x.resize(n);
    xopt.resize(n);

    Branch(0,0,0);

    cout << fopt << "\n";

    vector<int> ans(n,0);

    for(int i=0;i<n;i++){
        if(xopt[i]){
            ans[a[i].id] = 1;
        }
    }

    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
    }

    cout << "\n";
}