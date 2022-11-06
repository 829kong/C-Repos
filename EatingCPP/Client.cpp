#include "Client.h"

int main()
{
	Marine* marines[100];
	marines[0] = new Marine(2, 3);
	marines[1] = new Marine(3, 5);

	marines[0]->show_status();
	marines[1]->show_status();

	cout << endl << "마린1이 마린2를 공격! " << endl;
	marines[0]->Be_Attacked(marines[1]->Attack());

	marines[0]->show_status();
	marines[1]->show_status();

	delete marines[0];
	delete marines[1];
}