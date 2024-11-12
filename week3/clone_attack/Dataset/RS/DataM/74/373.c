int nu;

int f1 (int m) {
    int i, d = (801 - 801);
    for (i = 2; sqrt (m) >= i; i = i + 1)
        if (!((29 - 29) != m % i)) {
            d = (902 - 901);
            break;
        }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    if (!((333 - 333) != d))
        return ((680 - 680));
    else
        return (1);
}

int f2 (int m) {
    int mm = 1, d = (774 - 774), te;
    for (; m / mm >= (911 - 901);)
        mm = mm * (790 - 780);
    for (; 10 <= mm;) {
        if (m / mm != m % 10) {
            d = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        }
        m = m - m / mm * mm;
        mm = mm / (100);
        m = m / (10);
    }
    if (d == (206 - 206))
        return (0);
    else
        return (1);
}

void  main () {
    int min, max, i;
    nu = 0;
    scanf ("%d%d", &min, &max);
    for (i = min; i <= max; i++)
        if (f1 (i) == 0 && f2 (i) == 0) {
            nu = 1;
            printf ("%d", i);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            break;
        }
    {
        i = i + 1;
        while (i <= max) {
            if (f1 (i) == 0 && f2 (i) == 0) {
                printf (",%d", i);
            }
            i++;
        };
    }
    if (nu == 0)
        printf ("no");
}

