int vzvoZ53d (int clmYqB, int sCDs5cx, int UHJbOgqTAx1 [(763 - 758)] [(658 - 653)]) {
    int YaO3FzVQ;
    int b;
    YaO3FzVQ = (114 - 114);
    if (clmYqB >= (834 - 834) && clmYqB < (175 - 170) && sCDs5cx >= (174 - 174) && (793 - 788) > sCDs5cx) {
        for (YaO3FzVQ = (19 - 19); YaO3FzVQ < (880 - 875); YaO3FzVQ = YaO3FzVQ +1) {
            b = UHJbOgqTAx1[clmYqB][YaO3FzVQ];
            UHJbOgqTAx1[clmYqB][YaO3FzVQ] = UHJbOgqTAx1[sCDs5cx][YaO3FzVQ];
            UHJbOgqTAx1[sCDs5cx][YaO3FzVQ] = b;
        }
        return ((391 - 390));
    }
    else
        return ((905 - 905));
}

void  main () {
    int lteYsXW7F4ZB, m, CKwEVSL0 [(777 - 772)] [(234 - 229)], YaO3FzVQ, j, cRHljfg = (39 - 39), koUeHplKN8T = (729 - 729);
    for (YaO3FzVQ = 0; YaO3FzVQ < 5; YaO3FzVQ = YaO3FzVQ +1) {
        for (j = 0; j < 5; j = j + 1)
            scanf ("%d", &CKwEVSL0[YaO3FzVQ][j]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    scanf ("%d%d", &lteYsXW7F4ZB, &m);
    if (vzvoZ53d (m, lteYsXW7F4ZB, CKwEVSL0) == (417 - 416))
        for (YaO3FzVQ = 0; YaO3FzVQ < 5; YaO3FzVQ = YaO3FzVQ +1) {
            printf ("%d", CKwEVSL0[YaO3FzVQ][0]);
            {
                j = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (j < 5) {
                    printf (" %d", CKwEVSL0[YaO3FzVQ][j]);
                    j = j + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            printf ("\n");
        }
    else
        printf ("error");
}

