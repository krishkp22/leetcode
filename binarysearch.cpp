#include <iostream>
using namespace std;

int main()
{
	int arr[100], left, mid, right, i, n, num;

	cout << "\n Enter the size of an array ";
	cin >> n;

	cout << "\n Enter the values in sorted order \n";

	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	/*Initialize beg and end value. */

	left = 0;
	right = n - 1;

	cout << "\n Enter a value to be searched in an array ";
	cin >> num;

	/*Run loop, while beg is less than end. */

	while (left <= right)
	{
		/*Calculate mid. */

		mid = (left + right) / 2;

		/*If value is found at mid index,
		   the print the position and exit. */

		if (arr[mid] == num)
		{
			cout << "\nItem found at position " << (mid + 1);

			exit(0);

		}
		else if (num > arr[mid])
		{
			left = mid + 1;

		}
		else if (num < arr[mid])
		{
			right = mid - 1;

		}
	}

	cout << "Number does not found.";
	return 0;
}
