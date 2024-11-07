///week09-4.cpp厩策璸礶Math材肈
class Solution {
public:
    double average(vector<int>& salary) {
        int max = salary[0];///璶т程程玡讽箇砞
        int min = salary[0];///璶т程程玡讽箇砞
        double total = 0;
        for(int i=0; i<salary.size(); i++){
            if(salary[i]>max) max = salary[i];///ゑ程临?程传讽
            if(salary[i]<min) min = salary[i];///ゑ程临?程传讽
            total += salary[i];
        }
        return (total-max-min)/(salary.size()-2);

    }
};
