class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count=0;
        int num=0;
        for(int i=0;i<details.size();i++){
            string str=details[i].substr(11,2);
          //  cout << str;
            for(int j=0;j<str.size();j++){
                int digit=str[j]-'0';
                //cout << digit;
                num=num*10+digit;
            }
           // cout << num << endl;
            if(num>60){
                count+=1;
            }
            num=0;
            
            
        }
        return count;
    }
};