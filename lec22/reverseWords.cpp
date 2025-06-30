#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s = "my name is akash";
    int start = 0;
    int p = 0;
    while (p <= s.length()) {
        if (s[p] == ' ' || s[p] == '\0') 
        {
            int end = p - 1;
            while (start <= end) 
            {
                swap(s[start++] , s[end--]);
            }
            start = p + 1;
        }
        p++;
    }
    cout<<s;
}
