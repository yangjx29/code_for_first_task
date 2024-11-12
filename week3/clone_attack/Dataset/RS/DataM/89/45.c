main () {
    int *Ua8CjYRuyUv;
    int *pJ43Dw2SovjZ;
    int n, t, i, UNFOEu2qTx0, uw5ZMtu = 0;
    scanf ("%d", &n);
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
    Ua8CjYRuyUv = (int *) malloc (sizeof (int) * (n + 5));
    pJ43Dw2SovjZ = (int *) malloc (sizeof (int) * (n + 5));
    {
        t = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            scanf ("%d %d", &i, &UNFOEu2qTx0);
            if (i == 0 & UNFOEu2qTx0 == 0) {
                break;
            }
            t = t + 1;
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
            Ua8CjYRuyUv[UNFOEu2qTx0] = Ua8CjYRuyUv[UNFOEu2qTx0] + 1;
            pJ43Dw2SovjZ[i] += 1;
        };
    }
    {
        t = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (t <= n - 1) {
            if (Ua8CjYRuyUv[t] == n - 1 && pJ43Dw2SovjZ[t] == 0) {
                uw5ZMtu = uw5ZMtu + 1;
                printf ("%d\n", t);
            }
            t = t + 1;
        };
    }
    if (uw5ZMtu == 0)
        printf ("NOT FOUND");
}

