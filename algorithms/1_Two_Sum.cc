#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
	public:
		vector<int> twoSum(vector<int>& nums, int target) {
			unordered_map<int,int> map1;
			vector<int> ret;
			for(int i=0;i<nums.size();i++)
				map1[nums[i]]=i;
			for(int i=0;i<nums.size();i++){
				auto c = map1.find(target-nums[i]);
				if(c!=map1.end()&&i!=c->second){
					ret.push_back(i);
					ret.push_back(c->second);
					break;
				}
			}
			return ret;
		}
};
