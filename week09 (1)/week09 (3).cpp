///week09-4.cpp�ǲ߭p�eMath�ĤG�D
class Solution {
public:
    double average(vector<int>& salary) {
        int max = salary[0];///�n��̤j�ȡA�����̫e�����H�A��w�]��
        int min = salary[0];///�n��̤p�ȡA�����̫e�����H�A��w�]��
        double total = 0;
        for(int i=0; i<salary.size(); i++){
            if(salary[i]>max) max = salary[i];///��̤j���٤j?�̤j�ȴ��H��
            if(salary[i]<min) min = salary[i];///��̤p���٤p?�̤p�ȴ��H��
            total += salary[i];
        }
        return (total-max-min)/(salary.size()-2);

    }
};
