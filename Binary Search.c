#include <stdio.h>

int main()
{
 //variable diclaration
    int c, first, last, middle, n, search, array[100];
// Arry size input
    printf("Enter number of elements\n");
    scanf("%d",&n);
// Enter Elements for the array
    printf("Enter %d integers\n", n);
// for loop for iniput data to array
    for (c = 0; c < n; c++)
        scanf("%d",&array[c]);
// input Search key
    printf("Enter value to find\n");
    scanf("%d", &search);

    first = 0;
    last = n - 1;
    middle = (first+last)/2;
// impliment the binary Search
    while (first <= last) {
        if (array[middle] < search)
            first = middle + 1;
        else if (array[middle] == search) {
            printf("%d found at location %d.\n", search, middle+1);
            break;
        }
        else
            last = middle - 1;

        middle = (first + last)/2;
    }
    if (first > last)
        printf("Not found! %d isn't present in the list.\n", search);

    return 0;
}
