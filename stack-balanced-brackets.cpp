#include<bits/stdc++.h>
using namespace std;
const long long N = 1e6 + 5;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


unordered_map<char, int> symbols = {
    {'[', -1}, {'{', -2}, {'(', -3},
    {']', 1}, {'}', 2}, {')', 3}
};


string isBalanced(string s) {

    stack<char>st;
    for(char bracket:s)
    {
        if(symbols[bracket]<0)
        {
            st.push(bracket);
        } else 
        {
            if(st.empty()) return "NO";
            char top=st.top();
            st.pop();
            if(symbols[top]+symbols[bracket]!=0) 
            return "NO"; 
        }
    }
    if(st.empty()) return "YES";
    return "NO";

}
int main()
{
     optimize();
     int t;
     cin>>t;
     while(t--)
     {
        string s;
        cin>>s;
        cout<<isBalanced(s)<<endl;
     }
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// const long long N = 1e6 + 5;

// string isBalanced(string s) {
//     stack<char> st;
//     set<char> openingBrackets = {'[', '{', '('};

//     for (char bracket : s) {
//         if (openingBrackets.count(bracket)) {
//             st.push(bracket);
//         } else {
//             if (st.empty()) return "NO";
//             char top = st.top();
//             st.pop();
//             if ((bracket == ']' && top != '[') || 
//                 (bracket == '}' && top != '{') || 
//                 (bracket == ')' && top != '(')) {
//                 return "NO";
//             }
//         }
//     }
//     return st.empty() ? "YES" : "NO";
// }

// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     int t;
//     cin >> t;
//     while (t--) {
//         string s;
//         cin >> s;
//         cout << isBalanced(s) << endl;
//     }
//     return 0;
// }
