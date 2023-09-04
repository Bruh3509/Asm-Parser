#ifndef COMMAND_H
#define COMMAND_H
#include <map>
#include <string>

class Command
{

public:
	Command() = delete;
	explicit Command(std::string &command) : command{command} {}

	virtual void exec(std::map<std::string, std::string> &) = 0;
	virtual ~Command() = default;
protected:
	std::string command;
};


#endif//COMMAND_H
