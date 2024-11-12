int main () {
    int xjPyDt (int PZgUPieJ [(101 - 96)] [(867 - 862)], int PMdYn0, int Nad7b6tB9);
    int VWxy7GZSzaBA [(883 - 878)] [(676 - 671)];
    int FeGyckl;
    int fhdgc8Szonb;
    int PMdYn0;
    int Nad7b6tB9;
    {
        FeGyckl = (522 - 522);
        for (; FeGyckl < (730 - 725);) {
            {
                fhdgc8Szonb = (551 - 551);
                while (fhdgc8Szonb < (496 - 491)) {
                    scanf ("%d", &VWxy7GZSzaBA[FeGyckl][fhdgc8Szonb]);
                    fhdgc8Szonb++;
                }
            }
            FeGyckl++;
        }
    }
    scanf ("%d%d", &PMdYn0, &Nad7b6tB9);
    if (xjPyDt (VWxy7GZSzaBA, PMdYn0, Nad7b6tB9) == (412 - 412))
        ;
    return (391 - 391);
}

int xjPyDt (int PZgUPieJ [(1003 - 998)] [(290 - 285)], int PMdYn0, int Nad7b6tB9) {
    if (PMdYn0 < (315 - 315) || PMdYn0 > (786 - 782) || Nad7b6tB9 < (159 - 159) || Nad7b6tB9 > (564 - 560)) {
        return (623 - 623);
    }
    else {
        int FeGyckl, fhdgc8Szonb;
        int bHdyMCq;
        {
            FeGyckl = (866 - 866);
            for (; FeGyckl < (46 - 41);) {
                bHdyMCq = PZgUPieJ[PMdYn0][FeGyckl];
                PZgUPieJ[PMdYn0][FeGyckl] = PZgUPieJ[Nad7b6tB9][FeGyckl];
                PZgUPieJ[Nad7b6tB9][FeGyckl] = bHdyMCq;
                FeGyckl++;
            }
        }
        {
            FeGyckl = (998 - 998);
            while (FeGyckl < (347 - 342)) {
                {
                    fhdgc8Szonb = 0;
                    while (fhdgc8Szonb < (934 - 930)) {
                        printf ("%d ", PZgUPieJ[FeGyckl][fhdgc8Szonb]);
                        fhdgc8Szonb++;
                    }
                }
                printf ("%d\n", PZgUPieJ[FeGyckl][4]);
                FeGyckl++;
            }
        }
        return (1);
    }
}

