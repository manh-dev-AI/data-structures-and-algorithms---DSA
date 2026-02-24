#include<bits/stdc++.h>

using namespace std;

int binary_search(int a[],int n ,int x){
    int l = 0;
    int r = n-1;
    while (l <= r)
    {
        int mid = (l + r)/2;
        if(a[mid] == x){
            return mid;
        }
        else if(a[l] <= a[mid]){
            if(a[l] <= x && x < a[mid]){
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        else {
            if(a[mid] < x && x <= a[r]){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
    }
    return -1;
    
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin >> n >> x;
        int a[n];
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        int index = binary_search(a , n , x);
        cout << index + 1 << "\n";
    }
    
    return 0;
}