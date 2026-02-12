// Approach 1

class Solution
{
public:
    int maxProduct(int n)
    {
        vector<int> digit;
        while (n)
        {
            int rem = n % 10;
            digit.push_back(rem);
            n = n / 10;
        }
        sort(digit.begin(), digit.end());
        int m = digit.size();
        return digit[m - 1] * digit[m - 2];
    }
};

// Approach 2
class Solution
{
public:
    int maxProduct(int n)
    {
        int fmax = -1, smax = -1;
        while (n)
        {
            int rem = n % 10;
            n = n / 10;
            if (rem > fmax)
            {
                smax = fmax;
                fmax = rem;
            }
            else if (rem > smax)
            {
                smax = rem;
            }
        }
        return fmax * smax;
    }
};