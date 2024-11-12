void  main () {
    int GvTLlSk0db2;
    int JRzGi16;
    int chang (int IWq5RXdO09 [100]);
    int a [100] = {0};
    int b [100] = {0};
    int x;
    int y;
    int Blb5Mxj0K;
    int aPotKDwn;
    int W5FVbgqck;
    W5FVbgqck = 0;
    scanf ("%d%d", &x, &y);
    a[0] = x;
    for (Blb5Mxj0K = 1;; Blb5Mxj0K = Blb5Mxj0K +1) {
        if (1 < x) {
            a[Blb5Mxj0K] = x / 2;
            x = x / 2;
        }
        else
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    b[0] = y;
    {
        aPotKDwn = 1;
        while (1) {
            if (1 < y) {
                b[aPotKDwn] = y / 2;
                y = y / 2;
            }
            else
                break;
            aPotKDwn = aPotKDwn + 1;
        };
    }
    GvTLlSk0db2 = chang (a);
    JRzGi16 = chang (b);
    {
        Blb5Mxj0K = 0;
        while (GvTLlSk0db2 > Blb5Mxj0K) {
            {
                aPotKDwn = 0;
                while (JRzGi16 > aPotKDwn) {
                    if (!(0 == W5FVbgqck))
                        break;
                    if (a[Blb5Mxj0K] == b[aPotKDwn]) {
                        W5FVbgqck = b[aPotKDwn];
                        break;
                    }
                    aPotKDwn++;
                };
            }
            Blb5Mxj0K = Blb5Mxj0K +1;
        };
    }
    printf ("%d", W5FVbgqck);
}

int chang (int IWq5RXdO09 [100]) {
    int W5FVbgqck;
    int Blb5Mxj0K;
    W5FVbgqck = 0;
    {
        Blb5Mxj0K = 0;
        while (1) {
            if ((IWq5RXdO09[Blb5Mxj0K] != 0) && (IWq5RXdO09[Blb5Mxj0K +1] == 0)) {
                W5FVbgqck = Blb5Mxj0K +1;
                break;
            }
            Blb5Mxj0K = Blb5Mxj0K +1;
        };
    }
    return (W5FVbgqck);
}

