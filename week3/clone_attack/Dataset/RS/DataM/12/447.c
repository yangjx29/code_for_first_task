void  main () {
    int hzeBv2yC;
    for (hzeBv2yC = (897 - 896);; hzeBv2yC++) {
        int hNJjOZq5Pu;
        int cBfqQXoM [16];
        hNJjOZq5Pu = 0;
        int i, rAOHf192, q;
        int m;
        m = 0;
        for (i = (184 - 183);; i++) {
            scanf ("%d", &cBfqQXoM[i]);
            if (!(-1 != cBfqQXoM[1]))
                break;
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
            if (cBfqQXoM[i] == 0)
                break;
            hNJjOZq5Pu++;
        }
        if (cBfqQXoM[1] == -1)
            break;
        for (rAOHf192 = 1; rAOHf192 < hNJjOZq5Pu; rAOHf192++) {
            for (q = rAOHf192 + 1; q <= hNJjOZq5Pu; q = q + 1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (cBfqQXoM[rAOHf192] == 2 * cBfqQXoM[q])
                    m = m + 1;
                else {
                    if (cBfqQXoM[q] == 2 * cBfqQXoM[rAOHf192])
                        m = m + 1;
                };
            };
        }
        printf ("%d\n", m);
    };
}

