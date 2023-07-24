class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int atma=INT_MIN;
        
        int ip=1;
        for(int i=0;i<nums.size();i++){
        ip=ip*nums[i];//0
        atma=max(atma,ip);//42
        if(ip==0){
            ip=1;
        }
        }//36
        int ipp=1;
        int psm=INT_MIN;

        for(int j=nums.size()-1;j>=0;j--){
        ipp=ipp*nums[j];
        psm=max(ipp,psm);
        if(ipp==0){
            ipp=1;
        }
        }


        return max(atma,psm);
        



    }
};