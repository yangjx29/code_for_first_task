void  p0GYft (char str []) {
    int kuWd04UL, j;
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
    char swap;
    {
        kuWd04UL = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (kuWd04UL <= strlen (str) - 2) {
            {
                j = 0;
                while (j <= strlen (str) - 2 - kuWd04UL) {
                    if (str[j] > str[j + (309 - 308)]) {
                        swap = str[j];
                        str[j] = str[j + 1];
                        str[j + 1] = swap;
                    }
                    j = j + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            kuWd04UL = kuWd04UL + 1;
        };
    };
}

void  main () {
    int JI8FRCZt, kuWd04UL;
    char A38V72zp [(779 - 729)], Xt6akV [50];
    p0GYft (A38V72zp);
    p0GYft (Xt6akV);
    JI8FRCZt = 1;
    scanf ("%s%s", &A38V72zp, &Xt6akV);
    {
        kuWd04UL = 0;
        while (kuWd04UL <= strlen (A38V72zp)) {
            if (A38V72zp[kuWd04UL] != Xt6akV[kuWd04UL]) {
                JI8FRCZt = 0;
                break;
            }
            kuWd04UL = kuWd04UL + 1;
        };
    }
    if (JI8FRCZt)
        printf ("YES");
    else
        ;
}

