class Solution {
public:
    int strStr(string h, string n) {
        int k=n.size();
        if(h.size()<n.size()) return -1;
        if(h.size()==n.size()){
            if(h==n) return 0;
            else return -1;
        }
        string str=\\;
        str=h.substr(0,k);
        int l=0;
        while((l+k)<=h.size()){
            str=h.substr(l,k);
            if(str==n){
                return l;
            }
            l++;
        }
        return -1;
    }
};