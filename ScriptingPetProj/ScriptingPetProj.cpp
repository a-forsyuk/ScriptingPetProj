// ScriptingPetProj.cpp : Defines the entry point for the application.
//

#include "ScriptingPetProj.h"
#include <tuple>

#include "Node.h"

using namespace std;

struct Test1
{
	int val()
	{
		return 5;
	}
};

struct Test2
{
	int val2()
	{
		return 7;
	}
};

class TestNode : public Node<TestNode>
{
public:
	TestNode();

	void testInput1(int val)
	{

	};

	void testInput2(float val)
	{

	};


	constexpr void (TestNode::SlotCallback_0)(int) = TestNode::testInput1;

	std::tuple<void(TestNode::*)(int val), void(TestNode::*)(float val)> Inputs = std::tuple{ &TestNode::testInput1, &TestNode::testInput2 };
};

int main()
{
	/*auto tuple = std::array{ &Test1::val , &Test2::val2 };

	auto func = std::get(0, tuple);

	Test1 obj;

	int i = ((&obj)->*func)();*/

	return 0;
}
