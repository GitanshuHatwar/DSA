class Solution {
    public int[] twoSum(int[] nums, int target) {
       int[] my = nums;
       int val = target;
       int[] ret = new int[2] ;
        for(int i=0; i<=my.length;i++){
            for(int j=i+1;j<my.length;j++){
                if((my[i]+my[j])== val){
                    ret[0] = i;
                    ret[1] = j;
                    return ret;
                }
            }
        }
        return null;
    }
}
