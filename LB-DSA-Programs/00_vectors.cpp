#include<bits/stdc++.h>
using namespace std;

void explainvector() {
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    v.emplace_back(2,3);

    vector<int> v(5,100);
    vector<int> v(5);

    vector<int> v1(2,50);
    vector<int> v2(v1);




    // Accessing elements in a vector.
    vector<int>::iterator it1 = v.begin();
    vector<int>::iterator it2 = v.end();
    // vector<int>::iterator it3 = v.rend();
    // vector<int>::iterator it4 = v.rbegin();


    vector<int>::iterator it1 = v.begin();
    it1++;
    cout << *(it1) << " ";

    it1 = it1 + 2;
    cout << *(it1) << " ";

    cout << v[0] << " " << v[1];
    cout << v.at(0);
    cout << v.back();

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    for(auto it : v){
        cout << it <<endl;
    }



    // Deletion in a Vector -:
    v.erase(v.begin() + 1);
    v.erase(v.begin() + 1, v.begin() + 4);



    // Inserting Functions-:
    vector<int> v(2,100);
    v.insert(v.begin(), 300);

    v.insert(v.begin() + 1, 2, 10);

    vector<int> copy(2,50);
    v.insert(v.begin(), copy.begin(), copy.end());





    // Vector Properties-:
    v.size();
    v.pop_back();

    v1.swap(v2);
    v.clear();
    cout << v.empty();

}