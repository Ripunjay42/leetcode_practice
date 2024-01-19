class Solution {
public:
    int cal(string &s)
    {
        int count=0;
        for(char c: s)
        {
            count+=c-'0';
        }
        return count;
    }
    int numberOfBeams(vector<string>& bank) 
    {
        int total=0;
        int prevRow=0;
        for(string& row :bank)
        {
            int currRow = cal(row);
            if(currRow==0)
                continue;
            total+=currRow*prevRow;
            prevRow=currRow;
        }
        return total;    
    }
};