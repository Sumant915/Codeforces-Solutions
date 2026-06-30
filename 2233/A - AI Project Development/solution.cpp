#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long n, x, y, z;
        cin >> n >> x >> y >> z;
 
        long long t1 = (n + (x + y) - 1) / (x + y);
 
        long long t2;
 
        if (x * z >= n) {
            t2 = (n + x - 1) / x;
        } else {
            long long remain_work = n - x * z;
            long long new_speed = x + 10 * y;
 
            t2 = z + (remain_work + new_speed - 1) / new_speed;
        }
 
        cout << min(t1, t2) << '
';
    }
 
    return 0;
}