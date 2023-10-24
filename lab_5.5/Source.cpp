#include <iostream>
using namespace std;

int j(int b, int p, int m) {
    if (p == 0) { // p дорівівнює "0"
        return 1; // b^0 = 1
    }
    else if (p % 2 == 0) { // p - парне 
        int temp = j(b, p / 2, m);
        return (temp * temp) % m;
    }
    else {
        int temp = j(b, p / 2, m); // p - непарне
        return (b * (temp * temp)) % m;
    }
}

int main() {
    int b, p, m;
    cout << "b = "; cin >> b;
    cout << "p = "; cin >> p;
    cout << "m = "; cin >> m;

   cout << "j = " << j(b, p, m) << endl;
    return 0;
}
