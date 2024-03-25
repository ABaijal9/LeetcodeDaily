class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int> cash;
        cash[20] = 0;
        cash[10] = 0;
        cash[5] = 0;
        for(auto charge: bills){
            if(charge != 5){
                if(charge == 20){
                    if(cash[10] < 1 and cash[5] < 3){ // 10 and 3 both not present
                        return false; }
                    else if(cash[10] < 1 and cash[5] >= 3){ // 10 not present and 3 present
                        cash[5] -= 3;
                    }
                    else if(cash[10] > 1 and cash[5] < 1){ // 10 present and 3 not present
                        return false;
                    }
                    else{ // both present
                        cash[10] -= 1;
                        cash[5] -= 1;
                    }

                }
                else if(charge == 10){
                    if(cash[5] < 1){
                        cout << "3";
                    return false;}
                    cash[5] -= 1;
                } }
            cash[charge] += 1; 
        }    
      return true;  
    }
};