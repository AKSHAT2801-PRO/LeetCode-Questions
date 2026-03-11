class Solution {
public:
    int findComplement(int num) {
        if(num == 0){
            return 1;
        }
        else if (num == 1){
            return 0;
        }
        int twoPower = 0;
        for(int i=0;i<INT_MAX;i++){
            if(pow(2,i) > num){
                twoPower = i;
                break;
            }
        }
        return pow(2,twoPower) - num -1;
    }
};
