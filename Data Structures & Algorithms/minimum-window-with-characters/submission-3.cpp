class Solution {
public:
string minWindow(string s, string t) {
        map<char,int>M,N,Q;
        if(s.size()<t.size())return "";
        for(int i=0;i<t.size();i++)
        {
            M[t[i]]++;
        }
        Q=M;
        bool f=0;
        int j,l=0,r=0,prev_l=0, prev_r=1e9;
        pair<int,int>P;
        int cnt=0,len=t.size();
        for(int i=r;i<s.size();i++)
        {
            N[s[i]]++;
            if(M[s[i]])
            {
               cnt++;
               M[s[i]]--;
            } 

            if(cnt==len)
            {
                f=1;
                r=i;
                for(j=l;j<=r;j++)
                {
                    if(N[s[j]] != Q[s[j]])
                    {
                       N[s[j]]--;
                    }
                    else break;
                }
                l=j;
                if(prev_r-prev_l+1 > r-l+1 )
                {
                    P={l,r};
                    prev_l=l;
                    prev_r=r;
                    // cout<<P.ff<<" "<<P.ss<<endl;
                    
                }
                cnt--;
                    M[s[l]]++;
                // cout<<l<<" "<<r<<endl;
            }
            
            
        }
        
        if(f) return s.substr(P.first,(P.second-P.first)+1);
        else return "";
    }

};
