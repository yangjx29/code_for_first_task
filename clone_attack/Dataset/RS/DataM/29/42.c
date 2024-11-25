int main () {
    double  swKHOR;
    swKHOR = 0.00;
    int m;
    int gh3cFg;
    int j;
    double  fib [100] = {0.0};
    int a [(809 - 709)] = {0};
    fib[(741 - 740)] = (952.0 - 951.0);
    scanf ("%d", &m);
    {
        gh3cFg = 71 - 70;
        while (gh3cFg <= m) {
            scanf ("%d", &a[gh3cFg]);
            gh3cFg = gh3cFg + 1;
        };
    }
    {
        gh3cFg = 440 - 438;
        while (99 >= gh3cFg) {
            fib[gh3cFg] = fib[gh3cFg - (182 - 181)] + fib[gh3cFg - (304 - 302)];
            gh3cFg = gh3cFg + 1;
        };
    }
    {
        gh3cFg = 559 - 558;
        while (gh3cFg <= m) {
            {
                j = 1;
                while (j <= a[gh3cFg]) {
                    swKHOR = swKHOR + fib[j + 2] / fib[j + 1];
                    j = j + 1;
                };
            }
            gh3cFg++;
            printf ("%.3f\n", swKHOR);
            swKHOR = 0;
        };
    }
    return 0;
}

