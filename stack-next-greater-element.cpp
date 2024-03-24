// #include <bits/stdc++.h>
// using namespace std;

// #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// vector<int> NGE(vector<int> v) {
//     vector<int> nge(v.size());
//     stack<int> st;
//     for (int i = 0; i < v.size(); i++) {
//         while (!st.empty() && v[i] > v[st.top()]) {
//             nge[st.top()] = i;
//             st.pop(); // Pop the index from the stack after assigning the NGE
//         }
//         st.push(i);
//     }
//     while (!st.empty()) {
//         nge[st.top()] = -1;
//         st.pop();
//     }
//     return nge;
// }

// int main() {
//     optimize();
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//     }
//     vector<int> nge = NGE(v);
//     for (int i = 0; i < n; i++) {
//         cout << v[i] << " " << (nge[i] == -1 ? -1 : v[nge[i]]) << endl;
//         // If NGE[i] exists, print v[NGE[i]], otherwise print -1
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// vector<int> NGE(vector<int> v) {
//     vector<int> nge(v.size(), -1); 
//     stack<int> st;
//     for (int i = 0; i < v.size(); i++) {
//         while (!st.empty() && v[i] > v[st.top()]) {
//             nge[st.top()] = v[i]; 
//             st.pop(); 
//         }
//         st.push(i);
//     }
//     return nge;
// }

// int main() {
//     optimize();
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//     }
//     vector<int> nge = NGE(v);
//     for (int i = 0; i < n; i++) {
//         cout << v[i] << " " << nge[i] << endl;
//     }
//     return 0;
// }



#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> NGE(vector<int> v) {
    stack<int> s;
    s.push(v[0]);
    int n = v.size(); 
    for(int i = 1; i < n; i++) { 
        while(!s.empty() && s.top() < v[i]) { 
            cout << v[i] << " "; 
            s.pop();
        }
        s.push(v[i]); 
    }
    while(!s.empty()) { 
        cout << "-1" << " ";
        s.pop();
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n); 
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    NGE(v);
    return 0;
}
