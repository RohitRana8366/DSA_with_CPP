//background string comparison
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    string s="ab#c";
    stack <char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]!='#'){
            st.push(s[i]);
        }
        else if (s[i]=='#')
        {
            st.pop();
        }
        
    }
     string t="ad#ṇ";
    stack <char> at;
    for(int i=0;i<t.length();i++){
        if(s[i]!='#'){
            at.push(s[i]);
        }
        else if (s[i]=='#')
        {
            at.pop();
        }
        
    }
    if (st==at)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
    
    return 0;


}