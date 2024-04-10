class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) 
    {
        int n=deck.size();
        queue<int> qp;
        sort(deck.begin(),deck.end()); //sort the array
        for(int i = n-1;i>=0;i--)
        {
            if(!qp.empty()){ 
                qp.push(qp.front()); // push the top element
                qp.pop(); // pop the element
            }
            qp.push(deck[i]); // then push new element
        }
        int j=n-1;
        while(!qp.empty())
        {
            deck[j--] = qp.front(); 
            qp.pop();
        }
        return deck;
    }
};