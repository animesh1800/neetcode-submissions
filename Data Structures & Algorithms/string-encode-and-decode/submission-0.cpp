class Solution {
public:

    string encode(vector<string>& strs) {

        int n = strs.size();
        string encodedString = "";

        for(auto i : strs){
            int sizeOfEachStr = i.length();
            encodedString += to_string(sizeOfEachStr) + "#" + i;
        }

        return encodedString;

    }

    vector<string> decode(string s) {

        vector<string> decodedString;

        int i = 0;

        while(i < s.length()){
            int j = i;

            while(s[j] != '#'){
                j++;
            }

            int length = stoi(s.substr(i,j-i));

            string ans = s.substr(j+1,length);

            decodedString.push_back(ans);

            i = j+1+length;
        }

        return decodedString;
    }
};
