#include <iostream>
  
using namespace std;
  
int main() {
  
	int x;
	cin>>x;
	if(x==1)
		printf("Top 1\n");
	else if (x<=3)
		printf ("Top 3\n");
	else if (x<=5)
		printf ("Top 5\n");
	else if (x<=10)
		printf("Top 10\n");
	else if (x<=25)
		printf("Top 25\n");
	else if (x<=50)
		printf ("Top 50\n");
	else if (x<=100)
		printf("Top 100\n");
	return 0;
}