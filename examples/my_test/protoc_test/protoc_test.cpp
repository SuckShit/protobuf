#include <string>
#include <iostream>
#include "..\cpp\my_test.pb.h"
using namespace std;
int main(int argc, char* argv[])
{
	fuckingasshole::testwhat shit;
	string output;
	shit.set_opbl(false);
	shit.set_opint(0);
	shit.SerializeToString(&output);
	cout << shit.DebugString() << endl;

	return 0;
}