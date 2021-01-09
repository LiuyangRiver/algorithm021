 
class Solution {
public:
	int jump(vector<int>& nums) {
		if (nums.size() < 2)
			return 0;
		int res = 0;
		int nowPos = 0;
		int maxPos = 1;
		while (maxPos < nums.size() - 1) {
			res += 1;
			maxPos = INT_MIN;
			int count = nums[nowPos];
			int tempNowPos = nowPos;
			while (count > 0) {
				int temp1 = tempNowPos + count;
				if (temp1 >= nums.size() - 1)
					return res;
				int pos = temp1 + nums[temp1];
				if (maxPos < pos) {
					maxPos = pos;
					nowPos = temp1;
				}
				count--;
			}
		}
 
		return res + 1;
	}
 
};