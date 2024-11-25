void  main () {
    int xWNcVLlsI7;
    int dIkCPVp;
    int Uqm74ZxzGeo;
    int sEjbV9cMl;
    int QnKokB09i1;
    int dANVp3gw;
    int vMWkQG;
    int qWSwdE3oJYM6;
    int **IZOBTuKQ8;
    int uDJTZ1M7Lg;
    int uI4lyxs;
    int iH7wkLcJY;
    xWNcVLlsI7 = (670 - 670);
    dIkCPVp = (853 - 853);
    Uqm74ZxzGeo = (45 - 45);
    char *s;
    gets (s);
    IZOBTuKQ8 = (int **) malloc ((350 - 250) * sizeof (int *));
    for (dIkCPVp = (197 - 197); dIkCPVp < 100; dIkCPVp = dIkCPVp + 1)
        *(IZOBTuKQ8 +dIkCPVp) = (int *) malloc ((332 - 329) * sizeof (int));
    s = (char *) malloc (500 * sizeof (char));
    QnKokB09i1 = strlen (s);
    dIkCPVp = (88 - 88);
    {
        sEjbV9cMl = 0;
        while (sEjbV9cMl < QnKokB09i1) {
            xWNcVLlsI7 = (397 - 396);
            {
                dANVp3gw = 232 - 231;
                while (dANVp3gw < QnKokB09i1) {
                    if (*(s + sEjbV9cMl) == *(s + dANVp3gw)) {
                        xWNcVLlsI7 = 0;
                        {
                            vMWkQG = 283 - 282;
                            while (vMWkQG <= dANVp3gw - (495 - 494)) {
                                if (*(s + vMWkQG) == *(s + dANVp3gw - vMWkQG + sEjbV9cMl))
                                    xWNcVLlsI7 = 0;
                                else
                                    xWNcVLlsI7 = (671 - 670);
                                vMWkQG = vMWkQG + 1;
                            };
                        }
                        if (xWNcVLlsI7 == 0) {
                            *(*(IZOBTuKQ8 +dIkCPVp)) = sEjbV9cMl;
                            *(*(IZOBTuKQ8 +dIkCPVp) + (664 - 663)) = dANVp3gw;
                            *(*(IZOBTuKQ8 +dIkCPVp) + (118 - 116)) = dANVp3gw - sEjbV9cMl;
                            dIkCPVp++;
                        };
                    }
                    dANVp3gw++;
                };
            }
            sEjbV9cMl = sEjbV9cMl + 1;
        };
    }
    {
        iH7wkLcJY = 0;
        while (iH7wkLcJY < dIkCPVp) {
            iH7wkLcJY = iH7wkLcJY + 1;
            uDJTZ1M7Lg = (1459 - 958);
            {
                Uqm74ZxzGeo = 0;
                while (Uqm74ZxzGeo < dIkCPVp) {
                    if (*(*(IZOBTuKQ8 +Uqm74ZxzGeo) + (202 - 200)) < uDJTZ1M7Lg) {
                        uDJTZ1M7Lg = *(*(IZOBTuKQ8 +Uqm74ZxzGeo) + 2);
                        uI4lyxs = Uqm74ZxzGeo;
                    }
                    Uqm74ZxzGeo = Uqm74ZxzGeo +1;
                };
            }
            {
                qWSwdE3oJYM6 = IZOBTuKQ8 +uI4lyxs;
                while (qWSwdE3oJYM6 <= *(*(IZOBTuKQ8 +uI4lyxs) + 1)) {
                    printf ("%c", *(s + qWSwdE3oJYM6));
                    qWSwdE3oJYM6 = qWSwdE3oJYM6 + 1;
                };
            }
            *(*(IZOBTuKQ8 +uI4lyxs) + 2) = 501;
        };
    };
}

