class Solution {
public:
    bool isPalindrome(int x) { 
       if(x<0){
        return false;
       }
       int ld;
       long long sum =0;
       int temp = x;
       while(temp!=0){
        ld = temp%10;
        temp= temp/10;
        sum = (sum*10)+ld;
       }
        return sum==x;
        
        
    }
};