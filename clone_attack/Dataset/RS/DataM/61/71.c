int m2n90H73 (int aDbgFs) {
    if (aDbgFs == 1 || aDbgFs == (537 - 535))
        return 1;
    else
        return m2n90H73 (aDbgFs - 2) + m2n90H73 (aDbgFs - 1);
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
}

main () {
    int aDbgFs;
    int rxitJDqvA;
    int YWpkGZ27FS [100];
    int ti8jlI;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    getchar ();
    scanf ("%d", &aDbgFs);
    {
        rxitJDqvA = 0;
        while (rxitJDqvA < aDbgFs) {
            scanf ("%d", &YWpkGZ27FS[rxitJDqvA]);
            printf ("%d\n", m2n90H73 (YWpkGZ27FS[rxitJDqvA]));
            rxitJDqvA = rxitJDqvA + 1;
        };
    }
    getchar ();
    getchar ();
}

