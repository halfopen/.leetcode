/*
 * @lc app=leetcode.cn id=1293 lang=cpp
 *
 * [1293] 网格中的最短路径
 */

// @lc code=start
#include<vector>
#include<queue>
using namespace std;

class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();

        if (m==1 && 1== n) return 0;

        vector<vector<int>> vis(m+1, vector<int>(n+1, -1));

        queue<vector<int>> q;
        q.push({0, 0, k});
        vis[0][0] = k;

        int i = 0, len = q.size(), step = 1;
        vector<int> d{0, -1, 0, 1, 0}; // up left donw right

        while(!q.empty()) {
            int q_size = q.size();
            for(int i=0;i<q_size;++i) {
                auto node = q.front();
                q.pop();

                for(int di=0;di<4;++di) {
                    int nr = node[0] + d[di];
                    int nc = node[1] + d[di+1];
                    if (nr <0 || nc<0 || nr>=m || nc>=n)continue; // 超出边界

                    int nk = node[2] - grid[nr][nc]; // 可用的移除障碍物的个数,如果是0，对个数没有影响
                    if (nk <0) continue;

                    if (vis[nr][nc] >=nk) continue; // 之前已有更优解

                    if(nr == m-1 && nc == n-1) {    // reach destination
                        return step;
                    } 
                    q.push({nr, nc, nk});
                    vis[nr][nc] = nk;
                }
            }
            ++step;
        }
        return -1;
    }
};
// @lc code=end

