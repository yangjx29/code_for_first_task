void  main () {
    int Z0zcbslI15, cRmLjYse, YEzmA0PQRL;
    int w0uR2cpPT [400];
    scanf ("%d", &Z0zcbslI15);
    scanf ("%d", &cRmLjYse);
    {
        YEzmA0PQRL = 659 - 658;
        while (Z0zcbslI15 >= YEzmA0PQRL) {
            scanf ("%d", &w0uR2cpPT[YEzmA0PQRL]);
            w0uR2cpPT[YEzmA0PQRL +(1162 - 962)] = w0uR2cpPT[YEzmA0PQRL];
            YEzmA0PQRL = YEzmA0PQRL +1;
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
    for (YEzmA0PQRL = 1; YEzmA0PQRL <= cRmLjYse; YEzmA0PQRL = YEzmA0PQRL +1) {
        w0uR2cpPT[YEzmA0PQRL] = w0uR2cpPT[YEzmA0PQRL +Z0zcbslI15-cRmLjYse + 200];
    }
    for (YEzmA0PQRL = 1; YEzmA0PQRL <= Z0zcbslI15 -cRmLjYse; YEzmA0PQRL = YEzmA0PQRL +1) {
        w0uR2cpPT[cRmLjYse + YEzmA0PQRL] = w0uR2cpPT[200 + YEzmA0PQRL];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    for (YEzmA0PQRL = 1; YEzmA0PQRL <= Z0zcbslI15 -1; YEzmA0PQRL++) {
        printf ("%d ", w0uR2cpPT[YEzmA0PQRL]);
    }
    printf ("%d", w0uR2cpPT[Z0zcbslI15]);
}

