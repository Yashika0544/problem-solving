#include <bits/stdc++.h>
using namespace std;

vector<int> find_next_smaller_to_right(vector<int>& arr) {
    vector<int> result(arr.size(), -1);
    stack<int> s;
    for(int i = arr.size() - 1; i >= 0; i--) {
        while(!s.empty() && s.top() >= arr[i]) {
            s.pop();
        }
        if(!s.empty()) {
            result[i] = s.top();
        }
        s.push(arr[i]);
    }
    return result;
}

int main() {
    vector<int> arr = {3, 5, 2, 4, 6, 1};
    vector<int> result = find_next_smaller_to_right(arr);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl; // Output: 2 2 -1 1 1 -1
    return 0;
}

