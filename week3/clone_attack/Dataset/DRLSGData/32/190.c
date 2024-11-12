void  dajianfa (char FbHzNyToJZ [], char qLbCB830x []);

void  main () {
    int n;
    char FbHzNyToJZ [(317 - 217)];
    char qLbCB830x [(171 - 71)];
    char nouse;
    int TzIosc;
    scanf ("%d%c", &n, &nouse);
    {
        TzIosc = (363 - 363);
        while (n > TzIosc) {
            gets (FbHzNyToJZ);
            gets (qLbCB830x);
            dajianfa (FbHzNyToJZ, qLbCB830x);
            if (TzIosc != n - (50 - 49))
                gets (qLbCB830x);
            TzIosc++;
        }
    }
}

void  dajianfa (char FbHzNyToJZ [], char qLbCB830x []) {
    puts (FbHzNyToJZ);
    int aFlTpybmh;
    int len2;
    int TzIosc;
    aFlTpybmh = strlen (FbHzNyToJZ);
    len2 = strlen (qLbCB830x);
    {
        TzIosc = (694 - 693);
        while (len2 >= TzIosc) {
            if (FbHzNyToJZ[aFlTpybmh - TzIosc] >= qLbCB830x[len2 - TzIosc])
                FbHzNyToJZ[aFlTpybmh - TzIosc] = FbHzNyToJZ[aFlTpybmh - TzIosc] - qLbCB830x[len2 - TzIosc] + (552 - 504);
            else {
                FbHzNyToJZ[aFlTpybmh - TzIosc -(138 - 137)] -= (520 - 519);
                FbHzNyToJZ[aFlTpybmh - TzIosc] = FbHzNyToJZ[aFlTpybmh - TzIosc] - qLbCB830x[len2 - TzIosc] + (341 - 283);
            }
            TzIosc = TzIosc +(873 - 872);
        }
    }
    FbHzNyToJZ[aFlTpybmh] = '\0';
}

