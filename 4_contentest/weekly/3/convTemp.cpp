class Solution {
public:
    vector<double> convertTemperature(double c) 
    {
        double f, k;
        vector<double> res;
        k=c+273.15;
        f=c*1.80+32.00;
        res.push_back(k);
        res.push_back(f);
        return res;
    }
};