#ifndef MUL_H
#define MUL_H
#include "Command.h"

class Mul: public Command
{
public:
	Mul() = delete;
	explicit Mul(std::string &command) : Command(command) {}

	void exec(std::map<std::string, std::string> &) override;
};

#endif//MUL_H
