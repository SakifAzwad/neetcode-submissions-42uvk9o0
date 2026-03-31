class Solution {
public:

    string encode(vector<string>& strs) {
        int z=1;
        string fin="";
        for(int i=0;i<strs.size();i++)
        {
            string A;
            A=strs[i];
            int sz=A.size();
            string B=to_string(sz);
            
            fin+=B;
            fin+="#";
            fin+=A;
        }
        return fin;
    }

    vector<string> decode(string s) {

        vector<string>V;
        string ex="";
        for(int i=0;i<s.size();i++)
        {   
            
            if(s[i]=='#')
            {
                i++;
                string cur="";
                int sz=stoi(ex);
                while(sz--)
                {
                    cur+=s[i];
                    i++;
                }
                V.push_back(cur);
                ex="";
                i--;
            }
            else ex+=s[i];
            
        }
        return V;

    }
};
