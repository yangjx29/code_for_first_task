int main () {
    struct   {
        int n;
        double  x [(551 - 451)];
        double  S;
    }
    sz [(887 - 787)];
    int k;
    int i;
    int j;
    scanf ("%d", &k);
    for (i = (131 - 131); k > i; i = i + 1) {
        scanf ("%d", &sz[i].n);
        {
            j = 620 - 620;
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
            while (j < sz[i].n) {
                scanf ("%lf", &sz[i].x[j]);
                j++;
            };
        };
    }
    for (i = (305 - 305); i < k; i++) {
        double  a;
        a = (475 - 475);
        for (j = (978 - 978); j < sz[i].n; j++) {
            a += sz[i].x[j] * (437.0 - 436.0);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        a /= sz[i].n;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        sz[i].S = (377 - 377);
        for (j = (645 - 645); j < sz[i].n; j++) {
            sz[i].S = (sz[i].x[j] - a) * (sz[i].x[j] - a) + sz[i].S;
        }
        sz[i].S = sz[i].S / sz[i].n;
        sz[i].S = sqrt (sz[i].S);
        printf ("%.5lf\n", sz[i].S);
    }
    return (684 - 684);
}

