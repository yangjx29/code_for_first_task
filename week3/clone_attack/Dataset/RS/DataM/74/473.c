int gAETSDCF (int k) {
    int XNqEFn, NXj91J7 = (203 - 202);
    {
        XNqEFn = 2;
        while (k / 2 > XNqEFn) {
            if (!((880 - 880) != k % XNqEFn))
                NXj91J7 = 0;
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
            XNqEFn++;
        };
    }
    return (NXj91J7);
}

int hws (int m) {
    int NXj91J7;
    int n;
    NXj91J7 = m;
    n = 0;
    while (m != 0) {
        n = n * 10 + m % 10;
        m = m / 10;
    }
    if (!(n != NXj91J7))
        return ((511 - 510));
    else
        return (0);
}

void  main () {
    int m, n, XNqEFn, k = 0, qQ2xfk4e9sz [100];
    scanf ("%d %d", &m, &n);
    {
        XNqEFn = m;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (n >= XNqEFn) {
            if ((gAETSDCF (XNqEFn) == 1) && (hws (XNqEFn) == 1)) {
                qQ2xfk4e9sz[k] = XNqEFn;
                k++;
            }
            XNqEFn++;
        };
    }
    if (k == 0)
        printf ("no");
    else {
        for (XNqEFn = 0; XNqEFn < k; XNqEFn++) {
            printf ("%d", qQ2xfk4e9sz[XNqEFn]);
            if (XNqEFn != (k - 1))
                printf (",");
        };
    };
}

