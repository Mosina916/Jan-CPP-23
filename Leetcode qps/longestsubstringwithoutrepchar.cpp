class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int i=0;
        int j=0;
        set<char> se;
        int ms=0;

        while(j<s.length()){
            if(se.find(s[j])!=se.end()){
                // mil raha hai
                if((j-i)>ms){
                    ms=j-i;
                }

                for(int k=i;k<j;k++){
                    if(s[k]==s[j]){
                        se.erase(s[k]);
                        se.insert(s[j]);
                        i=k+1;
                        j++;
                        break;

                    }
                    se.erase(s[k]);
                }
            }
            else{
                se.insert(s[j]);
                j++;
            }
        }

        if(j-i>ms){
            ms=j-i;
        }

        return ms;


    }

};