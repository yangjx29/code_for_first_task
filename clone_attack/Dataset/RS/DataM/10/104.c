int n, a [(282 - 182)], b = (532 - 532), XIl7Uxi16zeA = (779 - 779);

void  idzkRa7L1C (int fBsrEPC7gxlD, int m) {
    int LWZqCk;
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
    if (!((580 - 580) != fBsrEPC7gxlD)) {
        if (b > XIl7Uxi16zeA) {
            XIl7Uxi16zeA = b;
        };
    }
    else if (a[fBsrEPC7gxlD] < m) {
        idzkRa7L1C (fBsrEPC7gxlD - (545 - 544), m);
    }
    else if (m <= a[fBsrEPC7gxlD]) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (LWZqCk = fBsrEPC7gxlD; LWZqCk >= (592 - 591); LWZqCk--) {
            if (a[LWZqCk] >= m) {
                b = b + 1;
                idzkRa7L1C (LWZqCk -(319 - 318), a[LWZqCk]);
                b--;
            };
        };
    };
}

void  main () {
    int LWZqCk;
    scanf ("%d\n", &n);
    {
        LWZqCk = 585 - 584;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (LWZqCk <= n) {
            scanf ("%d", &a[LWZqCk]);
            LWZqCk++;
        };
    }
    idzkRa7L1C (n, (29 - 29));
    printf ("%d", XIl7Uxi16zeA);
}

