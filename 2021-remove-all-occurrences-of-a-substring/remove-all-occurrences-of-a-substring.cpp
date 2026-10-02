class Solution {
public:
    string removeOccurrences(string s, string part) {
        string st;
        int n = s.length();
        int x = part.length();

        for(char ch:s){
            st+=ch;
            if(st.size()>=x){
                if(st.substr(st.size()-x,x)==part){
                    st.erase(st.size() - x, x);
                }
            }
        }

        return st;
    }
};