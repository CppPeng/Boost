#include <iostream>
#include <boost/smart_ptr.hpp>
#include <string>
#include <vector>
using namespace std;
using namespace boost;
class TestUnit{
public:
	TestUnit(std::string str = "0"){
		m_strId = str;
		cout << "this is the unit " << str << endl;
	}
	~TestUnit(){
		cout << "~TestUnit "<<m_strId << "\n";
	}
private:
	string m_strId;
};
int main(void){
#if 0
	scoped_array<int> sa(new int[10]);
	//for (int i = 0; i < 10; ++i)
		//sa[i] = i;
	fill_n(&sa[0], 10, 5);
	for (int i = 0; i < 10; ++i)
		cout << sa[i] << endl;
#endif
#if 0
	std::shared_ptr<int> spi = std::make_shared<int>(10);
	std::shared_ptr<int> spi2 = spi;
	//cout << (spi > spi2) << endl;
	//cout << (spi < spi2) << endl;
	cout << spi.unique() << endl;
	cout << (spi == spi2) << endl;
	cout << *spi << endl;
	*spi2 = 100;
	cout << *spi << endl;
	spi.reset();
	cout << (spi == NULL) << endl;
#endif
#if 0
	std::shared_ptr<TestUnit> spt = std::make_shared<TestUnit>("1");
	std::shared_ptr<TestUnit> spt2 = std::make_shared<TestUnit>();
#endif
	vector<std::shared_ptr<int>> vs;
	for (int i = 0; i < 10; ++i)
		vs.push_back(std::make_shared<int>(i));
	for (auto it = vs.begin(); it != vs.end(); ++it)
		cout << *(*it) << endl;
	return 0;
}