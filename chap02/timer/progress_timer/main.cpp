#include <iostream>
#include <boost/progress.hpp>
#include <Windows.h>
#include <string>
#include <ostream>
using namespace std;
using namespace boost;

int main(void){
	{
		progress_timer t;
		Sleep(1000);
	}
	{
		progress_timer t;
		Sleep(2000);
		cout << "time elapsed:" << t.elapsed() << "s\n";
	}
	return 0;
}