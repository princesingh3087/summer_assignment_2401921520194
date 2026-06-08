class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char,int>mp;
        unordered_map<char,int>mp1;
        int count =0;
        for(int i=0 ; i<s.size();i++){
            mp[s[i]]++;

        }
        for(int j=0 ; j<t.size();j++){
            mp1[t[j]]++;

        }
        if(mp == mp1){
            return true;
        }
        else{
            return false;
        }

    }
};