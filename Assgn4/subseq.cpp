
#include<bits/stdc++.h>
using namespace std;
void FindSub(string str, string res,
			int i)
{
	if (i == str.length())
	{
		if (res.length() > 0)
		{
		cout << res << " ";
		}
		return;
	}

	
	char ch = str[i];

	
	FindSub(str, res, i + 1);

	
	FindSub(str, res + ch, i + 1);

	
	FindSub(str, res + to_string(int(ch)), i + 1);
}


int main()
{
	string str = "ab";
	string res = "";
	

	int N = str.length();

	FindSub(str, res, 0);
}


