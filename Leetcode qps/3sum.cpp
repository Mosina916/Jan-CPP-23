class Solution {
public:
    vector<vector<int>> threeSum(vector<int>nums){

        sort(nums.begin(),nums.end());
        set<vector<int> > s;
        // -4 -1 -1 0 1 2 
        vector<int>v;
        int i=0;
       
        while(i<=nums.size()-3){
             int j=i+1;
        int k=nums.size()-1;

             while(j<k){
             if(nums[i]+nums[j]+nums[k]==0){

                 v.push_back(nums[i]);
                 v.push_back(nums[j]);
                 v.push_back(nums[k]);
                 j++;
                 k--;
                 s.insert(v);
                 v.clear();


        }
        else if(nums[i]+nums[j]+nums[k]<0){
            j++;

        }
        else{
            k--;
        }


        }
        i++;


        }

        vector<vector<int> > ans;


        for(auto x:s){
            ans.push_back(x);

        }

        return ans;

       
       



       
        
    }
};