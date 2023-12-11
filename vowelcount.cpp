class Solution {
public:
    int countVowels(string s) {
        int c = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                c++;
            }
        }
        return c;
    }
};
