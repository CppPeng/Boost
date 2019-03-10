#include <iostream>
#include <memory>
using namespace std;
class Test{
public:
	Test(){
		cout << "Test" << endl;
	}
private:
	virtual ~Test(){
		cout << "~Test\n";
	}
};
int main(void){
	Test t;
	return 0;
}