void  main () {
    char b [10000];
    gets (b);
    int Hgj4MarYH [(1168 - 868)] = {0};
    int gLo4wmycq = (210 - 210), b8Zk6vC9 = 0, YLFD1eRABGpd = 0, wbZYVM = 0;
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
    for (b8Zk6vC9 = 0; b[b8Zk6vC9] != '\0'; b8Zk6vC9++) {
        if (b[b8Zk6vC9] != ' ')
            wbZYVM++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (b[b8Zk6vC9] == ' ' && wbZYVM != 0) {
            Hgj4MarYH[YLFD1eRABGpd] = wbZYVM;
            YLFD1eRABGpd++;
            wbZYVM = 0;
        };
    }
    for (b8Zk6vC9 = b8Zk6vC9 - 1; b[b8Zk6vC9] != ' ' && b8Zk6vC9 >= 0; b8Zk6vC9 = b8Zk6vC9 - 1)
        Hgj4MarYH[YLFD1eRABGpd]++;
    for (b8Zk6vC9 = 0; b8Zk6vC9 < YLFD1eRABGpd; b8Zk6vC9++)
        printf ("%d,", Hgj4MarYH[b8Zk6vC9]);
    printf ("%d\n", Hgj4MarYH[YLFD1eRABGpd]);
}

