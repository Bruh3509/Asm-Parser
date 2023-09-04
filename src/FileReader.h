#ifndef FILEREADER_H
#define FILEREADER_H

#include <fstream>
#include <map>
#include <stdexcept>
#include <string>
#include <vector>
class FileReader
{
private:
	std::string fIn;

public:
	FileReader() = delete;
	explicit FileReader(std::string &fIn) : fIn{fIn} {}

	std::vector<std::string> readFile(const std::string &);
};


#endif//FILEREADER_H
