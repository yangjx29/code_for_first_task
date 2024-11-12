int main () {
    int x1;
    int G0gKH96nZQ8M;
    int ereimX;
    int P7pNkwzR5D;
    int WyI8PsxjJ53d;
    int qJCoNU;
    int k;
    int dzXhFRxdpN;
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
    int dzZhpiMtxqW [100] [100], Po0qDNlz [100] [100], bX4lxYwZ [100] [100];
    scanf ("%d %d", &x1, &ereimX);
    {
        WyI8PsxjJ53d = 343 - 343;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x1 > WyI8PsxjJ53d) {
            {
                qJCoNU = 0;
                while (ereimX > qJCoNU) {
                    scanf ("%d", &dzZhpiMtxqW[WyI8PsxjJ53d][qJCoNU]);
                    qJCoNU = qJCoNU + 1;
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
            WyI8PsxjJ53d = WyI8PsxjJ53d +1;
        };
    }
    scanf ("%d %d", &G0gKH96nZQ8M, &P7pNkwzR5D);
    {
        WyI8PsxjJ53d = 0;
        while (G0gKH96nZQ8M > WyI8PsxjJ53d) {
            {
                qJCoNU = 0;
                while (P7pNkwzR5D > qJCoNU) {
                    scanf ("%d", &Po0qDNlz[WyI8PsxjJ53d][qJCoNU]);
                    qJCoNU = qJCoNU + 1;
                };
            }
            WyI8PsxjJ53d = WyI8PsxjJ53d +1;
        };
    }
    {
        WyI8PsxjJ53d = 0;
        while (x1 > WyI8PsxjJ53d) {
            {
                qJCoNU = 0;
                while (P7pNkwzR5D > qJCoNU) {
                    {
                        dzXhFRxdpN = 0;
                        k = 0;
                        while (G0gKH96nZQ8M > k) {
                            dzXhFRxdpN = dzXhFRxdpN + dzZhpiMtxqW[WyI8PsxjJ53d][k] * Po0qDNlz[k][qJCoNU];
                            k = k + 1;
                        };
                    }
                    bX4lxYwZ[WyI8PsxjJ53d][qJCoNU] = dzXhFRxdpN;
                    qJCoNU = qJCoNU + 1;
                };
            }
            WyI8PsxjJ53d = WyI8PsxjJ53d +1;
        };
    }
    {
        WyI8PsxjJ53d = 0;
        while (WyI8PsxjJ53d < x1) {
            {
                qJCoNU = 0;
                while ((P7pNkwzR5D -1) > qJCoNU) {
                    printf ("%d ", bX4lxYwZ[WyI8PsxjJ53d][qJCoNU]);
                    qJCoNU = qJCoNU + 1;
                };
            }
            printf ("%d", bX4lxYwZ[WyI8PsxjJ53d][qJCoNU]);
            WyI8PsxjJ53d++;
            printf ("\n");
        };
    };
}

