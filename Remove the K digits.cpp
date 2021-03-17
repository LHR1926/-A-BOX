class Solution {
public:
string removeKdigits(string num, int k)
{
	string result;
	for (int i = 0; i < num.size(); i++)
	{
		while (result.size() && k&&result.back() > num[i])
		{
			result.pop_back();
			k--;
		}
		if (result.size() == 0 && num[i] == '0')
			continue;
		result+=num[i];
	}
    while (k > 0 && !result.empty())
	{
		result.pop_back();
		k--;
	}
	return result == "" ? "0" : result;
}
};