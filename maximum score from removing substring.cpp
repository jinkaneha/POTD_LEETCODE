class Solution {
public:
    string addpoints(string &s,string str,int &points,int &ans){
        stack<char> st;
        for(char c:s){
            if(!st.empty()&&st.top()==str[0]&&c==str[1]){
                st.pop();
                ans+=points;
            }
            else{
                st.push(c);
            }
        }
        string snew="";
        while(!st.empty()){
            snew+=st.top();
            st.pop();
        }
        reverse(snew.begin(),snew.end());
        return snew;
    }
    int maximumGain(string s, int x, int y) {
        int ans=0;
        if(x<y){
            s=addpoints(s,"ba",y,ans);
            s=addpoints(s,"ab",x,ans);
        }
        else{
            s=addpoints(s,"ab",x,ans);
            s=addpoints(s,"ba",y,ans);
        }
        return ans;
    }
};