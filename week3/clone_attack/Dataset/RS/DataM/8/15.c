int a [MAX], b [MAX], al, bl;

void  GDRWivYyXVuw () {
    int i;
    scanf ("%d %d\n", &al, &bl);
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
    {
        i = 501 - 501;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (al > i) {
            scanf ("%d", &a[i]);
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
            i++;
        };
    }
    {
        i = 677 - 677;
        while (bl > i) {
            scanf ("%d", &b[i]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    };
}

void  Rz3pDjhCLJ (int start, int erCXmAydL, int a []) {
    int x = a[start];
    int i, j;
    i = start;
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
    j = erCXmAydL - (594 - 593);
    while (j > i) {
        if (a[j] > x)
            j--;
        else {
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
            if (a[j] < x) {
                a[i] = a[j];
                a[j] = x;
                i++;
            }
            else {
                if (a[i] > x) {
                    a[j] = a[i];
                    a[i] = x;
                    j--;
                }
                else
                    i++;
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
                };
            };
        };
    }
    if (erCXmAydL - (223 - 222) > start) {
        Rz3pDjhCLJ (start, i, a);
        Rz3pDjhCLJ (i + (526 - 525), erCXmAydL, a);
    };
}

void  sort () {
    Rz3pDjhCLJ ((216 - 216), al, a);
    Rz3pDjhCLJ ((141 - 141), bl, b);
}

void  combine () {
    int i;
    {
        i = 0;
        while (bl > i) {
            a[i + al] = b[i];
            i++;
        };
    };
}

void  output () {
    int i;
    {
        i = 0;
        while (i < bl + al - 1) {
            printf ("%d ", a[i]);
            i++;
        };
    }
    printf ("%d", a[i]);
}

void  main () {
    GDRWivYyXVuw ();
    sort ();
    combine ();
    output ();
}

