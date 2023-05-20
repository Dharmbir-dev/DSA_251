#include <bits/stdc++.h> 
#include<unordered_map>
char firstNonRepeatingCharacter(string str) 
{
  
  unordered_map<char,int>me;
  
  for(int i = 0;i<str.size();i++)
  {
    if(me[str[i]] == 0)
    {
      me[str[i]] = 1;
    }
    else
    ++me[str[i]];
  }
  
  for(int i = 0;i<str.length();i++)
  {
    if(me[str[i]] == 1)
    return str[i];
  }
  return str[0];
}
