class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1,st2;

        for(auto it:s){
            if(it == '#'){
            if(!st1.empty())
            st1.pop();
            }
            else{
                st1.push(it);
            }
        }
        for(auto it:t){
            if(it == '#'){
            if (!st2.empty())
            st2.pop();
            }
            else{
                st2.push(it);
            }
        }
        string a,b;
        while(!st1.empty()){
            a.push_back(st1.top());
            st1.pop();
        }
        while(!st2.empty()){
            b.push_back(st2.top());
            st2.pop();
        }
        return a==b;
    }
};