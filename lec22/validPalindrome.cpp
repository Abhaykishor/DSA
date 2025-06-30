#include<iostream>
#include<string>
using namespace std;
class Solution {
bool valid(char ch) {
    if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
        return 1;
    }
    
    return 0;
}
char toLowerCase(char ch) {
    if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool checkPalindrome(string a) {
    int s = 0;
    int e = a.length()-1;

    while(s<=e) {
        if(a[s] != a[e])
        {
            return 0;       
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
public:
    bool isPalindrome(string s) {
        //faltu character hatado

        string temp ="";

        for (int i = 0; i < s.length(); i++) {
            if(valid(s[i])) {
                temp.push_back(s[i]);
            }
        }

        //lowercase mai krdo

        for (int i = 0; i < temp.length(); i++) {
            temp[i] = toLowerCase(temp[i]);
        }

        //check palindrome
        return checkPalindrome(temp);
    }
};

//another approach
/*

class Solution {
    char toLowerCase(char ch){

  if(ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9'){

    return ch;

  }

  else {

    char temp = ch - 'A' + 'a';

    return temp;

  }

}

 

bool validCharacter(char ch){

  return ((ch>='a' && ch<='z')||(ch>='0' && ch<='9')||(ch>='A' && ch<='Z'));

}
public:
    bool isPalindrome(string s) {
        int start=0; int end = s.length()-1;

  while(start <= end){

    while(start < end && !validCharacter(s[start])){

      start++;

    }

    while(start < end && !validCharacter(s[end])){

      end--;

    }

    if(toLowerCase(s[start])!=toLowerCase(s[end])){

      return false;

    }

    start++;

    end--;

  }

  

  return true;
    }
};

*/


//another one
/*

class Solution {
public:
    // Check if character is alphanumeric
    bool isAlphaNum(char ch) {
       if((ch >= '0' && ch <= '9') || 
               (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
                return true;
               }

               return false;
    }
    bool isPalindrome(string s) {
        int st = 0, end = s.length() - 1;

        while (st < end) {
            if (!isAlphaNum(s[st])) {
                st++;
                continue;
            }
            if (!isAlphaNum(s[end])) {
                end--;
                continue;
            }
            if (tolower(s[st]) != tolower(s[end])) {
                return false;
            }
            st++;
            end--;
        }

        return true;
    }
};

*/