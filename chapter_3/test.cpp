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
			cout << "The ball reached the ground after " << i << " hundredths of a second.\n";
			break;
		}
	}

	return 0;
}

