using namespace std;
#include<string>
#include <iostream>
#include <queue>
#include <stack>

int main()
{
  int listOfValues[] = { 12, 18, 19, 54, 43, 7 };
  queue<int> evenNumbers;
  queue<int> oddNumbers;
  stack<int> stack1;
  stack<int> stack2;
  for(int value : listOfValues)
  {
    stack1.push(value);
    if (value % 2 == 0)
    {
      evenNumbers.push(value);
    }
    else
    {
      oddNumbers.push(value);
    }
  }
  int count = 0;
  while (not stack1.empty())
  {
    stack2.push(stack1.top());
    stack1.pop();
    count++;
  }
  for (int i = 0; i < count; i++)
  {
    cout << stack2.top() << endl;
    stack2.pop();
  }

}

