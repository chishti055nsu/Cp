#include<bits/stdc++.h>

using namespace std ;

int main()
{
    string s;
    cin>>s;
    int p ;

    for(int i = 0 ; i<s.size();++i)
    {
          if(s[i]=='.')
          {
          	 p = i ;
          	 break;
          }
    }

   if(s[p+3]=='0'&&s[p+2]!='0'&&s[p+1]!='0')
   {
   	  s.pop_back();
   }
   else if(s[p+3]=='0'&&s[p+2]=='0'&&s[p+1]!='0')
   {
   	  s.pop_back();
   	  s.pop_back();
   }
   else if(s[p+3]== '0'&& s[p+2]=='0'&&s[p+1]=='0')
   {
   	   s.pop_back();
   	   s.pop_back();
   	   s.pop_back();
   	   s.pop_back();
   }

   cout<<s<<endl;





}