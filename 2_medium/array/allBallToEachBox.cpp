class Solution {
public:
    vector<int> minOperations(string boxes) 
    {
       vector<int> v;
        int leftcount=0; 
        int leftsum=0; 
        int rightsum=0; 
        int rightcount=0; 
        for(int i=0;i<boxes.size();i++)
        {
            if(boxes[i]=='1')
            {
                rightsum+=i;
                rightcount++;
            }
        }
        
        for(int i=0;i<boxes.size();i++)
        {
            if(boxes[i]=='1')
            {
                rightcount--;
                rightsum-=i;
            }
            int sum=abs(rightsum-(rightcount*i))+abs(leftsum-(leftcount*i));
            v.push_back(sum);
            if(boxes[i]=='1')
            {
                leftcount++;
                leftsum+=i;
            }
                                                     
        }
        return v;
    }
};