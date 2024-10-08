class Solution {
public:
    bool findsuccessors(vector<int>& hand, int groupSize, int i){
        int next = hand[i]+1;
        hand[i] = -1;
        i+=1;
        int count = 1;

        while(i<hand.size() && count < groupSize){
            if(hand[i] == next){
                next = hand[i]+1;
                hand[i] = -1;
                count++;
            }
            i++;
        }
        return count == groupSize;
    }

    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size() % groupSize != 0) return false; 
        sort(hand.begin(), hand.end());
        
        for(int i=0; i<hand.size(); i++){
            if(hand[i] >= 0){
                if(!findsuccessors(hand, groupSize, i))
                    return false;
            }
        }
        return true;
    }
};