#include <iostream>
#include <boost/timer.hpp>
using namespace std;
using namespace boost;
int main(void){
	timer t;
	cout << "�ɶ��������ʱ��:" << t.elapsed_max() / 3600 << "h\n";
	cout << "�ɶ�������Сʱ��:" << t.elapsed_min() << "s\n";
	cout << "���ŵ�ʱ��:" << t.elapsed() << "s" << endl;
	return 0;
}