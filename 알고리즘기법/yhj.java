// 11시 11분
import java.util.ArrayList;

class Solution {
    public int solution(int[] nums) {
        int answer = 0;
        ArrayList<Integer> kindOfNums = new ArrayList<>();

        for(int i = 0; i < nums.length; i++){
            if(!kindOfNums.contains(nums[i])){
                kindOfNums.add(nums[i]);
            }
        }

        return Math.min(kindOfNums.size(), nums.length/2);
    }
}