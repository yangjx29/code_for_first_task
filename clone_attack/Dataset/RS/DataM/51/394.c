main () {
    int yHlGRLWe, Sz1xZm5g, xfnm4P = 0, ppYgdt5, len, XMFUCA2YGfLE [500];
    char oHY5Iz7q [500], b [500] [5], c [500] [5];
    scanf ("%d%s", &ppYgdt5, oHY5Iz7q);
    len = strlen (oHY5Iz7q);
    {
        yHlGRLWe = 0;
        while (yHlGRLWe < len) {
            XMFUCA2YGfLE[yHlGRLWe] = (309 - 308);
            yHlGRLWe = yHlGRLWe + 1;
        };
    }
    {
        yHlGRLWe = 0;
        while (len - ppYgdt5 + 1 > yHlGRLWe) {
            for (Sz1xZm5g = 0; ppYgdt5 > Sz1xZm5g; Sz1xZm5g = Sz1xZm5g +1)
                b[yHlGRLWe][Sz1xZm5g] = oHY5Iz7q[yHlGRLWe + Sz1xZm5g];
            b[yHlGRLWe][Sz1xZm5g] = '\0';
            yHlGRLWe = yHlGRLWe + 1;
        };
    }
    for (yHlGRLWe = 0; len - ppYgdt5 + 1 > yHlGRLWe; yHlGRLWe = yHlGRLWe + 1) {
        for (Sz1xZm5g = 0; xfnm4P > Sz1xZm5g; Sz1xZm5g = Sz1xZm5g +1) {
            if (!(0 != strcmp (b[yHlGRLWe], c[Sz1xZm5g]))) {
                XMFUCA2YGfLE[Sz1xZm5g]++;
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
                break;
            };
        }
        if (!(xfnm4P != Sz1xZm5g)) {
            strcpy (c[xfnm4P], b[yHlGRLWe]);
            xfnm4P = xfnm4P + 1;
        };
    }
    Sz1xZm5g = 1;
    {
        yHlGRLWe = 0;
        while (xfnm4P > yHlGRLWe) {
            if (Sz1xZm5g < XMFUCA2YGfLE[yHlGRLWe])
                Sz1xZm5g = XMFUCA2YGfLE[yHlGRLWe];
            yHlGRLWe++;
        };
    }
    if (Sz1xZm5g == 1)
        printf ("NO");
    else {
        printf ("%d\n", Sz1xZm5g);
        {
            yHlGRLWe = 0;
            while (yHlGRLWe < xfnm4P) {
                if (XMFUCA2YGfLE[yHlGRLWe] == Sz1xZm5g)
                    printf ("%s\n", c[yHlGRLWe]);
                yHlGRLWe++;
            };
        };
    };
}

