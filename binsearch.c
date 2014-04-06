#include <stdio.h>

int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low+high)/2;
        if (x < v[mid])
            high = mid + 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}

int main()
{
    int tosearch[10];
    int pos;
    tosearch[0] = 2;
    tosearch[1] = 4;
    tosearch[2] = 7;
    tosearch[3] = 12;
    tosearch[4] = 13;
    tosearch[5] = 17;
    tosearch[6] = 26;
    tosearch[7] = 33;
    tosearch[8] = 35;
    tosearch[9] = 40;
    pos = binsearch(33, tosearch, 10);
    printf("%d\n", pos);
    return 0;
}
