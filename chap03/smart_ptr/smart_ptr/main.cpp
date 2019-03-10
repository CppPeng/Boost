#include <iostream>
#include <boost/smart_ptr.hpp>
using namespace std;
using namespace boost;
class bar{
public:
	bar(){
		cout << "bar()\n";
	}
	~bar(){
		cout << "~bar()\n";
	}
};
int main(void){
	scoped_ptr<bar> pb(new bar);
	if (pb == NULL){
		cout << "null ptr";
	}
	else
		cout << "ptr is not null!\n";
	pb.reset();
	if (!pb){
		cout << "pb == NULL\n";
	}
	return 0;
}