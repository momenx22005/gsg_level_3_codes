#include <iostream>
using namespace std;

int count = 0;

void rec(int n, int NotAllowed = 0, string current = "") {
    if (n == 0) {
        cout << current << "\n";
        count++;
        return;
    }

    if (NotAllowed != 1)
        rec(n - 1, 1, current+"Swimming ");

    if (NotAllowed != 2)
        rec(n - 1, 2, current+"Football ");

    if (NotAllowed != 3)
        rec(n - 1, 3, current+"Running ");
}

int main() {
    int n;
    cin >> n;
    rec(n);
    cout << "count: " << count << endl;
}