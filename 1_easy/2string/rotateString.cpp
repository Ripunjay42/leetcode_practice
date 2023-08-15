class Solution {
public:
bool rotateString(string A, string B) 
    {
        if(A.size() != B.size())
            return false;
        if(A == B)      //for empty strings
            return true;
        
        int len = B.size();
        while(len--)
        {
            if(A == B)
                return true;
            A = A.substr(1) + A[0];     // one shift on A
        }
        return false;
    }
};