#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    vector<int> arr = {1, 3, 40, 2};
    int n = arr.size();
    vector<int> newarr(n);
    stack<int> st;

    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && st.top() <= arr[i]) st.pop();
        newarr[i] = st.empty() ? -1 : st.top();
        st.push(arr[i]);
    }

    for (int x : newarr) cout << x << " ";
    return 0;
}
