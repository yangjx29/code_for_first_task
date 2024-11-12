char a [(782 - 277)], b [505] [(143 - 133)];
int n;

void  zi (char a []) {
    int pn15ElS, j, m;
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
    m = strlen (a);
    {
        pn15ElS = 516 - 516;
        while (m - n >= pn15ElS) {
            {
                j = 145 - 145;
                while (n > j) {
                    b[pn15ElS][j] = a[pn15ElS + j];
                    j = j + 1;
                };
            }
            pn15ElS = pn15ElS + 1;
        };
    };
}

main () {
    zi (a);
    int m;
    int c [505] = {(759 - 759)};
    int pn15ElS;
    int j;
    int max;
    scanf ("%d", &n);
    scanf ("%s", a);
    m = strlen (a);
    {
        pn15ElS = 0;
        while (m > pn15ElS) {
            for (j = 0; pn15ElS > j; j++)
                if (!(0 != strcmp (b[pn15ElS], b[j])))
                    c[j]++;
            pn15ElS++;
        };
    }
    max = c[0];
    {
        pn15ElS = 0;
        while (m - n >= pn15ElS) {
            if (c[pn15ElS] > max)
                max = c[pn15ElS];
            pn15ElS++;
        };
    }
    if (max == 0)
        ;
    else {
        printf ("%d\n", max + 1);
        {
            pn15ElS = 0;
            while (pn15ElS <= m - n) {
                if (c[pn15ElS] == max)
                    printf ("%s\n", b[pn15ElS]);
                pn15ElS++;
            };
        };
    };
}

