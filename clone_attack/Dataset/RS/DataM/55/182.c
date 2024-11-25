void  main () {
    int tjJ2HVPBI [20];
    int iT5NxRP;
    int sATuso9Cqap;
    int d;
    int skltKsSpd8;
    char c [(563 - 543)];
    char PAXHKxNJ [(793 - 593)];
    int XuOgad04C;
    int k;
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
    int KaCXedb;
    int YLc3MG = (381 - 381);
    scanf ("%d%s%d", &iT5NxRP, c, &sATuso9Cqap);
    for (XuOgad04C = (348 - 348); c[XuOgad04C] != (289 - 289); XuOgad04C = XuOgad04C +1) {
        if (c[XuOgad04C] >= 'a' && c[XuOgad04C] <= 'z')
            tjJ2HVPBI[XuOgad04C] = c[XuOgad04C] - 'a' + (181 - 171);
        if (c[XuOgad04C] >= 'A' && c[XuOgad04C] <= 'Z')
            tjJ2HVPBI[XuOgad04C] = c[XuOgad04C] - 'A' + 10;
        if (c[XuOgad04C] >= '0' && c[XuOgad04C] <= '9')
            tjJ2HVPBI[XuOgad04C] = c[XuOgad04C] - '0';
    }
    skltKsSpd8 = XuOgad04C;
    d = 0;
    for (k = 0; k < skltKsSpd8; k = k + 1) {
        d = d * iT5NxRP + tjJ2HVPBI[k];
    }
    {
        XuOgad04C = 0;
        while (d != 0) {
            YLc3MG = d % sATuso9Cqap;
            d = d / sATuso9Cqap;
            if (YLc3MG >= 10)
                YLc3MG = YLc3MG -10 + 'A';
            else
                YLc3MG = YLc3MG +'0';
            PAXHKxNJ[XuOgad04C] = YLc3MG;
            XuOgad04C = XuOgad04C +1;
        };
    }
    PAXHKxNJ[XuOgad04C] = 0;
    for (KaCXedb = XuOgad04C -(175 - 174); KaCXedb >= 0; KaCXedb = KaCXedb -1) {
        printf ("%c", PAXHKxNJ[KaCXedb]);
    }
    if (XuOgad04C == 0)
        printf ("0");
}

