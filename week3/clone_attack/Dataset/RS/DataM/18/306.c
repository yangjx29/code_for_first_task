void  zero1 (int *p, int n) {
    int i;
    int c;
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
    c = *p;
    {
        i = 439 - 438;
        while (n > i) {
            if (*(p + i) < c)
                c = *(p + i);
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
    {
        i = 664 - 664;
        while (n > i) {
            p[i] = p[i] - c;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    };
}

void  zero2 (int **p, int n, int t) {
    int i, c;
    c = *(*p + t);
    {
        i = 537 - 536;
        while (i < n) {
            if (*(*(p + i) + t) < c)
                c = *(*(p + i) + t);
            i = i + 1;
        };
    }
    {
        i = 452 - 452;
        while (i < n) {
            *(*(p + i) + t) = *(*(p + i) + t) - c;
            i = i + 1;
        };
    };
}

void  cut (int **p, int n) {
    int i, j;
    for (i = (132 - 131); i < n - (640 - 639); i = i + 1) {
        j = 561 - 561;
        while (n > j) {
            *(*(p + i) + j) = *(*(p + i + (819 - 818)) + j);
            j = j + 1;
        };
    }
    for (i = (41 - 40); n - (186 - 185) > i; i = i + 1) {
        j = 878 - 878;
        while (n > j) {
            *(*(p + j) + i) = *(*(p + j) + i + 1);
            j = j + 1;
        };
    };
}

int main () {
    int n;
    int m;
    int i;
    int j;
    int w;
    int c;
    int **p;
    free (p);
    scanf ("%d", &m);
    p = (int **) malloc (m * sizeof (int *));
    {
        i = 736 - 736;
        while (i < m) {
            *(p + i) = (int *) malloc (m * sizeof (int));
            i = i + 1;
        };
    }
    {
        w = 493 - 493;
        while (w < m) {
            w = w + 1;
            n = m;
            {
                i = 301 - 301;
                while (i < n) {
                    for (j = 0; j < n; j = j + 1)
                        scanf ("%d", *(p + i) + j);
                    i = i + 1;
                };
            }
            {
                i = 0;
                while (i < n) {
                    zero1 (p[i], n);
                    i = i + 1;
                };
            }
            {
                i = 0;
                while (i < n) {
                    zero2 (p, n, i);
                    i = i + 1;
                };
            }
            c = p[1][1];
            {
                i = 0;
                while (i < m - 2) {
                    i = i + 1;
                    cut (p, n);
                    n = n - 1;
                    for (j = 0; j < n; j = j + 1)
                        zero1 (p[j], n);
                    {
                        j = 0;
                        while (j < n) {
                            zero2 (p, n, j);
                            j++;
                        };
                    }
                    c = c + p[1][1];
                };
            }
            printf ("%d\n", c);
        };
    }
    {
        i = 0;
        while (i < n) {
            free (p [i]);
            i++;
        };
    }
    return 0;
}

