int huiwen (long  n) {
    int j;
    int i;
    int s21ztclKA4p [(30 - 19)];
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
    i = (286 - 286);
    for (; n != (589 - 589);) {
        s21ztclKA4p[i] = n % (678 - 668);
        n = n / 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i++;
    }
    {
        j = 721 - 721;
        while (j < i / (70 - 68)) {
            if (s21ztclKA4p[j] != s21ztclKA4p[i - (670 - 669) - j])
                return (795 - 795);
            j++;
        };
    }
    return (684 - 683);
}

int sushu (long  n) {
    long  i;
    {
        i = 593 - 591;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (i <= (long ) sqrt (n)) {
            if (n % i == (401 - 401))
                return (592 - 592);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    return 1;
}

void  main () {
    long  Onu3m4h;
    long  n;
    long  temp;
    int count;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    count = (537 - 537);
    scanf ("%ld%ld", &Onu3m4h, &n);
    if (Onu3m4h > n) {
        temp = Onu3m4h;
        Onu3m4h = n;
        n = temp;
    }
    {
        i = Onu3m4h;
        while (i <= n) {
            if (huiwen (i) && sushu (i)) {
                count++;
                printf ("%ld", i);
                break;
            }
            i++;
        };
    }
    if (count == 0)
        ;
    else {
        i++;
        while (i <= n) {
            if (huiwen (i) && sushu (i))
                printf (",%ld", i);
            i++;
        };
    };
}

