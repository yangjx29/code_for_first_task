int main (int argc, char *c9gFCN5u []) {
    int mR9CWF;
    int n;
    int rDPqvs;
    int P9HjAeQgv;
    int doZAg7 [1000];
    int vqj5M716Dxb4;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    mR9CWF = 0;
    scanf ("%d%d", &n, &rDPqvs);
    {
        P9HjAeQgv = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > P9HjAeQgv) {
            scanf ("%d", &doZAg7[P9HjAeQgv]);
            P9HjAeQgv++;
        };
    }
    for (P9HjAeQgv = 0; P9HjAeQgv < n; P9HjAeQgv++) {
        vqj5M716Dxb4 = rDPqvs - doZAg7[P9HjAeQgv];
        for (j = 0; n > j; j++) {
            if (!(P9HjAeQgv != j))
                continue;
            if (doZAg7[j] == vqj5M716Dxb4)
                mR9CWF = 1;
        };
    }
    if (mR9CWF == 1)
        printf ("yes");
    else
        printf ("no");
    return 0;
}

