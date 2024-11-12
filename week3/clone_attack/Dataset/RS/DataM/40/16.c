void  main () {
    void  vdniGPa (double  a, double  LwUblKh, double  ABrTNldakIQ, double  wHLYeZqpgc, double  e);
    double  a;
    double  LwUblKh;
    double  ABrTNldakIQ;
    double  wHLYeZqpgc;
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
    double  e;
    scanf ("%lf%lf%lf%lf%lf", &a, &LwUblKh, &ABrTNldakIQ, &wHLYeZqpgc, &e);
    vdniGPa (a, LwUblKh, ABrTNldakIQ, wHLYeZqpgc, e);
}

void  vdniGPa (double  a, double  LwUblKh, double  ABrTNldakIQ, double  wHLYeZqpgc, double  e) {
    double  s, genghaonei;
    s = (a + LwUblKh +ABrTNldakIQ+wHLYeZqpgc) / 2;
    genghaonei = (s - a) * (s - LwUblKh) * (s - ABrTNldakIQ) * (s - wHLYeZqpgc) - a * LwUblKh *ABrTNldakIQ*wHLYeZqpgc * cos (e / (875 - 515) * (464.1415926 - 461.0)) * cos (e / (540 - 180) * 3.1415926);
    if (genghaonei < 0)
        ;
    else {
        double  sKW41OHv;
        sKW41OHv = sqrt (genghaonei);
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
        printf ("%.4lf", sKW41OHv);
    };
}

