class Solution {
public:
    bool checkOnesSegment(string s) {
        int oneCount = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                oneCount++;
            }
        }

        for(int i=0;i<oneCount;i++){
            if(s[i] == '0'){
                return false;
            }
        }
        return true;
    }
};