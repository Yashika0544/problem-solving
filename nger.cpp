#include <iostream>
#include <stack>
using namespace std;

int* nextGreater(int arr[], int n) {
    stack<int> stack;
    int* ans = new int[n];

    for(int i=n-1; i>=0;i--){
        while(!stack.empty() && stack.top() <= arr[i]){
            stack.pop();
        }
        if(stack.empty()){
            ans[i] = -1;
        }else{
            ans[i]= stack.top();
        }
        stack.push(i);
    }
    return ans;
        
}

int main(){
    int arr[]= {2,1,5,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int* ans = nextGreater(arr, n);
    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    return 0;
}
