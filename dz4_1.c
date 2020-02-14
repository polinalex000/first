#include <stdio.h>

int main()
{
    int input;
    int negative_counter = 0;

    // 0 = False, 1 = True
    int negative_sequence_finished = 0;

    while (1)
    {
        printf("Member of sequence: ");
        scanf("%d", &input);

        if (input == 0)
        {
            break;
        }
        else if (input < 0)
        {
            if (negative_sequence_finished == 1)
            {
                negative_counter = 0;
                negative_sequence_finished = 0;
            }

            negative_counter++;
        } 
        else
        {
            negative_sequence_finished = 1;
        }
    }

    printf("The last negative sequence contained %d numbers.\n", negative_counter);
}
