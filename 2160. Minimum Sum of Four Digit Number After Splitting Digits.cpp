class Solution {
public:
    int minimumSum(int num) {
        string s=to_string(num);
        int arr[4];
        for(int i=0;i<4;i++){
            int n= s[i]-'0';
            arr[i]=n;
        }
        sort(arr,arr+4);
        int sum =arr[0]*10+arr[1]*10+arr[2]+arr[3];
        return sum;
        
    }
};
