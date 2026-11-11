class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {

        int maxNeed = max(need1,need2);
        int minNeed = min(need1,need2); 

        long long sum1 = 1LL *maxNeed * costBoth;
        long long sum2 = 1LL *need1 * cost1 + 1LL *need2 * cost2;
        long long res = min(sum1,sum2);

        int req1;
        maxNeed == need1 ? req1 = cost1 : req1 = cost2;

        long long sum3 = 1LL *minNeed * costBoth +1LL * (maxNeed - minNeed) * req1;
        return min(sum3,res);
    }
};