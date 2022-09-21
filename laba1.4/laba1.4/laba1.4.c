#include <stdio.h>
int main()
{
	int n;
	printf("enter month number:\n1-January\n2-February\n3-March\n4-April\n5-May\n6-June\n7-July\n8-August\n9-September\n10-October\n11-November\n12-December\n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 12:case 1:case 2: printf("winter");
	break;
	case 3:case 4: case 5: printf("spring");
	break;
	case 6:case 7: case 8: printf("summer");
	break;
	case 9:case 10: case 11: printf("autumn");
    break;
	default: printf("no such month or incorrect input");
		break;
		}
	
} 