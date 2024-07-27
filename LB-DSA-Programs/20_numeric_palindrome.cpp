#include <iostream>
using namespace std;

int main() {
    int n ; 
    cin >> n ;

    for (int row = 0; row < n; row++) { 

        int col;
        // straight counting.
        for (col = 0; col < row + 1 ; col = col + 1) {
            cout << (col+1);           
        }
        col = col - 1;

        // reverse counting.
        for (; col >=1; col = col - 1) {
            cout << col;
        }
        cout << endl; 
    }
return 0;
}