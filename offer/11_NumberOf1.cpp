class Solution {
public:
     int  NumberOf1(int n) {
         if (!n)
             return 0;
         int counter = 0;
         while(n){
             counter++;
             n &= (n - 1);
         }
         return counter;
     }
};