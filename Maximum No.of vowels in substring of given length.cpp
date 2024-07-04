class Solution {
public:


 bool isv(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int maxVowels(string s, int k) {
        int n = s.size();
        int left =0;
        int right = k-1;
        int count=0;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            if( i<k)
            {
                if( isv(s[i]))
                count++;
            }
            else
            {
                break;
            }
        }
        maxi=count;
       while(right+1<n)
        {

                if( isv(s[right+1]))
                {
                    count++;
                }

            if(isv(s[left]))
            {
                count--;
            }
            right++;
            left++;
            maxi=max(maxi,count);

        }

        return maxi;

    }
};
