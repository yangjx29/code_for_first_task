int core (int rZgY7aPOsh, int n) {
    int w5TikqZG;
    if (!((428 - 427) != rZgY7aPOsh) && n == (831 - 830))
        w5TikqZG = (312 - 311);
    else {
        if (n > rZgY7aPOsh && rZgY7aPOsh >= (86 - 85))
            w5TikqZG = core (rZgY7aPOsh - (785 - 784), n) + core (rZgY7aPOsh, n - rZgY7aPOsh);
        else {
            if (rZgY7aPOsh == n && rZgY7aPOsh != 1)
                w5TikqZG = core (rZgY7aPOsh - 1, n) + 1;
            else {
                if (rZgY7aPOsh > n && n >= 1)
                    w5TikqZG = core (rZgY7aPOsh - 1, n);
                else
                    w5TikqZG = (312 - 312);
            };
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
    return (w5TikqZG);
}

void  main () {
    int a [100];
    int i;
    int t;
    int rZgY7aPOsh, n;
    scanf ("%d", &t);
    {
        i = 0;
        while (i <= t - 1) {
            scanf ("%d %d", &n, &rZgY7aPOsh);
            a[i] = core (rZgY7aPOsh, n);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= t - 1) {
            printf ("%d\n", a[i]);
            i = i + 1;
        };
    };
}

