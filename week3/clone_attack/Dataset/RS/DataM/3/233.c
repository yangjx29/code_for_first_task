int main () {
    int n, yLiAFxT, sz [1000], i, m, ukVARchjEPO [500500], l;
    l = 0;
    scanf ("%d %d", &n, &yLiAFxT);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &sz[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            {
                m = 1;
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
                while (n - i > m) {
                    ukVARchjEPO[l] = sz[i] + sz[m];
                    m = m + 1;
                    l = l + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (l > i) {
            if (yLiAFxT == ukVARchjEPO[i]) {
                printf ("yes");
                return 0;
            }
            i = i + 1;
        };
    }
    return 0;
}

