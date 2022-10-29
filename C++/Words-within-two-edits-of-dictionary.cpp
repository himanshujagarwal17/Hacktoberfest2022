//Name: Himanshu Jagarwal
//Language: C++


class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        int count=0;
        vector<string>v;

        for(int i=0; i<queries.size();i++){
            for(int j=0;j<dictionary.size();j++){
                count=0;
                for(int k=0; k<dictionary[j].size();k++){
                    if(queries[i][k]!=dictionary[j][k])
                        count++;
                }
                if(count<=2){ 
                    v.push_back(queries[i]);
                    break;
                }
            }

        }
        return v;
    }
};
