class Solution {
public:
    bool isValid(string s) {
        stack<int>S;
        bool f=false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
               S.push(s[i]);
               f=true;
            }
            else
            {
                if(S.empty())
                {
                  f=false;
                  break;
                }
                else 
                {
                     char c=S.top();
                S.pop();
                if(s[i]==')' &&  c!='(')
                {
                  f=false;
                  break;
                }
                else if(s[i]=='}' &&  c!='{')
                {
                  f=false;
                  break;
                }
                else if(s[i]==']' &&  c!='[')
                {
                  f=false;
                  break;
                }
                }
                

            }
        }
        if(!S.empty())f=false;
        return f;
    }
};
