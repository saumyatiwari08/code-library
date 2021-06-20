unordered_map<char, int> order;
bool comp(string &a, string &b)
{
  for (int i = 0; i < min(a.size(), b.size()); ++i)
  {
    if (a[i] == b[i])
      continue;
    return order[a[i]] < order[b[i]];
  }
  return a.size() < b.size();
}

class Solution
{
public:
  bool isAlienSorted(vector<string> &words, string o)
  {
    auto temp = words;
    for (int i = 0; i < 26; ++i)
      order[o[i]] = i;
    sort(temp.begin(), temp.end(), comp);

    for (int i = 0; i < words.size(); ++i)
    {
      if (temp[i] != words[i])
        return false;
    }

    return true;
  }
};