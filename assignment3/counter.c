//#include <stdio.h>
//#include <unistd.h>

int main()
{
    int count = 0;
    const int limit = 5;

    while (1)
    {
        //printf("%d\n", count);
        count++;
        if (count == limit)
        {
            count = 0;
        }
        //sleep(1);
    }

    return 0;
}


