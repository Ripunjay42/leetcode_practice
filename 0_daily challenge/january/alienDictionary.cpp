class Solution {
public:
 bool isAlienSorted(vector<string>& words, string order) {

     for(int i = 0; i < words.size() - 1; i++) {

         string w1 = words[i];
         string w2 = words[i + 1];
        
         int j = 0, k = 0;
         while(w1[j] == w2[k]) 
        {
             j++;
             k++;
        }
         int r = order.find(w1[j]); 
         int l = order.find(w2[k]);
         while(r > l) {
             return false;
            }
        }
     return true;
    } 
};