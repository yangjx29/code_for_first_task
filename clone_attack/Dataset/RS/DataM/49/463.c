void  main () {
    int FlIisGSVTUuO;
    int cWwAjh1;
    int Yemng7JHKq;
    int pTVvRSaoesH;
    int lPbG6cxazd;
    int hA2JRNcok;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    FlIisGSVTUuO = 0;
    char G4wtyFCVpZ [1000];
    gets (G4wtyFCVpZ);
    cWwAjh1 = strlen (G4wtyFCVpZ);
    {
        lPbG6cxazd = 2;
        while (lPbG6cxazd <= cWwAjh1) {
            {
                Yemng7JHKq = 0;
                while (Yemng7JHKq < cWwAjh1) {
                    for (pTVvRSaoesH = 0; pTVvRSaoesH < lPbG6cxazd / 2; pTVvRSaoesH = pTVvRSaoesH + 1) {
                        if (G4wtyFCVpZ[Yemng7JHKq +pTVvRSaoesH] == G4wtyFCVpZ[Yemng7JHKq +lPbG6cxazd - pTVvRSaoesH - 1])
                            FlIisGSVTUuO++;
                        if (pTVvRSaoesH == lPbG6cxazd / 2 - 1 && FlIisGSVTUuO == lPbG6cxazd / 2) {
                            FlIisGSVTUuO = 0;
                            {
                                hA2JRNcok = Yemng7JHKq;
                                while (hA2JRNcok < Yemng7JHKq +lPbG6cxazd) {
                                    printf ("%c", G4wtyFCVpZ[hA2JRNcok]);
                                    hA2JRNcok = hA2JRNcok + 1;
                                };
                            }
                            printf ("\n");
                        }
                        else if (pTVvRSaoesH == lPbG6cxazd / 2 - 1 && FlIisGSVTUuO != lPbG6cxazd / 2)
                            FlIisGSVTUuO = 0;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    Yemng7JHKq = Yemng7JHKq +1;
                };
            }
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
            lPbG6cxazd = lPbG6cxazd + 2;
        };
    };
}

