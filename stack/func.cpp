#include "func.h"
bool check_brac(std::string str)
{
	std::stack<char> s;
	char c;
	for (int i = 0; i < str.length(); i++)
	{
		if(str[i] == '(' || str[i] == '[' || str[i] == '{')
		{
			s.push(str[i]);
			continue;
		}
		if (s.empty())
		{
			return false;
		}
		switch (str[i])
		{
			case ')':
				c = s.top();
				s.pop();
				if ( c == '{' || c == '[')
					return false;
				break;
			case ']':
				c = s.top();
				s.pop();
				if (c == '(' || c == '{')
					return false;
				break;
			case '}':
				c = s.top();
				s.pop();
				if (c == '(' || c == '[')
					return false;
				break;
		}
	}
	 return ( s.empty());
}
