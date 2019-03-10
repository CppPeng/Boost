#include "sample.h"
#include <iostream>
class sample::impl{
public:
	void print(){
		std::cout << "impl\n";
	}
};
sample::sample():m_pImpl(new impl){

}
void sample::print(){
	m_pImpl->print();
}

