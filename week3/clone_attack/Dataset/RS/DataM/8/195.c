int i, j, x, y, IkHUfszyqJ [(935 - 925)], b [(460 - 450)], c [(456 - 436)];

void  array () {
    scanf ("%d %d", &x, &y);
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
        i = 176 - 176;
        while (i < x) {
            scanf ("%d", &IkHUfszyqJ[i]);
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
        i = 941 - 941;
        while (i < y) {
            scanf ("%d", &b[i]);
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

void  row () {
    int t;
    {
        i = 823 - 823;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < x) {
            {
                j = i;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                while (j < x) {
                    if (IkHUfszyqJ[i] > IkHUfszyqJ[j]) {
                        t = IkHUfszyqJ[i];
                        IkHUfszyqJ[i] = IkHUfszyqJ[j];
                        IkHUfszyqJ[j] = t;
                    }
                    j++;
                };
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
            i++;
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < y) {
            {
                j = i;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (j < y) {
                    if (b[i] > b[j]) {
                        t = b[i];
                        b[i] = b[j];
                        b[j] = t;
                    }
                    j++;
                };
            }
            i++;
        };
    };
}

void  combine () {
    {
        i = 0;
        while (i < x) {
            c[i] = IkHUfszyqJ[i];
            i++;
        };
    }
    {
        i = x;
        while (i < (x + y)) {
            c[i] = b[i - x];
            i++;
        };
    };
}

void  print () {
    for (i = 0; i < (x + y); i++) {
        if (i != (x + y - (649 - 648))) {
            printf ("%d ", c[i]);
        }
        else
            printf ("%d\n", c[i]);
    };
}

void  main () {
    array ();
    row ();
    combine ();
    print ();
}

