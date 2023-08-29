#include <stdio.h>
#include <stdlib.h>
/* Function to print solid rectangle*/

void solid_rectangle(int n, int m)

{

int i, j;

for (i = 1; i <= n; i++)

{

for (j = 1; j <= m; j++)

{

printf("*");

}
printf("\n");


}

}

int main()

{

int rows, columns;

printf("enter number of rows ");

scanf("%d", &rows);

printf("entrt number of columns ");

scanf("%d", &columns);



solid_rectangle(rows, columns);

return 0;

}

