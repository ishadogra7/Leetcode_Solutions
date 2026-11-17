class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {

        vector<vector<int>> adj(n);

        for(int i = 0; i < invocations.size(); i++){
            int a = invocations[i][0];
            int b = invocations[i][1];

            adj[a].push_back(b);
        }

        vector<int> vis(n, 0);

        queue<int> q;
        q.push(k);
        vis[k] = 1;

        while(!q.empty()){

            int node = q.front();
            q.pop();

            for(auto it : adj[node]){

                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }

        for(int i = 0; i < invocations.size(); i++){

            int a = invocations[i][0];
            int b = invocations[i][1];

            if(vis[a] == 0 && vis[b] == 1){

                vector<int> ans;

                for(int j = 0; j < n; j++){
                    ans.push_back(j);
                }

                return ans;
            }
        }

        vector<int> ans;

        for(int i = 0; i < n; i++){

            if(vis[i] == 0){
                ans.push_back(i);
            }
        }

        return ans;
    }
};