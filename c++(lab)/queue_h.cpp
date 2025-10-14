#include "queue.h"
int main()
{
	queue qu;
	qu.enqueue(10);
	qu.enqueue(20);
	qu.enqueue(30);
	qu.display();
	cout<< qu.peek() << endl;
	qu.dequeue();
	cout << qu.isempty() << endl;
	qu.display();
	
}
