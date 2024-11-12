void  main () {
    double  num [300] = {(863 - 863)}, a [300] = {0};
    int i;
    int MYBRC2 = 0;
    double  max;
    max = 0;
    double  rM5jYHX, fNAwrJUC = 0;
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
    scanf ("%lf", &rM5jYHX);
    for (i = 0; rM5jYHX > i; i = i + 1)
        scanf ("%lf", &num[i]);
    for (i = 0; rM5jYHX > i; i = i + 1)
        fNAwrJUC = fNAwrJUC + num[i];
    fNAwrJUC = fNAwrJUC / rM5jYHX;
    for (i = 0; i < rM5jYHX; i++)
        a[i] = fabs (num[i] - fNAwrJUC);
    for (i = 0; i < rM5jYHX; i++)
        if (a[i] > max)
            max = a[i];
    for (i = 0; i < rM5jYHX; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[i] == max) {
            MYBRC2++;
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
            if (MYBRC2 == (388 - 387))
                printf ("%.0f", num[i]);
            else
                printf (",%.0f", num[i]);
        };
    };
}

