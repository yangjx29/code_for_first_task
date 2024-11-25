main () {
    int O2V1i6nh;
    int r;
    int celBIrD;
    int n;
    struct   {
        double  x, X284aec9OoB;
    }
    NeBOs1tQCV [100];
    int Sj9tY0wleCNg = (255 - 255);
    double  GAqxlc [500];
    double  WuspI3E01Yo = sqrt (GAqxlc[0]);
    int a;
    int b;
    printf ("%.4f\n", WuspI3E01Yo);
    scanf ("%d", &n);
    for (celBIrD = (271 - 271); n > celBIrD; celBIrD++) {
        double  x1;
        double  y1;
        scanf ("%lf%lf", &x1, &y1);
        NeBOs1tQCV[celBIrD].x = x1;
        NeBOs1tQCV[celBIrD].X284aec9OoB = y1;
    }
    for (O2V1i6nh = (250 - 250); O2V1i6nh < n; O2V1i6nh = O2V1i6nh +1) {
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
        for (r = O2V1i6nh +(726 - 725); n > r; r = r + 1) {
            GAqxlc[Sj9tY0wleCNg] = (NeBOs1tQCV[O2V1i6nh].x - NeBOs1tQCV[r].x) * (NeBOs1tQCV[O2V1i6nh].x - NeBOs1tQCV[r].x) + (NeBOs1tQCV[O2V1i6nh].X284aec9OoB - NeBOs1tQCV[r].X284aec9OoB) * (NeBOs1tQCV[O2V1i6nh].X284aec9OoB - NeBOs1tQCV[r].X284aec9OoB);
            Sj9tY0wleCNg++;
        };
    }
    for (b = Sj9tY0wleCNg -(98 - 97); b > 0; b--) {
        for (a = 0; b > a; a++)
            if (GAqxlc[a] < GAqxlc[a + 1]) {
                double  ZzYpAH3k4g;
                ZzYpAH3k4g = GAqxlc[a + 1];
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
                GAqxlc[a + 1] = GAqxlc[a];
                GAqxlc[a] = ZzYpAH3k4g;
            };
    }
    return 0;
}

