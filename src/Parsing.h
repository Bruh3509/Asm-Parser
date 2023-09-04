#ifndef PARSING_H
#define PARSING_H
#include <iterator>
#include <map>
#include <string>
#include <vector>
class Parsing
{
private:
	const static inline std::string keys[3] = {".data", ".code", ".end"};

	static std::vector<std::string>::iterator parser(std::vector<std::string> &,
													 std::vector<std::string>::iterator,
													 const std::string &);

public:
	static std::map<std::string,
					std::pair<std::vector<std::string>::iterator, std::vector<std::string>::iterator>>
	parseMap(std::vector<std::string> &);

	static std::vector<std::string> parseCommands(
		std::pair<std::vector<std::string>::iterator, std::vector<std::string>::iterator>);

	static std::map<std::string, std::string> parseData(
		std::pair<std::vector<std::string>::iterator, std::vector<std::string>::iterator>);

	static std::pair<std::string, std::string> parseStr(const std::string &);
};

#endif//PARSING_H
