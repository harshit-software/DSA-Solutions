// Method 1
class Solution
{
public:
  vector<int> findUnion(vector<int> &a, vector<int> &b)
  {
    // code here
    set<int> mainSet;
    vector<int> res;
    for (auto it : a)
      mainSet.insert(it);
    for (auto it : b)
      mainSet.insert(it);
    for (auto it : mainSet)
      res.push_back(it);
    return res;
  }
};

// Method 2
class Solution
{
public:
  vector<int> findUnion(vector<int> &a, vector<int> &b)
  {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector<int> res;
    int n = a.size(), m = b.size(), i = 0, j = 0;
    while (i < n && j < m)
    {
      if (a[i] <= b[j])
      {
        if (res.size() == 0 || res.back() != a[i])
        {
          res.push_back(a[i]);
        }
        i++;
      }
      else
      {
        if (res.size() == 0 || res.back() != b[j])
        {
          res.push_back(b[j]);
        }
        j++;
      }
    }
    while (i < n)
    {
      if (res.size() == 0 || res.back() != a[i])
      {
        res.push_back(a[i]);
      }
      i++;
    }
    while (j < m)
    {
      if (res.size() == 0 || res.back() != b[j])
      {
        res.push_back(b[j]);
      }
      j++;
    }
    return res;
  }
};