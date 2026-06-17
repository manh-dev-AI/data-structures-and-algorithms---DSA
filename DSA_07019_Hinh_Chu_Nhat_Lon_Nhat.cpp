#include <bits/stdc++.h>

using namespace std;

long long tinh(int a[],int n){
	stack<int> st;
	long long res = 0;
	for(int i = 0;i <= n;i++){
		long long values;
		if(i == n){
			values = 0;
		}
		else {
			values = a[i];
		}
		while(!st.empty() && a[st.top()] > values){
			int height = a[st.top()];
			st.pop();
			int width ;
			if(st.empty()) width = i;
			else {
				width = i - st.top() - 1;
			}
			res = max(res , 1LL * width * height);
		}
		if(i < n){
			st.push(i);
		}
	}
	return res;
}

void solve(){
	int n , m;
	cin >> n >> m;
	int a[m];
	for(int i = 0;i < m;i++){
		cin >> a[i];
	}
	int b[m];
	for(int i = 0;i <m;i++){
		b[i] = n - a[i];
	}
	long long MAX = max(tinh(a , m) , tinh(b , m));
	cout<< MAX << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    
    while(t--){
        solve();
    }
    return 0;
}