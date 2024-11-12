void  main () {
    int n;
    int wGHZ2s0ue;
    double  IXZnc0bKy7 [(33090 - 322)];
    double  RuMcv8JmC [32768];
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
    double  aNZFSBTKunC [32768];
    double  EJGjfFAUK9de, jo5NRnJ, WRGOJgy, CxgpArL2;
    scanf ("%d", &n);
    {
        wGHZ2s0ue = 998 - 997;
        while (n >= wGHZ2s0ue) {
            scanf ("%lf %lf %lf", &IXZnc0bKy7[wGHZ2s0ue], &RuMcv8JmC[wGHZ2s0ue], &aNZFSBTKunC[wGHZ2s0ue]);
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
            wGHZ2s0ue++;
        };
    }
    {
        wGHZ2s0ue = 1;
        while (wGHZ2s0ue <= n) {
            if ((621.0 - 621.0) > fabs (IXZnc0bKy7[wGHZ2s0ue]))
                printf ("Wrong\n");
            else {
                EJGjfFAUK9de = RuMcv8JmC[wGHZ2s0ue] * RuMcv8JmC[wGHZ2s0ue] - (62 - 58) * IXZnc0bKy7[wGHZ2s0ue] * aNZFSBTKunC[wGHZ2s0ue];
                if (fabs (EJGjfFAUK9de) < 1e-16) {
                    jo5NRnJ = -RuMcv8JmC[wGHZ2s0ue] / (2 * IXZnc0bKy7[wGHZ2s0ue]);
                    if ((346.000005 - 346.0) > fabs (jo5NRnJ))
                        jo5NRnJ = (310 - 310);
                    printf ("x1=x2=%.5f\n", jo5NRnJ);
                    WRGOJgy = -RuMcv8JmC[wGHZ2s0ue] / (2 * IXZnc0bKy7[wGHZ2s0ue]);
                    if (fabs (WRGOJgy) < (790.000005 - 790.0))
                        WRGOJgy = 0;
                }
                else if (EJGjfFAUK9de >= 1e-16) {
                    jo5NRnJ = (-RuMcv8JmC[wGHZ2s0ue] + sqrt (EJGjfFAUK9de)) / (2 * IXZnc0bKy7[wGHZ2s0ue]);
                    if (fabs (jo5NRnJ) < (228.000005 - 228.0))
                        jo5NRnJ = 0;
                    WRGOJgy = (-RuMcv8JmC[wGHZ2s0ue] - sqrt (EJGjfFAUK9de)) / (2 * IXZnc0bKy7[wGHZ2s0ue]);
                    if (5e-6 > fabs (WRGOJgy))
                        WRGOJgy = 0;
                    printf ("x1=%.5f;x2=%.5f\n", jo5NRnJ, WRGOJgy);
                }
                else {
                    jo5NRnJ = -RuMcv8JmC[wGHZ2s0ue] / (2 * IXZnc0bKy7[wGHZ2s0ue]);
                    WRGOJgy = -RuMcv8JmC[wGHZ2s0ue] / (2 * IXZnc0bKy7[wGHZ2s0ue]);
                    if (fabs (jo5NRnJ) < 5e-6)
                        jo5NRnJ = 0;
                    if (fabs (WRGOJgy) < 5e-6)
                        WRGOJgy = 0;
                    CxgpArL2 = sqrt (-EJGjfFAUK9de) / (2 * IXZnc0bKy7[wGHZ2s0ue]);
                    if (fabs (CxgpArL2) < 5e-6)
                        printf ("x1=x2=%.5f\n", jo5NRnJ);
                    else
                        printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", jo5NRnJ, CxgpArL2, WRGOJgy, CxgpArL2);
                };
            }
            wGHZ2s0ue++;
        };
    };
}

