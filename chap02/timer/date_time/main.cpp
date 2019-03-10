#include <iostream>
#define BOOST_DATE_TIME_SOURCE
#include <boost/date_time/gregorian/gregorian.hpp>
#include <cassert>
using namespace std;
using namespace boost;
using namespace boost::gregorian;
#pragma comment(lib,"boost_date_time-vc120-mt-gd-x32-1_66.lib")
int main(void){
#if 0
	gregorian::date d;
	gregorian::date d1(2012, 01, 20);
	gregorian::date d2(2012, gregorian::Jan, 10);
	gregorian::date d3(d1);
	date d5 = from_string("2019-4-10");
	assert(d == gregorian::date(gregorian::not_a_date_time));
	//date d5 = gregorian::from_string("2019-3-10");
	//assert()
	//cout << d.is_not_a_date() << endl;
	//cout << d.is_not_a_date() << endl;
	//cout << d5 << endl;
	cout << d5 << endl;
	cout << day_clock::local_day() << endl;
	cout << day_clock::universal_day() << endl;
#endif
	date d(neg_infin);
	date d1(pos_infin);
	date d2(max_date_time);
	date d3(min_date_time);
	date d4(not_a_date_time);
	date d5(from_string("2019/3/10"));
	cout << d << endl;
	cout << d1 << endl;
	cout << d2 << endl;
	cout << d3 << endl;
	cout << d4 << endl;
	//cout << d3.day() << endl;
#if 0
	int a = date(from_string("2019/3/10")).day_of_week();
	int b = date(from_string("2019/3/10")).day_of_year();
	cout << a << " " << b << endl;
	cout << date(from_string("2019/3/10")).end_of_month() << endl;
#endif
	cout << to_simple_string(d5) << " " << to_iso_string(d5) << " " <<
		to_iso_extended_string(d5) << endl;
	cout << to_tm(d5).tm_hour << endl;
	return 0;
}