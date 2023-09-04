#include "Program.h"

int Program::main()
{
	FileReader fileReader{in};
	std::vector<std::string> res;
	try {
		res = fileReader.readFile(in);
	}
	catch (std::invalid_argument &ex) {
		std::cout << "Exception: " << ex.what() << std::endl;
	}

	std::map<std::string, std::pair<std::vector<std::string>::iterator, std::vector<std::string>::iterator>>
		itMap = Parsing::parseMap(res);

	std::map<std::string, std::string> data;
	std::vector<std::string> commands;
	for (const auto &i : itMap) {
		if (i.first == ".data") {
			data = Parsing::parseData(i.second);
		}
		else if (i.first == ".code") {
			commands = Parsing::parseCommands(i.second);
		}
	}

	std::unique_ptr<Command> cmd;
	for (const auto &i : commands) {
		std::pair<std::string, std::string> cPair = Parsing::parseStr(i);
		if (cPair.first == "mov")
			cmd = std::make_unique<Mov>(cPair.second);
		else if (cPair.first == "add")
			cmd = std::make_unique<Add>(cPair.second);
		else if (cPair.first == "mul")
			cmd = std::make_unique<Mul>(cPair.second);
		else if (cPair.first == "sub")
			cmd = std::make_unique<Sub>(cPair.second);
		else if (cPair.first == "div")
			cmd = std::make_unique<Div>(cPair.second);
		cmd->exec(data);
	}

	std::ofstream fOut;
	fOut.open(out);
	IOConsole<std::string, std::string>::print(data, fOut);
	fOut.close();
	return 0;
}
