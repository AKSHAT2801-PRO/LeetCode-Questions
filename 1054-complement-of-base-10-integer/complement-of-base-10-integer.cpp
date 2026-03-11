class Solution {
public:
    
    int bitwiseComplement(int n) {
        if(n == 0){
            return 1;
        }
        else if (n == 1){
            return 0;
        }
        int twoPower = 0;
        for(int i=0;i<INT_MAX;i++){
            if(pow(2,i) > n){
                twoPower = i;
                break;
            }
        }
        return pow(2,twoPower) - n -1;
    }
};