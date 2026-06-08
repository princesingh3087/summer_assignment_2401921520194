class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>f;
        for(int i=0;i<magazine.size();i++){
            f[magazine[i]]++;

        }
        for(int i=0;i<ransomNote.size();i++){
            if(f.find(ransomNote[i])==f.end()){
                return false;
            }
            f[ransomNote[i]]--;
            if(f[ransomNote[i]]==0){
                f.erase(ransomNote[i]);
            }
        }
        return true;
        
    }
};