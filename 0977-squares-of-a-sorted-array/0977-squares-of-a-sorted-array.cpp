class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int count=n-1;
        vector<int>ans(n);
        int left=0,right=n-1;
        while(left<=right){
            long long leftSq = 1LL * nums[left]*nums[left];
            long long rightSq = 1LL * nums[right]*nums[right];
            if(leftSq>rightSq){
                ans[count]=leftSq;
                left++;
                count--;
            }else{
                ans[count]=rightSq;
                right--;
                count--;
            }
        }
        return ans;
    }
};