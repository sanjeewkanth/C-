#include <iostream>
#include <stack>

int main()
{
	std::stack<int> stack;
	stack.push(21);
	stack.push(22);
	stack.push(23);
	stack.push(24);
	stack.push(25);
	stack.push(22);
	stack.pop();
	while (!stack.empty())
	{
		std::cout << stack.top() << "\t";
		stack.pop();
		
	}
}
