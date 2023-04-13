#include <bits/stdc++.h>
using namespace std;
int find_next_smaller_to_left(vector<int>& arr) {
    int result;
    stack<int> s;
    for(int i = 0; i < arr.size(); i++) {
        while(!s.empty() && s.top() >= arr[i]) {
            s.pop();
        }
        if(s.empty()) {
            result.push_back(-1);
        } else {
            result.push_back(s.top());
        }
        s.push(arr[i]);
    }
    return result;
}

int main() {
    arr = {3, 5, 2, 4, 6, 1};
    result = find_next_smaller_to_left(arr);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl; 
    return 0;
}

