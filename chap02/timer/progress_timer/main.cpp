#include <iostream>
#include <boost/progress.hpp>
#include <Windows.h>
#include <string>
#define BOOST_DATE_TIME_SOURCE
#include <boost/date_time/gregorian/greg_date.hpp>
using namespace std;
using namespace boost;
using namespace boost::gregorian;

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
	date d(2019, 1, 24);
	cout << d.is_not_a_date() << endl;
	return 0;
}