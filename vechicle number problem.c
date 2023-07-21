#include <stdio.h>

int main()
{
    int number_of_districts;
    char range_of_letters[3];
    int range_of_digits;

    scanf("%d", &number_of_districts);
    scanf("%s", range_of_letters);
    scanf("%d", &range_of_digits);

    // Calculate the total count
    int total_count = (26 * number_of_districts * (range_of_letters[1] - range_of_letters[0] + 1) * 10000);

    // Calculate the count of special numbers
    int special_count = 0;
    for (int i = 0 ; i < 10; i++)
    {
        if (range_of_digits == i || range_of_digits == (i * 10 + i) || range_of_digits == (i + i * 10))
        {
            special_count = 10;
            break;
        }
    }

    // Subtract the count of special numbers
    total_count -= special_count;

    // Print the result
    printf("%d\n", total_count);

    return 0;
}
