int main () {
    int BGHcXAkhSbpR;
    int BNe5bP;
    int i;
    int c;
    int T1PHqkOlhRG [500];
    int h5naQUk [500];
    c = (649 - 649);
    scanf ("%d", &BGHcXAkhSbpR);
    {
        i = 580 - 580;
        while (BGHcXAkhSbpR > i) {
            scanf ("%d", &T1PHqkOlhRG[i]);
            i = i + 1;
        };
    }
    for (i = 0; BGHcXAkhSbpR > i; i = i + 1) {
        h5naQUk[i] = 0;
    }
    for (i = 0; i < BGHcXAkhSbpR; i = i + 1) {
        if (!(0 == T1PHqkOlhRG[i] % 2)) {
            h5naQUk[c] = T1PHqkOlhRG[i];
            c = c + 1;
        };
    }
    {
        int o = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (c >= o) {
            for (i = 0; i < c - o; i++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (h5naQUk[i] < h5naQUk[i + 1]) {
                    BNe5bP = h5naQUk[i + 1];
                    h5naQUk[i + 1] = h5naQUk[i];
                    h5naQUk[i] = BNe5bP;
                };
            }
            o = o + 1;
        };
    }
    i = c - 1;
    while (i >= 0) {
        if (i > 0) {
            printf ("%d,", h5naQUk[i]);
        }
        else {
            printf ("%d", h5naQUk[i]);
        }
        i--;
    }
    return 0;
}

