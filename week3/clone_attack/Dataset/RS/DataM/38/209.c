int main () {
    double  x [100] [100], k0csJebX, ave, s;
    int qsrxRty0oA, n [100], djTQf3cGC, W2pWQAg57o3;
    getchar ();
    getchar ();
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
    scanf ("%d", &qsrxRty0oA);
    for (djTQf3cGC = 0; qsrxRty0oA > djTQf3cGC; djTQf3cGC = djTQf3cGC + 1) {
        scanf ("%d", &n[djTQf3cGC]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            W2pWQAg57o3 = 0;
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
            while (W2pWQAg57o3 < n[djTQf3cGC]) {
                scanf ("%lf", &x[djTQf3cGC][W2pWQAg57o3]);
                W2pWQAg57o3 = W2pWQAg57o3 +1;
            };
        };
    }
    for (djTQf3cGC = 0; djTQf3cGC < qsrxRty0oA; djTQf3cGC++) {
        s = 0;
        k0csJebX = 0;
        {
            W2pWQAg57o3 = 0;
            while (W2pWQAg57o3 < n[djTQf3cGC]) {
                k0csJebX = k0csJebX + x[djTQf3cGC][W2pWQAg57o3];
                W2pWQAg57o3 = W2pWQAg57o3 +1;
            };
        }
        ave = k0csJebX / n[djTQf3cGC];
        {
            W2pWQAg57o3 = 0;
            while (W2pWQAg57o3 < n[djTQf3cGC]) {
                s = s + (x[djTQf3cGC][W2pWQAg57o3] - ave) * (x[djTQf3cGC][W2pWQAg57o3] - ave);
                W2pWQAg57o3++;
            };
        }
        s = sqrt (s / n[djTQf3cGC]);
        printf ("%.5lf\n", s);
    }
    return 0;
}

