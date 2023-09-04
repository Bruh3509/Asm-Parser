#include "Program.h"


int main()
{
	Program app{"../res/input.txt", "../res/output.txt"};
	return app.main();
}
