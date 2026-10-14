class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
       stack<int>st;

       int n = asteroids.size();

       for(int i = 0 ; i < n ; i++){
              if(st.empty()){
                 st.push(asteroids[i]);

              }

              else if(st.top() >0 && 0 < asteroids[i]){
                     st.push(asteroids[i]);
              }


             else if(st.top() < 0 && asteroids[i] > 0) {
                st.push(asteroids[i]);
            }

             else {
                bool alive = true;

                while(!st.empty() && st.top() > 0 && asteroids[i] < 0) {
                    if(st.top() < abs(asteroids[i])) {
                        st.pop();
                    }
                    else if(st.top() == abs(asteroids[i])) {
                        st.pop();
                        alive = false;
                        break;
                    }
                    else {
                        alive = false;
                        break;
                    }
                }

                if(alive) {
                    st.push(asteroids[i]);
                }
            }
        }

       vector<int>ans;

       while(!st.empty()){
          ans.push_back(st.top());
          st.pop();
       }
       reverse(ans.begin(), ans.end());
       return ans;
    }
};