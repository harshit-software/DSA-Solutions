// Bruteforce Approach (Using Map)
class Solution {
public:
    int compress(vector<char>& chars) {
        map<char, int> mp;
        string res = "";
        char prev = chars[0];
        for (char ch : chars) {
            if (ch == prev)
                mp[prev]++;
            else {
                if (mp[prev] == 1) {
                    res += prev;
                } else {
                    res += prev;
                    res += to_string(mp[prev]);
                }
                mp.erase(prev);
                prev = ch;
                mp[prev]++;
            }
        }
        if (mp[prev] == 1) {
            res += prev;
        } else {
            res += prev;
            res += to_string(mp[prev]);
        }
        mp.erase(prev);
        int i = 0;
        for (char ch : res) {
            chars[i] = ch;
            i++;
        }
        return res.size();
    }
};


// Bruteforce Approach (Without Map)
class Solution {
public:
    int compress(vector<char>& chars) {
        string res = "";
        char prev = chars[0];
        int count=0;
        for (char ch : chars) {
            if (ch == prev)
                count++;
            else {
                if (count == 1) {
                    res += prev;
                } else {
                    res += prev;
                    res += to_string(count);
                }
                prev = ch;
                count=1;
            }
        }
        if (count == 1) {
            res += prev;
        } else {
            res += prev;
            res += to_string(count);
        }
        int i = 0;
        for (char ch : res) {
            chars[i] = ch;
            i++;
        }
        return res.size();
    }
};

// Optimal Approach
class Solution {
public:
    int compress(vector<char>& chars) {
        char prev = chars[0];
        int count = 0, low = 0;
        for (char ch : chars) {
            if (ch == prev)
                count++;
            else {
                chars[low] = prev;
                low++;
                if (count > 1) {
                    string cnt = to_string(count);
                    for (char c : cnt) {
                        chars[low] = c;
                        low++;
                    }
                }
                prev = ch;
                count = 1;
            }
        }
        chars[low] = prev;
        low++;
        if (count > 1) {
            string cnt = to_string(count);
            for (char c : cnt) {
                chars[low] = c;
                low++;
            }
        }
        return low;
    }
};