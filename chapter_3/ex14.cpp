#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const double delta_t = 0.01;
	const double g = 9.81;

	double v_new;
	double s_old = 0;
	double s_new;

	cout << "What's the ball's initial velocity? (m/s) ";
	double v_old;
	cin >> v_old;


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
			i = -5;
		}
	}

	cout << "Please enter the same velocity (testing purposes). ";
	double v_old2;
	cin >> v_old2;

	double s_new2;

	for (int j = 0; j >= 0; j++)
	{
		s_new2 = (-0.5 * g * (j*j) + (v_old2 * j));

		if (s_new2 <= 0)
		{
			cout << "The ball reached the ground after " << j << " seconds.\n";
			j = -5;
		}
	}
	return 0;
}

