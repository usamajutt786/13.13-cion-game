#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string>
using namespace std;
class coin
{
	string sideup;
public:
	coin()
	{

		int num;
		num = rand() % 2 + 1;
		if (num == 1)
		{
			sideup = "Heads";
		}
		else
			sideup = "Tails";
	}
	//mautators ............setter functions 
	void setToss(string side)
	{
		sideup = side;
	}
	//accessors.............getter functions 
	string getToss()
	{
		return sideup;
	}
};
int main()

{
	//take two integers for count the number of heads and tails 
	//int count1 = 0, count2 = 0;
	float score = 0.0;
	string temp1, temp2, temp3;
	//use loop for printing and counting the number of heads and taiuils 
	srand(time(NULL));
	while (score <= 1)
	{

		coin quarter;
		coin dim;
		coin nickle;
		temp1 = quarter.getToss();
		temp2 = dim.getToss();
		temp3 = nickle.getToss();
		{
			if (temp1 == "Heads")
				score = score + 0.25;

			if (temp2 == "Heads")
				score = score + 0.25;
			if (temp3 == "Heads")
				score = score + 0.25;
		}
	}
	cout << "your score is " << score<<endl;
	if (score == 1)
		cout << "you won the game " << endl;
	else
		cout << "you lose the game" << endl;
}

  