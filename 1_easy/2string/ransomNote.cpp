class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int al[26]={0};
        for(int i=0;i<magazine.length();i++){
            al[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.length();i++){
            if(al[ransomNote[i]-'a']==0){return false;}
                al[ransomNote[i]-'a']--;
        }
        return true;
        
    }
};