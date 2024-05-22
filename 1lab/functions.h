#pragma once


namespace func
{
	int recursion_1(unsigned int n)
	{
		if (n == 1)
		{
			return 1;
		}
		else if (n == 2)
		{
			return 2;
		}
		else if (n > 2 && n % 2 == 0)
		{
			return ((8 * n + recursion_1(n - 3)) / 9);
		}
		else if (n > 2 && n % 2 != 0)
		{
			return ((4 * n + recursion_1(n - 1) + recursion_1(n - 2)) / 7);
		}
	}

	int recursion_2(unsigned int n)
	{
		if (n == 1)
		{
			return 1;
		}
		else if (n % 2 == 0)
		{
			return (n + 2 * recursion_2(n - 1));
		}
		else if (n > 1 && n % 2 != 0)
		{
			return (1 + 3 * recursion_2(n - 2));
		}
	}
}