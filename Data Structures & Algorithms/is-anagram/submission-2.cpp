class Solution {
public:
    bool isAnagram(string s, string t) {
     int arr[26] = {0};

        int s_length = s.size();
        int t_length = t.length();

        if(s_length != t_length){
            return false;
        }

        for(int i = 0; i< s_length; i++){
            arr[s[i] - 'a']++;
            arr[t[i] - 'a']--;
        }

        for(int i =0 ; i< 26 ; i++){
            if(arr[i] != 0){
                return false;
            }
        }

        return true;
        
    }
};
