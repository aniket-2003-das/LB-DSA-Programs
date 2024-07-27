#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < (n -row-1); col++) {
            cout << " ";
        }
        int start = 1;
        for (int col = 0; col < (2 *row+1); col++) {
            // First and last row or first and last column in the row
            if (row==0||row==n-1) {
                if(col%2==0) { 
                    cout << start;
                    start++;
                } 
                else {
                    cout << " ";
                }
            }
            else {
                if (col==0){
                    cout << 1;
                }
                else if (col==2*row)
                {
                    cout<< row+1;
                }
                else{
                    cout << " ";
                }
                
            }
        }

        cout << endl;
    }

    return 0;
}
