///LeetCode 670 ���Ѫ��D���D(�����D)
class Solution {
public:
    int maximumSwap(int num) {
        int ans = num; ///��²�檺���סA�N�O����
        string s = to_string(num); ///stoi()�ϹL��
        ///for(int i=0; i<s.length(); i++){///�����n�ΰj��A��s����
        ///  cout << s[i] << ' ';//�m�ߦL�ݬ�
        ///}
        for(int i=0; i<s.length()-1; i++){///����i
            for(int j=i+1; j<s.length(); j++){ ///�k��j
                swap(s[i], s[j]); ///�洫s[i] s[j]���
                ans = max(ans, stoi(s)); ///�ݬO�_��j�A��s
                swap(s[i], s[j]); ///�b�洫�^��
            }
        }
        return ans;
    }
};
