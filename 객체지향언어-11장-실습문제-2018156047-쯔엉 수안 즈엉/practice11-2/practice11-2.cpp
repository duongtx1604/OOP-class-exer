#include <iostream>
using namespace std;

int main() {
    char a;
    int cnt{};

    while (true) {
        cin.get(a);
        if (a == ' ') {
            cnt++;
        }
        else if (a == '\n')
               break;
    }
    cout << cnt;
}
