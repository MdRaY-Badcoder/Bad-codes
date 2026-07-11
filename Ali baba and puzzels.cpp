#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long A, B, C, D;
  cin >> A >> B >> C >> D ;
 
       __int128 a = A, b = B, c = C, d = D;
 
    if (
 
 
        a + b - c == d  || a - b + c == d || a * b - c == d ||
        a + b * c == d  || a - b * c == d || a * b + c == d ||
 
        (a + b) * c == d || (a - b) * c == d || (a * b) * c == d ||
        a * (b + c) == d || a * (b - c) == d || a + (b * c) == d
    )
        cout << "YES";
    else
        cout << "NO";
 
    return 0;
}
