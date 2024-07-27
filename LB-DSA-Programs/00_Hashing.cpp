#include<bits/stdc++.h>
using namespace std;

int hash[1000000] = {0}; //Possible till 10^6 and 10^7 for bool for array declared globally.
int main(){

    int n;
    cin >> n;
    int arr[n];
    for (int i =0; i<n; i++){
        cin >> arr[i];
    }

    // precomutation (to check 1, 2, 4, 5, 12) in array
    int hash[1000000] = {0}; //Possible till 10^6 and 10^7 for bool for array declared in int main.
    for (int i =0; i<n; i++){
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        // fetching
        cout << hash[number] << endl;
    }

    return 0;
}