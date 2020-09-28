#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
    int max = 5;
    for(int i = 0; true; i += 1) {
        cout << i << endl;
        sleep(1);
        if(i % 5 == 0) {
            cout << "\033[2J";
        }
    }
    return 0;
}