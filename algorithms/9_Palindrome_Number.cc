class Solution {
	public:
		bool isPalindrome(int x) {
			if(x<0) return false;
			int num1=x;
			int num2=0;
			while(x){
				num2*=10;
				num2+=x%10;
				x/=10;
			}
			return num1==num2;
		}
};
