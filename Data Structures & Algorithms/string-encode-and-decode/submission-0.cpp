class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for (auto& str : strs) {
            encoded += to_string(str.size()) + '#' + str;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int n = s.size();
        int i = 0;
        while (i < n) {
            int val = 0;
            while (s[i] != '#') {
                val = val * 10 + s[i++] - '0';
            }
            i++;
            string str;
            for (int j = 0; j < val; j++) {
                str += s[i++];
            }
            decoded.push_back(str);
        }
        return decoded;
    }
};
