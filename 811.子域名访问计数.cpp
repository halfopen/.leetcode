/*
 * @lc app=leetcode.cn id=811 lang=cpp
 *
 * [811] 子域名访问计数
 */

// @lc code=start
class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        map<string, int> count;
        vector<string> res;
        int index = 0;
        int num   = 0;
        string subitm;
        string ipname;
        for(auto itm:cpdomains)
        {
            index  = itm.find(' ');
            ipname = itm.substr(index+1);
            num    = atoi(itm.substr(0, index).c_str());
            count[ipname] += num;
            index  = -1;
            while((index = ipname.find('.', index+1)) > 0)
            {
                subitm = ipname.substr(index+1);
                count[subitm] += num;
            }
        }
        for(auto itm2:count)
        {
            res.push_back(to_string(itm2.second) + " " + itm2.first);
        }
        return res;
    }
};
// @lc code=end

