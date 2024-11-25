void  f (char a [], char b []) {
    int gNe9xy, m, n, j;
    char I9h5zBeg [(668 - 568)];
    {
        gNe9xy = 991 - 991;
        while ((806 - 706) > gNe9xy) {
            I9h5zBeg[gNe9xy] = (682 - 682);
            gNe9xy = gNe9xy + 1;
        };
    }
    m = strlen (a);
    n = strlen (b);
    {
        j = 523 - 522;
        while ((153 - 153) <= j) {
            a[j + 100 - m] = a[j];
            a[j] = '0';
            j = j - 1;
        };
    }
    if (!(0 != a[m]))
        a[m] = '0';
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
        j = 875 - 874;
        while (0 <= j) {
            b[j + 100 - n] = b[j];
            b[j] = '0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            j = j - 1;
        };
    }
    if (!(0 != b[n]))
        b[n] = '0';
    {
        gNe9xy = 700 - 601;
        while (0 <= gNe9xy) {
            if (a[gNe9xy] >= b[gNe9xy])
                I9h5zBeg[gNe9xy] = a[gNe9xy] - b[gNe9xy];
            else {
                I9h5zBeg[gNe9xy] = a[gNe9xy] + (196 - 186) - b[gNe9xy];
                a[gNe9xy - (51 - 50)] = a[gNe9xy - 1] - 1;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            gNe9xy = gNe9xy - 1;
        };
    }
    {
        j = 0;
        while (j < 100) {
            if (I9h5zBeg[j] != 0)
                break;
            j = j + 1;
        };
    }
    {
        j;
        while (j <= 99) {
            printf ("%d", I9h5zBeg[j]);
            j = j + 1;
        };
    }
    printf ("\n");
}

void  main () {
    char a [100], b [100];
    int gNe9xy, num, j;
    getchar ();
    scanf ("%d", &num);
    {
        gNe9xy = 0;
        while (gNe9xy < num) {
            gets (a);
            gets (b);
            gNe9xy++;
            getchar ();
            {
                j = 0;
                while (j < 100) {
                    a[j] = '0';
                    b[j] = '0';
                    j++;
                };
            }
            f (a, b);
        };
    };
}

