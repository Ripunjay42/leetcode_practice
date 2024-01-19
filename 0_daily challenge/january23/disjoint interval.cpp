class SummaryRanges {
public:
    int MX = 1e4 + 5 ;
    vector<pair<int,int>> v ;
    set<int> givenValues ;

    SummaryRanges() {
        v.assign(MX, make_pair(-1, -1));
        givenValues.clear();
    }
    
    void addNum(int value) {
        givenValues.insert(value);
        pair<int,int> p = v[value] ;
        if(p.first == -1){
            p.first = value ;
        }

        if(p.second == -1){
            p.second = value ;
        }
        bool prevChange = false;
        bool nextChange = false ;

        if(value > 0) prevChange = checkAndUpdate(value, p, true);
        if(value <= 1e4) nextChange = checkAndUpdate(value, p, false);

        if(nextChange){
            v[value + 1] = p ;
        }
        if(prevChange) v[value-1] = p ;
        v[value] = p ;
    }

    bool checkAndUpdate(int value, pair<int,int> &p, bool isPrev) {
        bool change = false ;
        if(p.first != -1){
            int adjacentValue = isPrev ? value - 1 : value + 1;
            pair<int, int> adjacent = v[adjacentValue];
            if(adjacent.first != -1){
                p.first = min(adjacent.first , p.first);
                p.second = max(adjacent.second, p.second);
                change = true ;
            }
        }
        return change ;
    }   
    
    vector<vector<int>> getIntervals() {
        vector<vector<int>> ans ;
        if(givenValues.size() == 0) return ans;

        for(int i = *(givenValues.begin()) ; i < MX ; ){
            if(v[i].first != -1){
                int st = i ;

                int sp = v[i].second ;
                for(int j = st ; j < MX ; ){
                    if(v[j].second == j or v[j].second == -1){
                        sp = j ;
                        break ;
                    }
                    j = v[j].second ;

                }
                ans.push_back({st,sp});
                i = sp ;
            }
            int nextItem = i + 1 ;
            if(givenValues.lower_bound(nextItem) == givenValues.end()){
                break ;
            }
            nextItem = *(givenValues.lower_bound(nextItem)) ;
            i = nextItem ;
        }

        return ans ;
    }
};