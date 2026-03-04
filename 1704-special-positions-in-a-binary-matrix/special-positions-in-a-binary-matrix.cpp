class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int count = 0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    bool present = false;
                    bool firstCheck = true;
                    for(int k=0;k<mat[0].size();k++){
                        if(mat[i][k] == 1 && !present){
                            present = true;
                        }
                        else if (mat[i][k] == 1 && present){
                            firstCheck = false;
                            break;
                        }
                    }
                    if(firstCheck){
                        present = false;
                        bool secondCheck = true;
                        for (int l=0;l<mat.size();l++){
                            if (mat[l][j] == 1 && !present){
                                present = true;
                            }
                            else if(mat[l][j] == 1 && present){
                                secondCheck = false;
                                break;
                            } 
                        }
                        if(secondCheck){
                            count++;
                        }
                    }
                    else{
                        continue;
                    }
                }
            }
        }
        return count;
    }
};