class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       
        string merged = "";
        
        if(word1.size()==word2.size()){
            for(int i=0; i<word1.size(); i++){
                merged += word1[i];
                merged += word2[i];   
            }
            return merged;
        }
        int i;
        for(i=0; i<word1.size() && i<word2.size(); i++){
            merged += word1[i];
            merged += word2[i];
        }
        if(word1.size()>word2.size()){
            for(int j=i; j<word1.size(); j++){
                merged += word1[j];
            }
        }
        else{
            for(int j=i; j<word2.size(); j++){
                merged += word2[j];
            }
        }
        return merged;
    }
};