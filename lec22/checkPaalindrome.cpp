#include <bits/stdc++.h> 
#include<string>
#include<iostream>
using namespace std;

 

char toLowerCase(char ch){

  if(ch >= 'a' && ch <= 'z'){

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

 

bool checkPalindrome(string s) {

  

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