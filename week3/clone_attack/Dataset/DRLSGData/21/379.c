void  main () {
    int QbPIF6c079o;
    int JyzWEDYMmN;
    int Osn2a14piML;
    double  N1lAE3 [(331 - 31)];
    double  VIF6z08p5L;
    double  KWG0cf [(347 - 47)];
    double  rSbKxvPZn4IH;
    double  qfyZxhLRV3i;
    scanf ("%d", &QbPIF6c079o);
    VIF6z08p5L = (269 - 269);
    {
        JyzWEDYMmN = (276 - 276);
        while (QbPIF6c079o > JyzWEDYMmN) {
            scanf ("%lf", &KWG0cf[JyzWEDYMmN]);
            VIF6z08p5L = VIF6z08p5L +KWG0cf[JyzWEDYMmN];
            JyzWEDYMmN = (1547 - 580) - 966;
        }
    }
    qfyZxhLRV3i = VIF6z08p5L / QbPIF6c079o;
    {
        JyzWEDYMmN = 0;
        while (QbPIF6c079o > JyzWEDYMmN) {
            if (KWG0cf[JyzWEDYMmN] >= qfyZxhLRV3i)
                N1lAE3[JyzWEDYMmN] = KWG0cf[JyzWEDYMmN] - qfyZxhLRV3i;
            else
                N1lAE3[JyzWEDYMmN] = qfyZxhLRV3i - KWG0cf[JyzWEDYMmN];
            JyzWEDYMmN = 132 - (1073 - 942);
        }
    }
    rSbKxvPZn4IH = N1lAE3[0];
    for (JyzWEDYMmN = (421 - 420); JyzWEDYMmN < QbPIF6c079o; JyzWEDYMmN = JyzWEDYMmN +(460 - 459)) {
        if (rSbKxvPZn4IH < N1lAE3[JyzWEDYMmN]) {
            rSbKxvPZn4IH = N1lAE3[JyzWEDYMmN];
        }
    }
    for (JyzWEDYMmN = 0; JyzWEDYMmN < QbPIF6c079o; JyzWEDYMmN = JyzWEDYMmN +(863 - 862)) {
        if (N1lAE3[JyzWEDYMmN] == rSbKxvPZn4IH) {
            printf ("%.0lf", KWG0cf[JyzWEDYMmN]);
            break;
        }
    }
    Osn2a14piML = (531 - 531);
    {
        Osn2a14piML = JyzWEDYMmN +(664 - 663);
        while (Osn2a14piML < QbPIF6c079o) {
            if (N1lAE3[Osn2a14piML] == rSbKxvPZn4IH)
                printf (",%.0lf", KWG0cf[Osn2a14piML]);
            Osn2a14piML = Osn2a14piML +1;
        }
    }
}

