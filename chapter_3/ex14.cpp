#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	//Collect and store variables.

	const double delta_t = 0.01;
	const double g = 9.81;

	double v_new;
	double s_old = 0;
	double s_new;

	cout << "What's the ball's initial velocity? (m/s) ";
	double v_old;
	cin >> v_old;

	/*

	This loop begins by calculating the new velocity and distance.
	It prints out the distance every hundred iterations (every second.)
	Then it sets the velocity and distance it calculated to the old values,
	so it can use them to calculate another batch in the next pass.
	As soon as the distance reaches 0, the ball has hit the ground.
	The program stops and prints how many passes it took to reach
	that mark.

	*/


	for (int i = 0; i >= 0; i++)
	{
		v_new = v_old - g * delta_t;

		s_new = s_old + v_new * delta_t;

		if (i % 100 == 0)
		{
			cout << "At " << i / 100 << " seconds the ball is " << s_new << " meters from the ground. \n";
		}

		v_old = v_new;

		s_old = s_new;

		if (s_new <= 0)
		{
			cout << "The ball reached the ground after " << i << " milliseconds.\n";
			break;
		}
	}


	/*

	This loop does essentially the same thing but with another formula.
	We break when the distance is less than 0, because it starts off at
	0 and therefore you can't use <=.

	*/

	cout << "Please enter the same velocity (testing purposes). ";
	double v_old2;
	cin >> v_old2;

	double s_new2;

	for (int j = 0; j >= 0; j++)
	{

		int new_t = j;

		s_new2 = (-0.5 * g * (new_t * new_t) + (v_old2 * new_t));

		if (s_new2 < 0)
		{
			cout << "The ball reached the ground after " << j << " seconds.\n";
			break;
		}
	}
	return 0;
}

