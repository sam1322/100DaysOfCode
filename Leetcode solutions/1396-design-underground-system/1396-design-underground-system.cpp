class UndergroundSystem {
public:
    map<pair<string,string>,long long> mp;
    map<int,pair<int,string>> Time ;
    map<pair<string,string>,int> count ;
    UndergroundSystem() {
    
    }
    
    void checkIn(int id, string stationName, int t) {
        Time[id] = {t,stationName};
        
    }
    
    void checkOut(int id, string stationName, int t) {
        int t1 = Time[id].first ;
        string st = Time[id].second; 
        
        pair<string,string> p = make_pair(st,stationName) ; 
        
        count[p]++;
        int tim = t - t1 ;
        mp[p]+=tim ;
        
    }
    
    double getAverageTime(string startStation, string endStation) {
        pair<string,string> p = make_pair(startStation,endStation) ;
        
        double ans = mp[p] /(1.0*count[p]);
        return ans ;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */