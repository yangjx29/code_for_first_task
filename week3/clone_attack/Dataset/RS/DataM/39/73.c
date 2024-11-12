void  main () {
    long  sj1vLW3Qy;
    sj1vLW3Qy = (242 - 242);
    int p2RglUikqwQ, lSpUnf6dQRiD, UDzWGdlB1HIp, JA1QbXYa49, zvEaw4l0LNJt, cGuoHkKZv, utV3DeCy, Nd5i9rbgls, AdXKSl, MOaUl6fDIYh;
    struct   st {
        char WxKcsTa5w [23];
        int ro8kdUnciTt;
        int J8tXUFLNIQgd;
        int RpYSHRT;
        char lYDEVQ;
        char jfb5LS7vd;
        int wYDl3zVIcyv;
    }
    gs9i6eay [103];
    struct   st s;
    scanf ("%d", &p2RglUikqwQ);
    {
        lSpUnf6dQRiD = 208 - 208;
        while (lSpUnf6dQRiD < p2RglUikqwQ) {
            scanf ("%s %d %d %c %c %d", gs9i6eay[lSpUnf6dQRiD].WxKcsTa5w, &gs9i6eay[lSpUnf6dQRiD].ro8kdUnciTt, &gs9i6eay[lSpUnf6dQRiD].RpYSHRT, &gs9i6eay[lSpUnf6dQRiD].jfb5LS7vd, &gs9i6eay[lSpUnf6dQRiD].lYDEVQ, &gs9i6eay[lSpUnf6dQRiD].J8tXUFLNIQgd);
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
            lSpUnf6dQRiD = lSpUnf6dQRiD + 1;
        };
    }
    for (lSpUnf6dQRiD = 0; lSpUnf6dQRiD < p2RglUikqwQ; lSpUnf6dQRiD = lSpUnf6dQRiD + 1) {
        MOaUl6fDIYh = 0;
        AdXKSl = 0;
        utV3DeCy = 0;
        cGuoHkKZv = 0;
        if ((647 - 567) < gs9i6eay[lSpUnf6dQRiD].ro8kdUnciTt && 0 < gs9i6eay[lSpUnf6dQRiD].J8tXUFLNIQgd)
            cGuoHkKZv = (8547 - 547);
        if (85 < gs9i6eay[lSpUnf6dQRiD].ro8kdUnciTt && 80 < gs9i6eay[lSpUnf6dQRiD].RpYSHRT)
            utV3DeCy = 4000;
        Nd5i9rbgls = 0;
        if (gs9i6eay[lSpUnf6dQRiD].ro8kdUnciTt > 90)
            Nd5i9rbgls = (2027 - 27);
        if (gs9i6eay[lSpUnf6dQRiD].ro8kdUnciTt > 85 && gs9i6eay[lSpUnf6dQRiD].lYDEVQ == 'Y')
            AdXKSl = 1000;
        if (gs9i6eay[lSpUnf6dQRiD].RpYSHRT > 80 && gs9i6eay[lSpUnf6dQRiD].jfb5LS7vd == 'Y')
            MOaUl6fDIYh = 850;
        gs9i6eay[lSpUnf6dQRiD].wYDl3zVIcyv = cGuoHkKZv + utV3DeCy + Nd5i9rbgls +AdXKSl+MOaUl6fDIYh;
    }
    for (lSpUnf6dQRiD = 0, sj1vLW3Qy = 0; lSpUnf6dQRiD < p2RglUikqwQ; lSpUnf6dQRiD++)
        sj1vLW3Qy = sj1vLW3Qy + gs9i6eay[lSpUnf6dQRiD].wYDl3zVIcyv;
    for (lSpUnf6dQRiD = 0; lSpUnf6dQRiD < p2RglUikqwQ; lSpUnf6dQRiD++)
        for (UDzWGdlB1HIp = 0; UDzWGdlB1HIp < p2RglUikqwQ - lSpUnf6dQRiD; UDzWGdlB1HIp = UDzWGdlB1HIp +1)
            if (gs9i6eay[lSpUnf6dQRiD].wYDl3zVIcyv > gs9i6eay[UDzWGdlB1HIp].wYDl3zVIcyv) {
                s = gs9i6eay[lSpUnf6dQRiD];
                gs9i6eay[lSpUnf6dQRiD] = gs9i6eay[UDzWGdlB1HIp];
                gs9i6eay[UDzWGdlB1HIp] = s;
            }
    printf ("%s\n%d\n%ld\n", gs9i6eay[0].WxKcsTa5w, gs9i6eay[0].wYDl3zVIcyv, sj1vLW3Qy);
}

