#include <bits/stdc++.h>  
using namespace std;

int main() {
    // Using make_pair for compatibility with all compilers
    pair<int, int> p1 = make_pair(1, 3);  
    cout << p1.first << " " << p1.second << endl;

    pair<int, pair<int, int>> p2 = make_pair(1, make_pair(3, 4));
    cout << p2.first << " " << p2.second.second << " " << p2.second.first << endl;

    pair<int, int> arr[] = {make_pair(1, 2), make_pair(2, 4), make_pair(5, 3)};
    cout << arr[1].second << endl;

    return 0;
}
