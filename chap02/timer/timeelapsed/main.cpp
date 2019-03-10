#include <iostream>
#include <boost/timer.hpp>
#include <Windows.h>
using namespace std;
using namespace boost;

int main(void){
	timer t;
	Sleep(1000);
	cout << "elapsed time:" << t.elapsed() << "s\n";
	Sleep(1000);
	cout << "total elapsed time:" << t.elapsed() << "s\n";
	t.restart();
	Sleep(1000);
	cout << "elapsed time:" << t.elapsed() << "s\n";
	return 0;
}