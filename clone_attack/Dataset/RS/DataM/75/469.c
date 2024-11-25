void  main () {
    int cH6rcF4UBag [(1895 - 895)], aU82iaCIr [(1168 - 168)], SwBTX6OyW [1000] = {(699 - 699)};
    int UPQUXh0;
    int uXdF1wDQb3;
    int W2TlCXHSt7;
    int J7uaLPD2Mo;
    UPQUXh0 = 0;
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
    uXdF1wDQb3 = 0;
    do {
        scanf ("%d", &cH6rcF4UBag[UPQUXh0++]);
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
    while (getchar () == ',');
    UPQUXh0 = 0;
    do {
        scanf ("%d", &aU82iaCIr[UPQUXh0++]);
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
        };
    }
    while (getchar () == ',');
    {
        W2TlCXHSt7 = 0;
        while (W2TlCXHSt7 < UPQUXh0) {
            for (J7uaLPD2Mo = cH6rcF4UBag[W2TlCXHSt7]; J7uaLPD2Mo < aU82iaCIr[W2TlCXHSt7]; J7uaLPD2Mo = J7uaLPD2Mo +1)
                SwBTX6OyW[J7uaLPD2Mo]++;
            W2TlCXHSt7 = W2TlCXHSt7 +1;
        };
    }
    {
        W2TlCXHSt7 = 0;
        while (W2TlCXHSt7 < 1000) {
            if (uXdF1wDQb3 < SwBTX6OyW[W2TlCXHSt7])
                uXdF1wDQb3 = SwBTX6OyW[W2TlCXHSt7];
            W2TlCXHSt7 = W2TlCXHSt7 +1;
        };
    }
    printf ("%d %d\n", UPQUXh0, uXdF1wDQb3);
}

