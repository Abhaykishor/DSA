#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int ansIndex = 0;
        int n = chars.size();

        while (i < n) {
            int j = i + 1;
            while ( j < n && chars[i] == chars[j]) {
                j++;
            }

            //yaha kab aaoge
            //ya toh purra vector traverse krdiya
            //ya new/different char encounter krdiya

            // to phir old char store krlo
            chars[ansIndex++] = chars[i];
            int count = j - i;

            if (count > 1) {
                //converting count into single digit and storing in ans
                string cnt = to_string(count);
                for ( char ch: cnt) {
                    chars[ansIndex++] = ch;
                }
            }
            i = j;
        }
        return ansIndex;
    }
};