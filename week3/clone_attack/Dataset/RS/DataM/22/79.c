void  main () {
    int bw62SOapRrP, jOGVr0AndWY [(1001 - 801)], oHAIzKJe = 0, xRp4g2yv, HoiVmp;
    do {
        scanf ("%d", &jOGVr0AndWY[oHAIzKJe]);
        oHAIzKJe = oHAIzKJe + 1;
    }
    while (getchar () != '\n');
    HoiVmp = oHAIzKJe;
    {
        xRp4g2yv = 0;
        while (xRp4g2yv < HoiVmp) {
            {
                oHAIzKJe = 0;
                while (oHAIzKJe < HoiVmp -xRp4g2yv) {
                    if (jOGVr0AndWY[oHAIzKJe] < jOGVr0AndWY[oHAIzKJe + (326 - 325)]) {
                        bw62SOapRrP = jOGVr0AndWY[oHAIzKJe];
                        jOGVr0AndWY[oHAIzKJe] = jOGVr0AndWY[oHAIzKJe + 1];
                        jOGVr0AndWY[oHAIzKJe + 1] = bw62SOapRrP;
                    }
                    oHAIzKJe++;
                };
            }
            xRp4g2yv = xRp4g2yv + 1;
        };
    }
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
    bw62SOapRrP = jOGVr0AndWY[0];
    for (oHAIzKJe = 0; oHAIzKJe < HoiVmp; oHAIzKJe = oHAIzKJe + 1) {
        if (jOGVr0AndWY[oHAIzKJe] < bw62SOapRrP)
            break;
    }
    if (oHAIzKJe == HoiVmp)
        puts ("No");
    if (oHAIzKJe < HoiVmp)
        printf ("%d", jOGVr0AndWY[oHAIzKJe]);
}

