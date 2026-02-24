#include<bits/stdc++.h>

using namespace std;

int n,k;

int x[20] ={0};

int tinh(int a[]){
    long long sum = 0;
    for(int i = 0;i < n;i++){
        if(x[i] > 0){
            sum += a[i];
        }
    }
    if(sum == k){
        return 1;
    }
    else {
        return 0;
    }
}
bool xet = true;
void Try(int i,int a[]){
    for(int j = 1;j >= 0;j--){
        x[i] = j;
        if(i == n - 1){
            if(tinh(a)){
                xet = false;
                cout << "[";
                bool first = true;
                for(int i = 0;i < n;i++){
                    if(x[i] > 0){
                        if(!first){
                            cout << " ";
                        }
                        cout << a[i];
                        first = false;
                    }
                    
                 }
                 cout << "] ";
            }
        }
        else{
            Try(i + 1 , a);
        }
    }
}


int main(){
    int t;
    cin >> t;
    while(t--){
        
        cin >> n >> k;
        int a[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        sort(a , a+n);
        Try(0 , a);
        if(xet){
            cout<< "-1";
        }
        xet = true;
        cout << "\n";
    }
    return 0;
}