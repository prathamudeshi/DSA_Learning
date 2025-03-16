#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp;
        unordered_map<char, char> reverse_mp;
        for (int i = 0; i < s.size(); i++) {
            if (mp.find(s[i]) == mp.end() && reverse_mp.find(t[i]) == reverse_mp.end()) {
                mp[s[i]] = t[i];
                reverse_mp[t[i]] = s[i];
            } else {
                if (mp[s[i]] != t[i] || reverse_mp[t[i]] != s[i])
                    return false;
            }
        }
        for (auto m : mp) {
            cout << m.first << " -> " << m.second << endl;
        }
        return true;
    }
};

// Driver code
int main() {
    Solution solution;
    string s, t;
    
    cout << "Enter the first string: ";
    cin >> s;
    
    cout << "Enter the second string: ";
    cin >> t;

    if (solution.isIsomorphic(s, t)) {
        cout << "The strings \"" << s << "\" and \"" << t << "\" are isomorphic." << endl;
    } else {
        cout << "The strings \"" << s << "\" and \"" << t << "\" are not isomorphic." << endl;
    }

    return 0;
}
