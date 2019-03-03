#include <iostream>
using namespace std;
#define FULL 10;
#define EMPTY 0;

void give(int giver, int *basket);
void take(int taker, int *basket);

int main() {
	int giver, taker;
	int basket = 5;

	giver = 2;
	taker = 1;

	give(giver, &basket);
	take(taker, &basket);
	
	//Test for a new branch
	printf("The basket have %d apples\n", basket);

}

void give(int giver, int *basket)
{
	*basket += giver;
}

void take(int taker, int *basket) {
	*basket -= taker;
}
