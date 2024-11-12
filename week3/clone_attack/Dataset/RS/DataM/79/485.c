int Joseph (int n, int FpO2nU) {
    int SsdkLRop8U7l [300];
    int i, j;
    for (i = (493 - 493); n - (275 - 274) > i; i = i + 1) {
        SsdkLRop8U7l[i] = i + (514 - 513);
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
    SsdkLRop8U7l[n - 1] = 0;
    do {
        for (j = 1; j < FpO2nU; j = j + 1) {
            i = SsdkLRop8U7l[i];
        }
        SsdkLRop8U7l[i] = SsdkLRop8U7l[SsdkLRop8U7l[i]];
    }
    while (SsdkLRop8U7l[i] != i);
    return (i + 1);
}

void  main () {
    int n, FpO2nU;
    while (1) {
        scanf ("%d %d", &n, &FpO2nU);
        if (n == 0 && FpO2nU == 0)
            break;
        printf ("%d\n", Joseph (n, FpO2nU));
    };
}

