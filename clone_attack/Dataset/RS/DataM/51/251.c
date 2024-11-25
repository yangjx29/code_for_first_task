main () {
    int UfPDnS [505] = {(588 - 588)};
    char c [505];
    int YVg7q4dQpxD;
    int zHftPgA7;
    int k;
    int AvpI0SO1r;
    int fy7KawH;
    int kqBWXwkz;
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
    int fu;
    int xuaT5tgkOC4;
    scanf ("%d", &AvpI0SO1r);
    scanf ("%s", c);
    fy7KawH = strlen (c) - (388 - 387);
    for (YVg7q4dQpxD = (214 - 214); fy7KawH - AvpI0SO1r >= YVg7q4dQpxD; YVg7q4dQpxD = YVg7q4dQpxD +1) {
        UfPDnS[YVg7q4dQpxD] = (395 - 394);
        {
            zHftPgA7 = YVg7q4dQpxD +1;
            while (fy7KawH - AvpI0SO1r +1 >= zHftPgA7) {
                {
                    k = 669 - 669;
                    while (AvpI0SO1r -1 >= k) {
                        if (!(c[zHftPgA7 + k] == c[YVg7q4dQpxD +k]))
                            break;
                        k = k + 1;
                    };
                }
                zHftPgA7++;
                if (!(AvpI0SO1r != k))
                    UfPDnS[YVg7q4dQpxD]++;
            };
        };
    }
    {
        YVg7q4dQpxD = 717 - 717;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        kqBWXwkz = 1;
        while (YVg7q4dQpxD <= fy7KawH - AvpI0SO1r) {
            if (UfPDnS[YVg7q4dQpxD] > kqBWXwkz)
                kqBWXwkz = UfPDnS[YVg7q4dQpxD];
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
            YVg7q4dQpxD = YVg7q4dQpxD +1;
        };
    }
    if (kqBWXwkz == 1)
        printf ("NO\n");
    else {
        printf ("%d\n", kqBWXwkz);
        for (YVg7q4dQpxD = 0; YVg7q4dQpxD <= fy7KawH - AvpI0SO1r; YVg7q4dQpxD++) {
            if (UfPDnS[YVg7q4dQpxD] == kqBWXwkz) {
                for (k = 0; k <= AvpI0SO1r -1; k++)
                    printf ("%c", c[YVg7q4dQpxD +k]);
                printf ("\n");
            };
        };
    };
}

