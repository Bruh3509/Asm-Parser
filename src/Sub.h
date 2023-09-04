#ifndef SUB_H
#define SUB_H
#include "Command.h"
#include "Parsing.h"

class Sub : public Command
{
public:
	Sub() = delete;
	~Sub() override = default;
	explicit Sub(std::string &command) : Command(command) {};
	void exec(std::map<std::string, std::string> &) override;
};


#endif//SUB_H
