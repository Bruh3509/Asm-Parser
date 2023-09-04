#include "Parsing.h"
std::map<std::string, std::pair<std::vector<std::string>::iterator, std::vector<std::string>::iterator>>
Parsing::parseMap(std::vector<std::string> &strList)
{
	std::vector<std::string>::iterator itDataBeg;
	std::vector<std::string>::iterator itDataEnd;
	std::vector<std::string>::iterator itCodeBeg;
	std::vector<std::string>::iterator itCodeEnd;
	itDataBeg = parser(strList, strList.begin(), keys[0]);
	itDataEnd = parser(strList, itDataBeg, keys[1]);
	itCodeBeg = itDataEnd;
	itCodeEnd = parser(strList, itCodeBeg, keys[2]);

	std::map<std::string, std::pair<std::vector<std::string>::iterator, std::vector<std::string>::iterator>>
		res;
	res.insert(std::make_pair(keys[0], std::make_pair(itDataBeg, itDataEnd)));
	res.insert(std::make_pair(keys[1], std::make_pair(itCodeBeg, itCodeEnd)));
	return res;
}

std::vector<std::string>::iterator
Parsing::parser(std::vector<std::string> &strList,
				std::vector<std::string>::iterator it, const std::string &str)
{
	while (it != strList.end()) {
		if (*it == str) {
			break;
		}
		else {
			++it;
		}
	}
	return it;
}

std::vector<std::string>
Parsing::parseCommands(std::pair<std::vector<std::string>::iterator,
								 std::vector<std::string>::iterator>
						   pair)
{
	auto itF = pair.first;
	const auto itS = pair.second;
	std::vector<std::string> res;

	while (++itF != itS) {
		res.push_back(*itF);
	}
	return res;
}

std::pair<std::string, std::string> Parsing::parseStr(const std::string &str)
{
	std::string pStr;
	std::string pInt;

	bool ch = false;
	bool ch1 = true;
	for (const auto &i : str) {
		if ((i == ' ' || i == '\t') && ch1) {
			ch = true;
			continue;
		}
		if (ch) {
			ch1 = false;
			pInt += i;
		}
		else {
			pStr += i;
		}
	}

	return std::make_pair(pStr, pInt);
}

std::map<std::string, std::string>
Parsing::parseData(std::pair<std::vector<std::string>::iterator,
							 std::vector<std::string>::iterator>
					   pair)
{
	auto itF = pair.first;
	const auto itS = pair.second;
	std::map<std::string, std::string> res;

	while (++itF != itS) {
		res.insert(parseStr(*itF));
	}
	return res;
}
