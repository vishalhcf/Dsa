

//algorithm using pop method 
//0(n)log method

#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
class MyQueue {
    stack<int> in, out;
public:
    MyQueue() {}
    
    void push(int x) {
        in.push(x);
    }
    
    int pop() {
        int val = peek();
        out.pop();
        return val;
    }
    
    int peek() {
        if (out.empty()) {
            while (in.size()) {
                out.push(in.top());
                in.pop();
            }
        }
        return out.top();
    }
    
    bool empty() {
        return in.empty() && out.empty();
    }
};