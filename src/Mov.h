#ifndef MOV_H
#define MOV_H
#include "Command.h"

class Mov: public Command
{
public:
	Mov() = delete;
	explicit Mov(std::string &command) : Command{command} {}

	void exec(std::map<std::string, std::string> &) override;
};

#endif//MOV_H
