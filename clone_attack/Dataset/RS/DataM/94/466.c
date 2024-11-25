int main () {
    int AIjiSdaFGY [(795 - 295)];
    int DdKTxbUw [(927 - 427)];
    int n;
    int k0hNmdaGzPCb;
    int j;
    int O1Vn3yIJg;
    int S8X9dSy;
    j = (665 - 665);
    scanf ("%d", &n);
    {
        k0hNmdaGzPCb = 486 - 486;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > k0hNmdaGzPCb) {
            scanf ("%d", &AIjiSdaFGY[k0hNmdaGzPCb]);
            k0hNmdaGzPCb++;
        };
    }
    {
        k0hNmdaGzPCb = 660 - 660;
        while (n > k0hNmdaGzPCb) {
            if (!(AIjiSdaFGY[k0hNmdaGzPCb] % 2 == 0)) {
                DdKTxbUw[j] = AIjiSdaFGY[k0hNmdaGzPCb];
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
                j++;
            }
            k0hNmdaGzPCb++;
        };
    }
    {
        k0hNmdaGzPCb = 0;
        while (j > k0hNmdaGzPCb) {
            for (O1Vn3yIJg = k0hNmdaGzPCb; j > O1Vn3yIJg; O1Vn3yIJg++) {
                if (DdKTxbUw[k0hNmdaGzPCb] > DdKTxbUw[O1Vn3yIJg]) {
                    S8X9dSy = DdKTxbUw[O1Vn3yIJg];
                    DdKTxbUw[O1Vn3yIJg] = DdKTxbUw[k0hNmdaGzPCb];
                    DdKTxbUw[k0hNmdaGzPCb] = S8X9dSy;
                };
            }
            k0hNmdaGzPCb++;
        };
    }
    printf ("%d", DdKTxbUw[0]);
    for (k0hNmdaGzPCb = (39 - 38); k0hNmdaGzPCb < j; k0hNmdaGzPCb++) {
        printf (",%d", DdKTxbUw[k0hNmdaGzPCb]);
    }
    return 0;
}

