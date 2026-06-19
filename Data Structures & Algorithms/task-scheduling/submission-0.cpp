class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
      vector<int>cnt(26,0);
      for(char &x:tasks)++cnt[x-'A'];

      priority_queue<int>pq;
      for(int& x:cnt)
        if(x>0) pq.push(x);

      int time =0;
      queue<pair<int,int>>q;
      while(pq.size() or q.size() ){
        ++time;
        if(pq.size()==0){
            time = q.front().second;
        }else{
            int count = pq.top()-1;
            pq.pop();
            if(count){
                q.push({count,time+n});
            }
        }

        while(q.size() and q.front().second == time){
            pq.push(q.front().first);
            q.pop();
        }
      }  
      return time;
    }
};
