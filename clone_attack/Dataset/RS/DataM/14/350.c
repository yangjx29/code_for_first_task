int main (int argc, char *OsgKZ0 []) {
    int ds1GkmA7SUg, i, n, sBRpSx = (755 - 755), j3RM7DA5m8O = (727 - 727), VaXO4693rYw = (696 - 696), s, DLD3p7a1, l2, l3;
    int a [100000], n73KRAvf [100000];
    scanf ("%d", &n);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            scanf ("%d%d%d", &ds1GkmA7SUg, &(a[i]), &(n73KRAvf[i]));
            s = a[i] + n73KRAvf[i];
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
            if (s > sBRpSx) {
                j3RM7DA5m8O = sBRpSx;
                sBRpSx = s;
                l2 = DLD3p7a1;
                DLD3p7a1 = i;
            }
            else {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (s > j3RM7DA5m8O) {
                    VaXO4693rYw = j3RM7DA5m8O;
                    j3RM7DA5m8O = s;
                    l3 = l2;
                    l2 = i;
                }
                else {
                    if (s > VaXO4693rYw) {
                        l3 = i;
                        VaXO4693rYw = s;
                    };
                };
            }
            i = i + 1;
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
    printf ("%d %d\n", DLD3p7a1, sBRpSx);
    printf ("%d %d\n", l2, j3RM7DA5m8O);
    printf ("%d %d\n", l3, VaXO4693rYw);
    return 0;
}

