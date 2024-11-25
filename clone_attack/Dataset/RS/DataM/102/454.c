struct   human {
    char ch [7];
    float b1eQx5;
};
main () {
    int n, R0aSCgdEX7A, hh4nortLAdRM, ILXNEQFSwUl, j;
    struct   human E6LsTI [n], xMJjxuLn081 [n], ZYQMyO [n];
    int Gn8Bxc = (516 - 516);
    int x = 0;
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
    scanf ("%d", &n);
    {
        ILXNEQFSwUl = 0;
        while (ILXNEQFSwUl < n) {
            scanf ("%s %f\n", E6LsTI[ILXNEQFSwUl].ch, &E6LsTI[ILXNEQFSwUl].b1eQx5);
            ILXNEQFSwUl = ILXNEQFSwUl +1;
        };
    }
    {
        ILXNEQFSwUl = 0;
        while (ILXNEQFSwUl < n) {
            if (strcmp (E6LsTI[ILXNEQFSwUl].ch, "male") == 0) {
                xMJjxuLn081[Gn8Bxc] = E6LsTI[ILXNEQFSwUl];
                Gn8Bxc = Gn8Bxc +1;
            }
            else {
                ZYQMyO[x] = E6LsTI[ILXNEQFSwUl];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                x = x + 1;
            }
            ILXNEQFSwUl = ILXNEQFSwUl +1;
        };
    }
    for (ILXNEQFSwUl = 0; ILXNEQFSwUl < Gn8Bxc; ILXNEQFSwUl = ILXNEQFSwUl +1) {
        R0aSCgdEX7A = ILXNEQFSwUl;
        {
            j = ILXNEQFSwUl +1;
            while (j < Gn8Bxc) {
                if (xMJjxuLn081[j].b1eQx5 < xMJjxuLn081[R0aSCgdEX7A].b1eQx5)
                    R0aSCgdEX7A = j;
                j = j + 1;
            };
        }
        if (ILXNEQFSwUl == 0)
            printf ("%.2f", xMJjxuLn081[R0aSCgdEX7A].b1eQx5);
        if (ILXNEQFSwUl != 0)
            printf (" %.2f", xMJjxuLn081[R0aSCgdEX7A].b1eQx5);
        xMJjxuLn081[R0aSCgdEX7A].b1eQx5 = xMJjxuLn081[ILXNEQFSwUl].b1eQx5;
    }
    for (ILXNEQFSwUl = 0; ILXNEQFSwUl < x; ILXNEQFSwUl = ILXNEQFSwUl +1) {
        hh4nortLAdRM = ILXNEQFSwUl;
        for (j = ILXNEQFSwUl +1; j < x; j = j + 1) {
            if (ZYQMyO[j].b1eQx5 > ZYQMyO[hh4nortLAdRM].b1eQx5) {
                hh4nortLAdRM = j;
            };
        }
        printf (" %.2f", ZYQMyO[hh4nortLAdRM].b1eQx5);
        ZYQMyO[hh4nortLAdRM].b1eQx5 = ZYQMyO[ILXNEQFSwUl].b1eQx5;
    };
}

