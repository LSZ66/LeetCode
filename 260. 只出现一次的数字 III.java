class Solution {
    public int[] singleNumber(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int num : nums) {
            map.merge(num, 1, (a, b) -> a + b);
        }
        int[] ans = new int[2];
        int i = 0;
        for (int x : map.keySet()) {
            int count = map.get(x);
            if (count == 1) {
                ans[i++] = x;
            }
            if (i == 2)
                break;
        }
        return ans;
    }
}