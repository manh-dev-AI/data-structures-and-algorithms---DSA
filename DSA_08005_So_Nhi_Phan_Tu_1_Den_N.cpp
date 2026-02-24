#include <iostream>
#include <queue>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        queue<string> q;
        q.push("1");

        for (int i = 1; i <= n; i++) {
            string s = q.front();
            q.pop();

            cout << s << " ";

            q.push(s + "0");
            q.push(s + "1");
        }

        cout << endl;
    }

    return 0;
}
