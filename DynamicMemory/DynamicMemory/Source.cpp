#include <stdio.h>
#include <stdlib.h>

int main()
{
	int index = 0;
	int i = 0;
	int n;
	int* marks;
	int ans;
	marks = (int*)malloc(sizeof(int));

	if (marks == NULL)
		printf("Memory could not be allocated");
	else
	{
		printf("Memory allocated with malloc\n");
		printf("\n marks = %pc\n", marks);

		do
		{
			printf("\n Enter marks\n");
			scanf_s("%d", &ans);

			if (ans == 1)
			{
				index++;
				marks = (int*)realloc(marks, (index + 1) * sizeof(int));

				if (marks == NULL)
					printf("memory could not be allocated");
				else
				{
					printf("Memory allocated with malloc\n");
					printf("\n base address of marks are:%c", marks);
				}
			}
		} while (ans == 1);
		for (i = 0; i < index; i++)
		{
			printf("marks of students %d are: %d\n ", i, marks[i]);
		}
		free(marks);
	}
	return 0;
}