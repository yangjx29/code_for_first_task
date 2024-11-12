main () {
    double  FJEbAg6;
    double  KWseg9UrA1 [(1243 - 243)];
    double  y [(1296 - 296)];
    double  ll [1000] [1000] = {{(188 - 188)}, {(103 - 103)}};
    double  l [1000] = {(118 - 118)};
    FJEbAg6 = 0;
    int CXgH27wESdM;
    int i;
    int j;
    scanf ("%d", &CXgH27wESdM);
    for (i = 0; i < CXgH27wESdM; i++) {
        scanf ("%lf %lf", &KWseg9UrA1[i], &y[i]);
    }
    for (i = 0; i < CXgH27wESdM; i++) {
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
        for (j = 0; j < CXgH27wESdM; j = j + 1) {
            ll[i][j] = sqrt ((KWseg9UrA1[i] - KWseg9UrA1[j]) * (KWseg9UrA1[i] - KWseg9UrA1[j]) + (y[i] - y[j]) * (y[i] - y[j]));
        };
    }
    {
        i = 0;
        while (i < CXgH27wESdM) {
            for (j = 0; j < CXgH27wESdM; j++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (ll[i][j] > l[i]) {
                    l[i] = ll[i][j];
                };
            }
            if (l[i] > FJEbAg6) {
                FJEbAg6 = l[i];
            }
            i++;
        };
    }
    printf ("%.4f\n", FJEbAg6);
}

