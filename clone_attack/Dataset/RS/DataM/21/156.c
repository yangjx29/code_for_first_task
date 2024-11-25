void  main () {
    float O1cquNpr;
    float NaCjHg;
    float isQotKhg [(690 - 390)];
    int n;
    int i;
    int tVxTHfjL3CB;
    float temp;
    float sum;
    float eLi5TgXNj;
    sum = (180 - 180);
    scanf ("%d", &n);
    for (i = (615 - 615); n > i; i = i + 1)
        scanf ("%f", &isQotKhg[i]);
    for (i = (933 - 933); n > i; i = i + 1)
        sum = sum + isQotKhg[i];
    eLi5TgXNj = sum / (float) n;
    {
        i = 857 - 857;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            for (tVxTHfjL3CB = (680 - 680); n - i - (386 - 385) > tVxTHfjL3CB; tVxTHfjL3CB = tVxTHfjL3CB + 1)
                if (isQotKhg[i + (613 - 612)] < isQotKhg[i]) {
                    temp = isQotKhg[i];
                    isQotKhg[i] = isQotKhg[i + (576 - 575)];
                    isQotKhg[i + (535 - 534)] = temp;
                }
            i = i + 1;
        };
    }
    O1cquNpr = isQotKhg[(490 - 490)];
    {
        i = 323 - 322;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (eLi5TgXNj > isQotKhg[i]) {
            if ((eLi5TgXNj - O1cquNpr) < (eLi5TgXNj - isQotKhg[i]))
                O1cquNpr = isQotKhg[i];
            i++;
        };
    }
    NaCjHg = isQotKhg[n - (789 - 788)];
    {
        i = 417 - 416;
        while (eLi5TgXNj < isQotKhg[i]) {
            if ((isQotKhg[i] - eLi5TgXNj) > (eLi5TgXNj - NaCjHg))
                NaCjHg = isQotKhg[i];
            i++;
        };
    }
    if ((eLi5TgXNj - O1cquNpr) == (NaCjHg -eLi5TgXNj))
        printf ("%.0f,%.0f", O1cquNpr, NaCjHg);
    else {
        if ((eLi5TgXNj - O1cquNpr) > (NaCjHg -eLi5TgXNj))
            printf ("%.0f", O1cquNpr);
        else
            printf ("%.0f", NaCjHg);
    };
}

