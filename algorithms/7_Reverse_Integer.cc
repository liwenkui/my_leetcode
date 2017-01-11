#include <climits>
class Solution {
	public:
		int reverse(int x) {
			long res=0;
			bool neg=false;
			if(x<0) {x=-x;neg=true;}
			while (x > 0) {
				res = res * 10 + x % 10;
				x /= 10;
			}
			if(neg) res=-res;
			return (res>INT_MIN&&res<INT_MAX)?res:0;
		};
};
