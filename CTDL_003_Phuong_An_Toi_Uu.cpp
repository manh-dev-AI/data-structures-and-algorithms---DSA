#include <bits/stdc++.h>

using namespace std;

int fopt = INT_MIN;
vector<int> xopt;
int n , b;

vector<pair<int,int>> v;
vector<int> x;
double Bound(int i, int weight, int value){
    if(i >= n) return value;
    if(weight >= b) return value;

    return value + (b - weight) * (double)v[i].second / v[i].first;
}
void Bound_And_Branch(int i,int sumW,int sumV){
    if(i == n){
        if(sumV > fopt){
            fopt = sumV;
            xopt = x;
        }
        return;
    }
    for(int j = 1;j >= 0;j--){
        x[i] = j;
        
        int newW = sumW + j*v[i].first;
        int newV = sumV + j*v[i].second;

        if(newW <= b){
            if(Bound(i + 1 , newW , newV) > fopt){
                Bound_And_Branch( i + 1,newW , newV);
            }
        }
    }

}

int main(){
    ifstream fi("data.in");
    
    fi >> n >> b;
    int a[n];
    int c[n];
    x.resize(n);
    xopt.resize(n);
    for(int i = 0;i < n;i++){
        fi >> a[i];
    }
    for(int i = 0;i < n;i++){
        fi >> c[i];
    }
    for(int i = 0;i < n;i++){
        v.push_back({a[i] , c[i]});
    }
    sort(v.begin() , v.end() , [&](auto x,auto y){
        return (1.0*x.second / x.first) > (1.0*y.second / y.first);
    });
    Bound_And_Branch(0 , 0 , 0);
    cout << fopt << "\n";
    for(int i = 0;i < n;i++){
        if(xopt[i] == 1){
            cout << v[i].second << " ";
        }
    }
    cout << "\n";
    fi.close();
    return 0;
}