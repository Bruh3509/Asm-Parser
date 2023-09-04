#ifndef DIV_H
#define DIV_H
#include "Parsing.h"
#include "Command.h"

class Div : public Command
{
public:
	Div() = delete;
	~Div() override = default;
	explicit Div(std::string &command) : Command(command) {}
	void exec(std::map<std::string, std::string> &) override;
};


#endif//DIV_H
