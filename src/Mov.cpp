#include "Mov.h"

void Mov::exec(std::map<std::string, std::string> &data)
{
	bool isD = true;

	std::pair<std::string, std::string> operands = Parsing::parseStr(command);

	for (const auto &i : operands.second) {
		if (!std::isdigit(i)) {
			isD = false;
			break;
		}
	}
	if (isD) {
		data[operands.first] = std::to_string(std::stoi(operands.second));
	}
	else {
		data[operands.first] = data[operands.second];
	}
}
