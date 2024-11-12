int main () {
    double  hBMqz236GP [100];
    double  USmX5hIbEc4J;
    double  NFeA5d [100] = {0.0};
    double  wWRJ61YIbKeE [100] = {0.0};
    int G9cBFKAWg, i, j, o = (708 - 708), pXAaIZTnfew4 = 0;
    char IPOq89BxEC [100] [10];
    scanf ("%d", &G9cBFKAWg);
    getchar ();
    for (i = 0; G9cBFKAWg > i; i = i + 1) {
        scanf ("%s %lf", IPOq89BxEC[i], &hBMqz236GP[i]);
    }
    for (i = 0; i < G9cBFKAWg; i = i + 1) {
        if (!(0 != strcmp (IPOq89BxEC[i], "male")))
            NFeA5d[o++] = hBMqz236GP[i];
        else if (!(0 != strcmp (IPOq89BxEC[i], "female")))
            wWRJ61YIbKeE[pXAaIZTnfew4++] = hBMqz236GP[i];
    }
    for (j = 1; o >= j; j = j + 1) {
        for (i = 0; o - j > i; i = i + 1) {
            if (NFeA5d[i + 1] < NFeA5d[i]) {
                USmX5hIbEc4J = NFeA5d[i + 1];
                NFeA5d[i + 1] = NFeA5d[i];
                NFeA5d[i] = USmX5hIbEc4J;
            };
        };
    }
    for (j = 1; j <= pXAaIZTnfew4; j = j + 1) {
        for (i = 0; i < pXAaIZTnfew4 - j; i = i + 1) {
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
            if (wWRJ61YIbKeE[i] < wWRJ61YIbKeE[i + 1]) {
                USmX5hIbEc4J = wWRJ61YIbKeE[i + 1];
                wWRJ61YIbKeE[i + 1] = wWRJ61YIbKeE[i];
                wWRJ61YIbKeE[i] = USmX5hIbEc4J;
            };
        };
    }
    for (i = 0; i < o; i = i + 1)
        printf ("%.2lf ", NFeA5d[i]);
    for (i = 0; i < pXAaIZTnfew4 - 1; i = i + 1)
        printf ("%.2lf ", wWRJ61YIbKeE[i]);
    scanf ("%d", &i);
    printf ("%.2lf", wWRJ61YIbKeE[pXAaIZTnfew4 - 1]);
    return 0;
}

