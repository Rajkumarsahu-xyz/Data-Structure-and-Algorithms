// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        int i=1, j=n;
        while(i<j)
        {
            int mid = i + (j-i)/2;
            if(isBadVersion(mid) == false)
                i = mid+1;
            else
                j = mid;
        }
        
        return i;
    }
};