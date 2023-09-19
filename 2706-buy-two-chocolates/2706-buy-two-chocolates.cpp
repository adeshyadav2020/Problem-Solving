class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int value = prices[0]+prices[1];

        if(prices[0]+prices[1]<=money){
            money = money - value;
            return money;
        }
        else{
            return money;
        }
                

       
        return -1;
    }
};