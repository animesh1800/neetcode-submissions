class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(auto i: strs){
            int len = i.length();
            encoded += to_string(len)+'#'+i;
            string s = "5#Hello5#World";
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;

        int i = 0;
        int j = 0;
        while(i < s.length()){
            while(s[j] != '#'){
                j++;
            }
            int len = stoi(s.substr(i,j-i));
            string str = s.substr(j+1,len);
            decoded.push_back(str);

            j += (len+1);
            i = j;
        }
        return decoded;
    }
};
