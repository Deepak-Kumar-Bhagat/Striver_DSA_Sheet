class MedianFinder {
public:
    priority_queue<int> p;
    priority_queue<int,vector<int>,greater<int>> q;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
       if(p.empty()){
           p.push(num);
       } 
       else if(num<=p.top()){
           p.push(num);
       } 
       else{
           q.push(num);
       }
       if(p.size()>q.size()+1){
           int temp=p.top();
           p.pop();
           q.push(temp);
       }
        else if(p.size()<q.size()){
            int temp=q.top();
            q.pop();
            p.push(temp);
        }
    }
    
    double findMedian() {
        if(p.empty()){
            return -1;
        }
        double res;
        if(p.size()==q.size()){
            res=(p.top()+q.top())/2.0;
        }
        else{
            res=p.top();
        }
        return res;
    }
};