/* 
 * Clear Screen 
 * A test in C++ with ANSI escape characters
 * @author: Carson DeSotel
 * @date: 2020-09-28
 */

#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
    int max = 5;
    for(int i = 0; 100; i += 1) {
        cout << i << endl;
        sleep(1); // keep it slow
        if(i % 5 == 0) {
            // this is an ANSI escape sequence that clears the screen
            cout << "\033[2J"; 
        }
    }
    return 0;
}