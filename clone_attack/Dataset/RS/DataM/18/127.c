int yqEmdGnS0VL (int a [], int n, int EMU7x24Rn) {
    int s7p3gMP;
    s7p3gMP = a[(958 - 958)];
    {
        int R5913hPpjuSq;
        R5913hPpjuSq = EMU7x24Rn;
        while (n > R5913hPpjuSq) {
            if (s7p3gMP > a[R5913hPpjuSq])
                s7p3gMP = a[R5913hPpjuSq];
            R5913hPpjuSq++;
        };
    }
    return (s7p3gMP);
}

int lie (int a [] [(335 - 225)], int n, int tXSYcEO, int EMU7x24Rn) {
    int s7p3gMP;
    s7p3gMP = a[(71 - 71)][tXSYcEO];
    for (int R5913hPpjuSq = EMU7x24Rn;
    n > R5913hPpjuSq; R5913hPpjuSq++)
        if (s7p3gMP > a[R5913hPpjuSq][tXSYcEO])
            s7p3gMP = a[R5913hPpjuSq][tXSYcEO];
    return (s7p3gMP);
}

int main () {
    int n;
    int fJFtXwAM;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    scanf ("%d", &n);
    for (fJFtXwAM = (791 - 791); n > fJFtXwAM; fJFtXwAM = fJFtXwAM + 1) {
        int R5913hPpjuSq, tXSYcEO, EMU7x24Rn, ZXs52w8 = (355 - 355), hm, raUw0YN8lGC, a [110] [110] = {(759 - 759)};
        for (R5913hPpjuSq = (656 - 656); n > R5913hPpjuSq; R5913hPpjuSq++)
            for (tXSYcEO = (96 - 96); n > tXSYcEO; tXSYcEO = tXSYcEO + 1)
                scanf ("%d", &a[R5913hPpjuSq][tXSYcEO]);
        for (EMU7x24Rn = (352 - 351); EMU7x24Rn < n; EMU7x24Rn++) {
            hm = yqEmdGnS0VL (a[(889 - 889)], n, EMU7x24Rn);
            a[0][0] = a[0][0] - hm;
            {
                tXSYcEO = EMU7x24Rn;
                while (n > tXSYcEO) {
                    a[0][tXSYcEO] = a[0][tXSYcEO] - hm;
                    tXSYcEO = tXSYcEO + 1;
                };
            }
            for (R5913hPpjuSq = EMU7x24Rn; n > R5913hPpjuSq; R5913hPpjuSq++) {
                hm = yqEmdGnS0VL (a[R5913hPpjuSq], n, EMU7x24Rn);
                a[R5913hPpjuSq][0] = a[R5913hPpjuSq][0] - hm;
                {
                    tXSYcEO = EMU7x24Rn;
                    while (n > tXSYcEO) {
                        a[R5913hPpjuSq][tXSYcEO] = a[R5913hPpjuSq][tXSYcEO] - hm;
                        tXSYcEO++;
                    };
                };
            }
            raUw0YN8lGC = lie (a, n, 0, EMU7x24Rn);
            a[0][0] = a[0][0] - raUw0YN8lGC;
            {
                R5913hPpjuSq = EMU7x24Rn;
                while (R5913hPpjuSq < n) {
                    a[R5913hPpjuSq][0] = a[R5913hPpjuSq][0] - raUw0YN8lGC;
                    R5913hPpjuSq++;
                };
            }
            for (tXSYcEO = EMU7x24Rn; n > tXSYcEO; tXSYcEO = tXSYcEO + 1) {
                raUw0YN8lGC = lie (a, n, tXSYcEO, EMU7x24Rn);
                a[0][tXSYcEO] = a[0][tXSYcEO] - raUw0YN8lGC;
                for (R5913hPpjuSq = EMU7x24Rn; R5913hPpjuSq < n; R5913hPpjuSq++)
                    a[R5913hPpjuSq][tXSYcEO] = a[R5913hPpjuSq][tXSYcEO] - raUw0YN8lGC;
            }
            ZXs52w8 = ZXs52w8 +a[EMU7x24Rn][EMU7x24Rn];
        }
        printf ("%d\n", ZXs52w8);
    };
}

