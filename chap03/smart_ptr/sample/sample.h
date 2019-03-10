#include <memory>
class sample{
public:
	void print();
	sample();
private:
	class impl;
	std::shared_ptr<impl> m_pImpl;
};