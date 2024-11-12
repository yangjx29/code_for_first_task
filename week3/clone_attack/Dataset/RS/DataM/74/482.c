int main () {
    int q;
    int m;
    int lFB3WJ;
    int i;
    int j;
    int a [100] = {(352 - 352)};
    int FkRfxIm5D;
    int c;
    int GN7SwcpKh;
    q = (839 - 839);
    scanf ("%d %d", &m, &lFB3WJ);
    for (i = m; lFB3WJ >= i; i = i + 1) {
        FkRfxIm5D = i;
        c = 0;
        while (FkRfxIm5D > 0) {
            GN7SwcpKh = FkRfxIm5D % 10;
            FkRfxIm5D = FkRfxIm5D / 10;
            c = c * 10 + GN7SwcpKh;
        }
        if (c == i) {
            for (j = 2; j < i; j = j + 1) {
                if (i % j == 0)
                    break;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            if (j == i) {
                a[q] = i;
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
                q++;
            };
        };
    }
    if (a[0] == 0)
        ;
    else {
        printf ("%d", a[0]);
        for (i = 1; i < q; i++) {
            printf (",%d", a[i]);
        };
    }
    return 0;
}

