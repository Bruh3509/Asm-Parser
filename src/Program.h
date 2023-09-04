#ifndef PROGRAM_H
#define PROGRAM_H

#include <iostream>
#include <utility>
class Program
{

public:
	Program() = delete;
	explicit Program(std::string in, std::string out) : in{std::move(in)}, out{std::move(out)} {}
	int main();

private:
	std::string in;
	std::string out;
};


#endif//PROGRAM_H
