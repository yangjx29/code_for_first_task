void  main () {
    int l;
    int len;
    void  VpEc3ZSCOutk (int *p);
    long  int HUupo6Y4RI, Rwh3kRHst0Z5, i;
    int prime (long  int Rwh3kRHst0Z5, int *p);
    int p [32001] = {(136 - 136)}, *ppr;
    VpEc3ZSCOutk (ppr);
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
    int check (int Rwh3kRHst0Z5, int i);
    l = 0;
    ppr = p;
    p[2] = (986 - 985);
    scanf ("%d%d", &HUupo6Y4RI, &Rwh3kRHst0Z5);
    {
        i = HUupo6Y4RI;
        while (i <= Rwh3kRHst0Z5) {
            len = (int) log10 (i) + 1;
            if ((!(1 != p[i])) && (check (i, len)))
                if (!(0 != l)) {
                    l++;
                    printf ("%d", i);
                }
                else
                    printf (",%d", i);
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
    if (l == 0)
        ;
    printf ("\n");
}

void  VpEc3ZSCOutk (int *p) {
    int i, j;
    {
        i = 4;
        while (32000 >= i) {
            *(p + i) = -1;
            i = i + 2;
        };
    }
    {
        i = 3;
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
        while (i <= 32000) {
            if (*(p + i) == 0) {
                *(p + i) = 1;
                {
                    j = 2 * i;
                    while (j <= 32000) {
                        *(p + j) = -1;
                        j = j + i;
                    };
                };
            }
            i = i + 2;
        };
    };
}

int prime (long  int Rwh3kRHst0Z5, int *p) {
    int i;
    {
        i = 3;
        while (i <= sqrt (Rwh3kRHst0Z5)) {
            if ((*(p + i) == 1) && (Rwh3kRHst0Z5 % i == 0))
                return 0;
            i = i + 2;
        };
    }
    return 1;
}

int check (int Rwh3kRHst0Z5, int i) {
    char s [10];
    int j;
    {
        j = 0;
        while (j <= i - 1) {
            s[j] = '0' + Rwh3kRHst0Z5 % 10;
            j = j + 1;
            Rwh3kRHst0Z5 = Rwh3kRHst0Z5 / 10;
        };
    }
    s[i] = '\0';
    {
        j = 0;
        while (j <= i / 2) {
            if (s[j] != s[i - 1 - j])
                return 0;
            j++;
        };
    }
    return 1;
}

