class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n=customers.size();
        double waiting_time=0;
        int current_time=0;
        for(const auto& cus:customers){
            int arrival_time=cus[0];
            int time_taking=cus[1];
            if(current_time<arrival_time){
                current_time=arrival_time;
            }
            waiting_time=waiting_time+current_time-arrival_time+time_taking;
            current_time=current_time+time_taking;
        }
        return waiting_time/n;        
    }
};