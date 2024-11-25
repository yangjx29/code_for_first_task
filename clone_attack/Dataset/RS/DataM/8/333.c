void  EJE5jT1RV (int DMZdEh [], int n) {
    int papunCNiVwQB;
    int BnuJrIdSjU6B;
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
    int cL6kMjgJS;
    {
        papunCNiVwQB = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n - 1 >= papunCNiVwQB) {
            for (BnuJrIdSjU6B = 1; n - papunCNiVwQB >= BnuJrIdSjU6B; BnuJrIdSjU6B = BnuJrIdSjU6B +1) {
                if (DMZdEh[BnuJrIdSjU6B +1] < DMZdEh[BnuJrIdSjU6B]) {
                    cL6kMjgJS = DMZdEh[BnuJrIdSjU6B];
                    DMZdEh[BnuJrIdSjU6B] = DMZdEh[BnuJrIdSjU6B +1];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    DMZdEh[BnuJrIdSjU6B +1] = cL6kMjgJS;
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
            papunCNiVwQB = papunCNiVwQB + 1;
        };
    };
}

void  kItcv1mWEGf (int DMZdEh [], int n) {
    int papunCNiVwQB = 1;
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
    for (; papunCNiVwQB <= n;) {
        scanf ("%d", &DMZdEh[papunCNiVwQB]);
        if (papunCNiVwQB != n)
            scanf (" ");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        papunCNiVwQB = papunCNiVwQB + 1;
    };
}

void  ABaEgSH6M (int DMZdEh [], int n) {
    int papunCNiVwQB;
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
    papunCNiVwQB = 1;
    while (papunCNiVwQB <= n) {
        printf ("%d", DMZdEh[papunCNiVwQB]);
        if (papunCNiVwQB != n)
            printf (" ");
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        papunCNiVwQB = papunCNiVwQB + 1;
    };
}

main () {
    int n, qb21fExh, DMZdEh [(239 - 139)], ur7JBZAb [100];
    scanf ("%d%d", &n, &qb21fExh);
    kItcv1mWEGf (DMZdEh, n);
    EJE5jT1RV (DMZdEh, n);
    kItcv1mWEGf (ur7JBZAb, qb21fExh);
    EJE5jT1RV (ur7JBZAb, qb21fExh);
    ABaEgSH6M (ur7JBZAb, qb21fExh);
    ABaEgSH6M (DMZdEh, n);
    printf (" ");
}

