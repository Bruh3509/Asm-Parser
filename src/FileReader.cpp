#include "FileReader.h"

std::vector<std::string> FileReader::readFile(const std::string &fInF)
{
	std::ifstream in;
	in.open(fInF);
	if (!in) {
		throw std::invalid_argument("File is not found");
	}
	std::vector<std::string> res;
	while (!in.eof()) {
		std::string buf;
		std::getline(in, buf);
		res.push_back(buf);
	}
	in.close();
	return res;
}
