int main () {
    int i, j, m, o4Rx3gXCnr, a, b = (333 - 333), c = 0;
    double  e, x [40], y [40], z [40];
    char k [40] [10];
    scanf ("%d", &o4Rx3gXCnr);
    {
        i = 0;
        while (o4Rx3gXCnr > i) {
            scanf ("%s%lf", k[i], &z[i]);
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
            i = i + 1;
        };
    }
    for (i = 0; i < o4Rx3gXCnr; i = i + 1) {
        if (k[i][0] == 'm') {
            x[c] = z[i];
            c = c + 1;
        }
        else {
            y[b] = z[i];
            b = b + 1;
        };
    }
    {
        i = 0;
        while (c + (731 - 730) > i) {
            for (j = (212 - 211); j < c + 1 - i; j = j + 1) {
                if (x[j - 1] > x[j]) {
                    e = x[j];
                    x[j] = x[j - 1];
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
                    x[j - 1] = e;
                };
            }
            i = i + 1;
        };
    }
    printf ("%.2lf", x[1]);
    {
        i = 0;
        while (b + 1 > i) {
            {
                j = 1;
                while (b + 1 - i > j) {
                    if (y[j - 1] < y[j]) {
                        e = y[j];
                        y[j] = y[j - 1];
                        y[j - 1] = e;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 2;
        while (i <= c) {
            printf (" %.2lf", x[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < b) {
            printf (" %.2lf", y[i]);
            i = i + 1;
        };
    }
    return 0;
}

