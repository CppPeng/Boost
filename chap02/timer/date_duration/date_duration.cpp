#include <iostream>
#define BOOST_DATE_TIME_SOURCE
#include <boost/date_time/gregorian/gregorian.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
using namespace std;
using namespace boost::gregorian;
using namespace boost::posix_time;
#pragma comment(lib,"boost_date_time-vc120-mt-gd-x32-1_66.lib")

int main(void){
	date d1(from_string("2018-01-01"));
	date d2(from_string("2019-03-10"));
	date_duration dur(d2 - d1);
	cout << dur << endl;
	date_duration one(1);
	d2 += one;
	cout << to_iso_extended_string(d2) << endl;
	date_period dp(date(2018, 01, 01), date(2019, 01, 01));
	cout << dp.length() << endl;
	cout << dp.begin() << " " << dp.end() << endl;
	cout << dp.last() << endl;
	//date d6(*localtime(NULL));
	time_t t = time(NULL);
	tm *p = localtime(&t);
	//cout << p->tm_mday <<" "  << p->tm_mon <<" "<< p->tm_year << endl;
	cout << second_clock::local_time() << endl;
	cout << second_clock::universal_time() << endl;
	cout << to_simple_string(second_clock::local_time()) << endl;
	cout << to_iso_string(second_clock::local_time()) << endl;
	
	return 0;
}