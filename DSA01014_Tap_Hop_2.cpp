#include <bits/stdc++.h>
using namespace std;

int n, k, s;
int cnt;

void backtrack(int start, int dem, int sum) {

    // đủ k phần tử
    if(dem == k) {
        if(sum == s) cnt++;
        return;
    }

    // số phần tử còn phải chọn
    int conlai = k - dem;

    // tổng nhỏ nhất có thể thêm
    int minSum = 0;
    for(int i = 0; i < conlai; i++) {
        minSum += start + i;
    }

    // tổng lớn nhất có thể thêm
    int maxSum = 0;
    for(int i = 0; i < conlai; i++) {
        maxSum += n - i;
    }

    // nhánh cận
    if(sum + minSum > s) return;
    if(sum + maxSum < s) return;

    // thử các giá trị
    for(int j = start; j <= n; j++) {

        // vượt tổng thì dừng
        if(sum + j > s) break;

        backtrack(j + 1, dem + 1, sum + j);
    }
}

int main() {

    while(cin >> n >> k >> s) {

        // điều kiện kết thúc
        if(n == 0 && k == 0 && s == 0) {
            break;
        }

        cnt = 0;

        backtrack(1, 0, 0);

        cout << cnt << "\n";
    }

    return 0;
}