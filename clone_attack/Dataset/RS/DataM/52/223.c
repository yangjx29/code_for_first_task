void  main () {
    int i, m, ibhRiCZkfeds, BGCv8bF [100], *h5fswSW;
    scanf ("%d %d", &m, &ibhRiCZkfeds);
    for (i = 0; m > i; i++) {
        scanf ("%d", &BGCv8bF[i]);
    }
    h5fswSW = BGCv8bF;
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
    for (i = 0; m - ibhRiCZkfeds > i; i++) {
        *(h5fswSW + m) = *h5fswSW++;
    }
    h5fswSW = BGCv8bF +m - ibhRiCZkfeds;
    printf ("%d", *h5fswSW);
    {
        i = 1;
        while (i < m) {
            i = i + 1;
            printf (" %d", *++h5fswSW);
        };
    };
}

