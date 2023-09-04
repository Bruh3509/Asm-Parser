#include "Sub.h"

void Sub::exec(std::map<std::string, std::string> &data)
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
		data[operands.first] = std::to_string(std::stoi(data[operands.first])
											  - std::stoi(operands.second));
	}
	else {
		data[operands.first] = std::to_string(std::stoi(data[operands.first])
											  - std::stoi(data[operands.second]));
	}
}