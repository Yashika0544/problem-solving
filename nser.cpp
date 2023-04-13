using namespace std;

int next_smaller_to_right(vector<int>& arr) {
    int result(arr.size(), -1);
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
    arr = {3, 5, 2, 4, 6, 1};
    result = next_smaller_to_right(arr);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}

