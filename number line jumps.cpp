#include <iostream>
#include <string>
using namespace std;

string jump(int x1, int v1, int x2, int v2) {
    short n = 0;
    while (n < 10000) {
        if (x1 + n * v1 == x2 + n * v2) {
        return "YES";
        }
        n++;
    }
    return "NO";
}

int main() {
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    
    string res = jump(x1, v1, x2, v2);
    cout << res;
}
