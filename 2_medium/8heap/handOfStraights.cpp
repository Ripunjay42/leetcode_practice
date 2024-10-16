class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) 
    {
        if(hand.size() % groupSize !=0) return false;
        if(groupSize == 1) return true;


        // store all distinct cards
        priority_queue<int,vector<int>,greater<int>> cards;   
        unordered_map<int,int> countCards; // store count of each card
        for(int card:hand) 
        {
            // push every new card found
            if(!countCards.count(card)) 
            {
                cards.push(card); 
            }
            // increase count of every card found
            countCards[card]++;
        }


        while(!cards.empty())
        {
            int minCard=cards.top();    // pick min. value card
            int currCard= minCard;
            for(int i=0; i<groupSize; i++)
            {
                // check presence of next card after picked card
                if(countCards.count(currCard))
                {
                    // reduce count of picked card
                    countCards[currCard]--;
                    
                    // remove card with no count
                    if(countCards[currCard]==0) 
                    {
                        cards.pop();
                        countCards.erase(currCard);
                    }
                    currCard++;
                }
                else return false;  // consecutive no. not found
            }
        }
        return true;
    }
};