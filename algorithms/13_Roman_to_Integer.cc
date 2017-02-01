#include <vector>
#include <string>
using namespace std;
class Solution {
	public:
		int romanToInt(string s) {
			int res=0;
			vector<int> num;
			for(auto c:s){
				switch(c){
					case 'I':
						num.push_back(1);
						break;
					case 'V':
						num.push_back(5);
						break;
					case 'X':
						num.push_back(10);
						break;
					case 'L':
						num.push_back(50);
						break;
					case 'C':
						num.push_back(100);
						break;
					case 'D':
						num.push_back(500);
						break;
					case 'M':
						num.push_back(1000);
						break;
					default:
						break;
				}
			}
			for(int i=1;i<num.size();i++)
			{
				if(num[i]>num[i-1])
					num[i-1]=-num[i-1];
			}
			for(auto i:num)
				res+=i;
			return res;
		}
};
