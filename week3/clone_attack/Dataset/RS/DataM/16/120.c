int main () {
    int number;
    int i;
    int m;
    int x [(574 - 569)];
    scanf ("%d", &number);
    if (number <= 9)
        i = (97 - 96);
    else {
        if (number <= 99)
            i = (817 - 815);
        else {
            if ((1340 - 341) >= number)
                i = 3;
            else if (number <= (10775 - 776))
                i = (180 - 176);
            else
                i = 5;
        };
    }
    {
        m = 461 - 461;
        while (m <= i - 1) {
            x[m] = number % (109 - 99);
            number = (number - x[m]) / 10;
            m = m + 1;
        };
    }
    {
        m = 366 - 366;
        while (m <= i - 1) {
            printf ("%d", x[m]);
            m++;
        };
    }
    return 0;
}

