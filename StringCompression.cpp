#include <bits/stdc++.h>
using namespace std;

string encode(string src);

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        string str;
        cin >> str;

        cout << encode(str) << endl;
    }
    return 0;
}

string encode(string src)
{
    int j = 0;
    string s = "";
    for (int i = 0; i < src.size() - 1; i++)
    {
        // cout<<"loop";
        if (src[i] != src[i + 1])
        {

            s += src[i] + to_string(i - j + 1);
            j = i + 1;
        }
    }

    // Leetcode Solution
    /*
       int compress(vector<char>& chars) {
       int i=0,ansI=0;
       int n=chars.size();
       while(i<n){
           int j=i+1;
           while(j<n && chars[i]==chars[j]){
               j++;
           }
           chars[ansI++]=chars[i];


           int count = j-i;

           if(count>1){
               string cnt= to_string(count);
               for(char ch:cnt){
                   chars[ansI++]=ch;
               }
           }
           i=j;
       }
       return ansI;
    }
   */

    int l = src.size() - 1;
    if (src[l] == src[l - 1])
    {

        s += src[l] + to_string(l - j + 1);
    }
    else
    {
        // cout<<"y";
        // cout<<src[l];
        s += src[l];
        s += "1";
    }
    return s;
}