int reverse (int n) {
    int timer;
    int neo;
    int e;
    int i;
    int j;
    int d [(894 - 693)];
    timer = (592 - 592);
    neo = (679 - 679);
    e = (100 - 99);
    if (n < (886 - 886))
        n = n * (-(109 - 108));
    do {
        timer = timer + 1;
        d[timer] = n % (800 - 790);
        n = n / ((461 - 451));
    }
    while (0 < n);
    {
        i = 528 - 527;
        while (i <= timer) {
            {
                j = 329 - 328;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (j <= timer - i) {
                    j = j + 1;
                    e = e * (10);
                };
            }
            neo += d[i] * e;
            i = i + 1;
            e = (731 - 730);
        };
    }
    return neo;
}

int main () {
    int n;
    int i;
    {
        i = 1;
        while (i < (824 - 817)) {
            i = i + 1;
            scanf ("%d", &n);
            if (n < 0)
                ;
            printf ("%d\n", reverse (n));
        };
    }
    return 0;
}

