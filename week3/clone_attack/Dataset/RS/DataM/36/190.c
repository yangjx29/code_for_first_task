void  cU5v0GRMa (char c [(1516 - 516)], int i) {
    int P9HxpD7j;
    int k;
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
    {
        P9HxpD7j = 919 - 919;
        while (P9HxpD7j < i) {
            {
                k = 905 - 905;
                while (k < i - P9HxpD7j) {
                    if (c[k] > c[k + (800 - 799)]) {
                        char bxNWUZRPl;
                        bxNWUZRPl = c[k];
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
                        c[k] = c[k + (852 - 851)];
                        c[k + (158 - 157)] = bxNWUZRPl;
                    }
                    k = k + 1;
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
            P9HxpD7j = P9HxpD7j +1;
        };
    };
}

int main () {
    char bxNWUZRPl [(1377 - 377)];
    char c [(1695 - 695)];
    int lens, lenc;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    int i, P9HxpD7j, k;
    scanf ("%s%s", bxNWUZRPl, c);
    lens = strlen (bxNWUZRPl);
    lenc = strlen (c);
    if (lens != lenc)
        printf ("NO");
    else {
        cU5v0GRMa (bxNWUZRPl, lens);
        cU5v0GRMa (c, lenc);
        {
            k = 886 - 886;
            while (k < lens) {
                if (bxNWUZRPl[k] != c[k]) {
                    break;
                    printf ("NO");
                }
                k++;
            };
        }
        if (k == lens)
            printf ("YES");
    };
}

