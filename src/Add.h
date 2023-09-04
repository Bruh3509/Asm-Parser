#ifndef ADD_H
#define ADD_H
#include "Command.h"
#include "Parsing.h"

class Add: public Command
{
public:
	Add() = delete;
	~Add() override = default;
	explicit Add(std::string &command) : Command(command) {}
	void exec(std::map<std::string, std::string> &) override;
};

#endif//ADD_H
