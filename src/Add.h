#ifndef ADD_H
#define ADD_H
#include "Command.h"

class Add: public Command
{
public:
	Add() = delete;
	explicit Add(std::string &command) : Command(command) {}
	void exec(std::map<std::string, std::string> &) override;
};

#endif//ADD_H
