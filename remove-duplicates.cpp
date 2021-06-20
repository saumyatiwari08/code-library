string removeDups(string S) {
		if (S == " " || S == "")
			return S;
		unordered_map<char, int>mp;
		int len = S.size();
		for (int i = 0; i < len; i++)
		{
			mp[S[i]]++;
		}
		string result = "";
		for (int i = 0; i < len; i++)
		{
			if (mp[S[i]] != -1)
			{
				result += S[i];
				mp[S[i]] = -1;
			}
		}
		return result;
}