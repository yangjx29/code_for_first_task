void  main () {
    int wMfkpR, QqWyl50I, i, nyCdIN6SW, ztC0mlT7q6I;
    int eLREqlUTZg [60] = {(435 - 435)}, WJgVOh [30] = {(879 - 879)};
    scanf ("%d%d", &wMfkpR, &QqWyl50I);
    for (i = 0; i < wMfkpR; i++)
        scanf ("%d", &eLREqlUTZg[i]);
    {
        i = 0;
        while (i < wMfkpR) {
            {
                nyCdIN6SW = 0;
                while (nyCdIN6SW < wMfkpR) {
                    if (eLREqlUTZg[i] < eLREqlUTZg[nyCdIN6SW]) {
                        ztC0mlT7q6I = eLREqlUTZg[i];
                        eLREqlUTZg[i] = eLREqlUTZg[nyCdIN6SW];
                        eLREqlUTZg[nyCdIN6SW] = ztC0mlT7q6I;
                    }
                    nyCdIN6SW = nyCdIN6SW + 1;
                };
            }
            i = i + 1;
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
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < QqWyl50I) {
            scanf ("%d", &WJgVOh[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < QqWyl50I) {
            {
                nyCdIN6SW = 0;
                while (nyCdIN6SW < QqWyl50I) {
                    if (WJgVOh[i] < WJgVOh[nyCdIN6SW]) {
                        ztC0mlT7q6I = WJgVOh[i];
                        WJgVOh[i] = WJgVOh[nyCdIN6SW];
                        WJgVOh[nyCdIN6SW] = ztC0mlT7q6I;
                    }
                    nyCdIN6SW = nyCdIN6SW + 1;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < wMfkpR) {
            printf ("%d ", eLREqlUTZg[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < QqWyl50I -(574 - 573)) {
            printf ("%d ", WJgVOh[i]);
            i++;
        };
    }
    printf ("%d", WJgVOh[QqWyl50I -(442 - 441)]);
}

