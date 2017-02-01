#include <string>
#include <climits>
using namespace std;
class Solution {
	public:
		int myAtoi(string str) {
			int sign=0;
			auto i=str.begin();
			for(;i!=str.end();i++){
				if(*i==' ')
					continue;
				else if(*i=='+'||*i=='-'){
					if(*i=='+')
						sign=1;
					else
						sign=-1;
					i++;
					break;
				}else if(*i>='0'&&*i<='9'){
					sign=1;
					break;
				}
				break;
			}
			long res=0;
			for(;i!=str.end();i++){
				if(*i>='0'&&*i<='9'){
					res=res*10+(*i-'0');
					if(sign==1&&res>=INT_MAX)
						return INT_MAX;
					if(sign==-1&&res>=static_cast<long>(INT_MAX)+1)
						return INT_MIN;
				}else
					break;
			}
			return sign*static_cast<int>(res);
		}
};
