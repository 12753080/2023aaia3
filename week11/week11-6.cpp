///week11-6.cpp�ǲ߭p�e�ĤE�D
///LeetCode 1502. Can Make Arithmetic Progression From Sequence
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort( arr.begin(), arr.end() );
        int N = arr.size();
        for(int i=0; i<N-2; i++){
            if( arr[i]-arr[i+1] != arr[i+1]-arr[i+2] )return false;
    }///�p�G�����ۦP�N����
    ///�p�G���S�����ѡA�N�O���\
    return true;
    }
};
