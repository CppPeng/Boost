#include <iostream>
#include <boost/timer.hpp>
using namespace std;
using namespace boost;
int main(void){
	timer t;
	cout << "可度量的最大时间:" << t.elapsed_max() / 3600 << "h\n";
	cout << "可度量的最小时间:" << t.elapsed_min() << "s\n";
	cout << "消逝的时间:" << t.elapsed() << "s" << endl;
	return 0;
}