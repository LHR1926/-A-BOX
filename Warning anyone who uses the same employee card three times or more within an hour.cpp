class Solution {
public:
    vector<string> alertNames(vector<string>& keyName, vector<string>& keyTime) {
        map<string,vector<int>> m;
        int sz = keyName.size();
        vector<string> res;
        if(sz<3)return res;
        for(int i=0;i<sz;i++){
            m[keyName[i]].push_back(changeintime(keyTime[i]));
        }
        for(auto i:m){
            sort(i.second.begin(),i.second.end());
            // cout<<i.first<<": ";
            // for(int k:i.second){
            //     cout<<k<<" ";
            // }
            // cout<<endl;
            
            if(help(i.second)){
                res.push_back(i.first);
            }
        }
        // sort(res.begin(),res.end());
        return res;
    }
    bool help(vector<int> k){
        int sz = k.size();
        for(int i=0;i<sz-2;i++){
            if(k[i+2]-k[i]<=60){
                return true;
            }
        }
        return false;
    }

    int changeintime(string a){
        int hour = (a[0]-'0')*10 + a[1] - '0';
        int min = (a[3]-'0')*10 + a[4] - '0';
        return hour*60+min;
    }
};