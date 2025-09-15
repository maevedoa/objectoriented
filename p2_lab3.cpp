#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void setDeepValue(int ***p, int value) {
    ***p = value;
}

int main() {
    int x = 0;
    int *p1 = &x;
    int **p2 = &p1;
    int ***p3 = &p2;

    setDeepValue(p3, 42);
    cout << "x is now " << x << "\n";

return 0;
}