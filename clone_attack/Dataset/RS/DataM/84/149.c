void  main () {
    int Yw06oGLl;
    int a [100] = {0};
    int ZbK1r9JUC;
    int d3Ogxw1;
    int RNuE6G;
    int j;
    Yw06oGLl = 0;
    scanf ("%d", &ZbK1r9JUC);
    {
        RNuE6G = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (RNuE6G < ZbK1r9JUC) {
            scanf ("%d", &a[RNuE6G]);
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
            RNuE6G++;
        };
    }
    j = d3Ogxw1 = a[0];
    for (RNuE6G = 0; 100 > RNuE6G; RNuE6G = RNuE6G +1) {
        if (d3Ogxw1 < a[RNuE6G])
            d3Ogxw1 = a[RNuE6G];
    }
    {
        RNuE6G = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (100 > RNuE6G) {
            if (a[RNuE6G] == d3Ogxw1)
                Yw06oGLl = RNuE6G;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            RNuE6G++;
        };
    }
    for (RNuE6G = 0; Yw06oGLl > RNuE6G; RNuE6G++) {
        if (a[RNuE6G] > j)
            j = a[RNuE6G];
    }
    for (RNuE6G = Yw06oGLl +1; RNuE6G < ZbK1r9JUC; RNuE6G++) {
        if (a[RNuE6G] > j)
            j = a[RNuE6G];
    }
    printf ("%d\n%d\n", d3Ogxw1, j);
}

