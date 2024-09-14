//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void Reverse(stack<int> &s)
    {
        if(s.empty())
            return;
        int x=s.top();
        s.pop();
        Reverse(s);
        insertBtm(s, x);
    }
    void insertBtm(stack<int> &s, int x)
    {
        if(s.empty())
        {
            s.push(x);
            return;
        }
        int temp=s.top();
        s.pop();
        insertBtm(s,x);
        s.push(temp);
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
//