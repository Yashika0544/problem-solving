#include <iostream>
#include <stack>

using namespace std;

int* nextGreaterElementinLeft(int arr[], int n) 
{ 
    stack<int> s; 
    int* ans = new int[n]; 
  
    for (int i = 0; i < n; i++) { 
        while (!s.empty() && s.top() <= arr[i]) 
            s.pop(); 
  
        ans[i] = (s.empty()) ? -1 : s.top(); 
  
        s.push(arr[i]); 
    } 
  
    return ans; 
} 

int main() 
{ 
    int arr[] = { 4, 7, 6, 9, 2, 8, 4, 7, 9 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    int* ans = nextGreaterElementinLeft(arr, n); 
  
    for (int i = 0; i < n; i++) 
        cout << ans[i] << " "; 
  
    return 0; 
}
