class Solution {
public:
    int findTheLongestSubstring(string s) {
	//the problem is hard one 
	// so lets start
	//we will require a mask to implement this(thought process- we cannot apply sliding window because removing current even vowel can destroy our maximum length of even vowel substring in future p.s(i tried sliding window :p))
	// mask ~ aeiou
  //          00000
//when ever i will find a vowel i will toggle the bit and if in any case the state gets repeated this means we have even vowels within the indices
			 // reason ~ every bit takes two toggle to return to its original state like 0-->1-->0
	
    map<int,int>m;
        m[0]=-1;
        string v="aeiou";
        int mask=0;
        int res=0;
        for(int i=0;i<s.length();i++){
            for(int j=0;j<5;j++){
                if(s[i]==v[j]){
                    mask=mask^(1<<j);
                    break;
                }
            }
                //cout<<1<<" ";
                if(m.find(mask)==m.end()){
                    m[mask]=i;
                }
                res=max(res,i-m[mask]);
            
        }
        return res;
    }
};