class Solution {
public:
    //this is simulation method
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        //sandwich - stack
        //students - queue
        queue<int>q;
        for(int e:students){
            q.push(e);
        }

        int i=0;        //sandwich index
        int failed=0;   //count the failed attempts

        while(!q.empty()){
            if(q.front()==sandwiches[i]){
                q.pop();
                i++;
                failed=0;
            }else{
                q.push(q.front());
                q.pop();
                failed++;
            }
            if(failed==q.size()){
                break;
            }
        }

        return q.size();
    }
};