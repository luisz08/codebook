#include <string>

std::string trim(const std::string& s)
{
	static const std::string delim = " \t\r\n";
	std::string::size_type beg = s.find_first_not_of(delim);
	if(beg == std::string::npos)
	{
		return "";
	}
	else
	{
		return s.substr(beg, s.find_last_not_of(delim) - beg + 1);
	}
}

