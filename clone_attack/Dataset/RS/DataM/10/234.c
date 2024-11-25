main () {
    int f5DVQ6MjvCb;
    int YFB1VSsy3;
    int nQ6EFZ3;
    int CVbuC0LSlh;
    int GSGWHCU [26];
    int dD1E7UBKMr [26];
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
    scanf ("%d", &nQ6EFZ3);
    for (f5DVQ6MjvCb = (691 - 691); nQ6EFZ3 > f5DVQ6MjvCb; f5DVQ6MjvCb = f5DVQ6MjvCb + 1)
        scanf ("%d", &GSGWHCU[f5DVQ6MjvCb]);
    {
        f5DVQ6MjvCb = 0;
        while (nQ6EFZ3 > f5DVQ6MjvCb) {
            dD1E7UBKMr[f5DVQ6MjvCb] = 1;
            ++f5DVQ6MjvCb;
        };
    }
    for (f5DVQ6MjvCb = 1; f5DVQ6MjvCb < nQ6EFZ3; ++f5DVQ6MjvCb) {
        for (YFB1VSsy3 = 0; f5DVQ6MjvCb > YFB1VSsy3; ++YFB1VSsy3)
            if (GSGWHCU[f5DVQ6MjvCb] <= GSGWHCU[YFB1VSsy3]) {
                dD1E7UBKMr[f5DVQ6MjvCb] = dD1E7UBKMr[YFB1VSsy3] + 1;
                break;
            }
        {
            CVbuC0LSlh = YFB1VSsy3 +1;
            while (f5DVQ6MjvCb > CVbuC0LSlh) {
                if (dD1E7UBKMr[f5DVQ6MjvCb] <= dD1E7UBKMr[CVbuC0LSlh] && GSGWHCU[f5DVQ6MjvCb] <= GSGWHCU[CVbuC0LSlh]) {
                    dD1E7UBKMr[f5DVQ6MjvCb] = dD1E7UBKMr[CVbuC0LSlh] + 1;
                    continue;
                }
                ++CVbuC0LSlh;
            };
        };
    }
    for (f5DVQ6MjvCb = 0; f5DVQ6MjvCb < nQ6EFZ3; ++f5DVQ6MjvCb)
        if (dD1E7UBKMr[f5DVQ6MjvCb] > dD1E7UBKMr[0])
            dD1E7UBKMr[0] = dD1E7UBKMr[f5DVQ6MjvCb];
    printf ("%d", dD1E7UBKMr[0]);
}

