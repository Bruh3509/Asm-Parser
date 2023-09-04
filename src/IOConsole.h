#ifndef IOCONSOLE_H
#define IOCONSOLE_H
#include <iostream>
#include <map>
#include <string>
#include <vector>

template<class T, class L>
class IOConsole
{
public:
	static void print(std::map<T, L> &map, std::ostream &out)
	{
		for (const auto &i : map) {
			out << i.first << " " << i.second << std::endl;
		}
	}
	static void print(std::vector<T> &vec, std::ostream &out)
	{
		for (const auto &i : vec) {
			out << i << std::endl;
		}
	}
};

#endif// IOCONSOLE_H
