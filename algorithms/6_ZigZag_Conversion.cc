#include <vector>
#include <string>
using namespace std;
class Solution {
	public:
		string convert(string s, int numRows) {
			vector<char> ch;
			if(numRows==1)
				return s;
			int n=numRows-1;
			for(int i=0;i<numRows;i++)
			{
				if(i==0||i==n) {
					int j=i;
					while(j<s.size()){
						ch.push_back(s[j]);
						j+=2*n;
					}
				}else{
					int j=i;
					bool set=true;
					while(j<s.size()){
						ch.push_back(s[j]);
						if(set){j=j+2*n-2*i;set=false;}
						else{j+=2*i;set=true;}
					}
				}
			}
			string res(ch.begin(),ch.end());
			return res;
		}
};
