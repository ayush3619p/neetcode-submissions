class Solution {
public:

bool isAnagram(string s, string t) {
    if (s.size() != t.size())
        return false;

    multiset<char> ss(s.begin(), s.end());
    multiset<char> tt(t.begin(), t.end());

    return ss == tt;
}

};
