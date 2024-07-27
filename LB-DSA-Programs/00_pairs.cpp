#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;
    
    pair<int, pair<int, int>> a = {1, {1, 3}};
    cout << a.first << " and " << a.second.first << " " << a.second.second << endl;

    pair<int, int> arr[] = {{1,2}, {2,5}, {4,3}};
    cout << arr[1].second;

}

int main (){
    explainPair();
}