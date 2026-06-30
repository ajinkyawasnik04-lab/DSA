class Solution {
public:
    int findGcd(int a, int b) {
        while (b>0){
            int temp = a%b;
            a=b;
            b= temp;
        }
        return a;

    }
    int commonFactors(int a , int b){
        int gcdValue= findGcd(a,b);
        int count =0;
        for (int i=1;i*i<=gcdValue;i++){
            if (gcdValue % i == 0){
                count++;
                if(i*i !=gcdValue){
                    count++;
                }
            }
        }
    return count;}
};