#ifndef PROGRAM_H
#define PROGRAM_H

#include "Add.h"
#include "Command.h"
#include "FileReader.h"
#include "IOConsole.h"
#include "Mov.h"
#include "Mul.h"
#include "Sub.h"
#include "Div.h"
#include "Parsing.h"

#include <memory>
#include <string>

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
