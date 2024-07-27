#include<bits/stdc++.h>
using namespace std;

void explainList() {
    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5);

    ls.emplace_front();

    // rest functions are same as vector functions.
    // begin, end, rbegin, rend, clear, insert, size, swap.
}


void explainDeque() {

    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.pop_front();
    dq.emplace_front(3);

    dq.pop_back();
    dq.pop_front();

    dq.back();
    dq.front();

    // rest functions are same as vector functions.
    // begin, end, rbegin, rend, clear, insert, size, swap.

}


void explainStack() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(5);

    cout << st.top();

    st.pop();

    cout << st.top();

    cout << st.size();

    cout << st.empty();

    stack<int> st1, st2;
    st1.swap(st2);

}


void explainQueue() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);

    q.back() += 5;

    cout << q.back();

    cout << q.front();

    q.pop();

    cout << q.front();


    // size swap empty same as stack.

}


void explainPriority_queue() {
    priority_queue<int> pq;

    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout << pq.top();

    // size swap empty functiojn same as others.

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout<< pq.top();    

}