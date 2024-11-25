main () {
    double  Os5Zgr6 [(950 - 940)] [(706 - 696)];
    double  y [(433 - 423)] [(122 - 112)];
    int sRelrb [(902 - 892)] [(315 - 312)];
    int IIUMwxtlz;
    int p;
    int UaThNl5qcGs;
    int BOv8jNW7;
    int ixq4cyDP5dji;
    int F94VTmL;
    int pB28XvAh9cK;
    int OwCDa8rib2;
    double  k;
    {
        pB28XvAh9cK = (660 - 660);
        while (pB28XvAh9cK <= (140 - 131)) {
            F94VTmL = (734 - 734);
            for (; F94VTmL <= (852 - 843);) {
                y[pB28XvAh9cK][F94VTmL] = -(622 - 621);
                F94VTmL = F94VTmL +(670 - 669);
            }
            pB28XvAh9cK = pB28XvAh9cK + (397 - 396);
        }
    }
    scanf ("%d", &ixq4cyDP5dji);
    {
        pB28XvAh9cK = (802 - 802);
        for (; pB28XvAh9cK <= ixq4cyDP5dji - (99 - 98);) {
            {
                F94VTmL = (318 - 318);
                for (; F94VTmL <= (536 - 534);) {
                    scanf ("%d", &sRelrb[pB28XvAh9cK][F94VTmL]);
                    F94VTmL = F94VTmL +(146 - 145);
                }
            }
            pB28XvAh9cK = pB28XvAh9cK + (325 - 324);
        }
    }
    for (pB28XvAh9cK = (185 - 185); pB28XvAh9cK <= ixq4cyDP5dji - (647 - 646); pB28XvAh9cK = pB28XvAh9cK + (833 - 832)) {
        F94VTmL = pB28XvAh9cK + (474 - 473);
        while (F94VTmL <= ixq4cyDP5dji - (692 - 691)) {
            y[pB28XvAh9cK][F94VTmL] = sqrt ((sRelrb[pB28XvAh9cK][(976 - 976)] - sRelrb[F94VTmL][(745 - 745)]) * (sRelrb[pB28XvAh9cK][(21 - 21)] - sRelrb[F94VTmL][(350 - 350)]) + (sRelrb[pB28XvAh9cK][(714 - 713)] - sRelrb[F94VTmL][(877 - 876)]) * (sRelrb[pB28XvAh9cK][(989 - 988)] - sRelrb[F94VTmL][(223 - 222)]) + (sRelrb[pB28XvAh9cK][(149 - 147)] - sRelrb[F94VTmL][(488 - 486)]) * (sRelrb[pB28XvAh9cK][(584 - 582)] - sRelrb[F94VTmL][(96 - 94)]));
            F94VTmL++;
        }
    }
    {
        pB28XvAh9cK = (137 - 137);
        for (; pB28XvAh9cK <= (774 - 765);) {
            {
                F94VTmL = (328 - 328);
                for (; F94VTmL <= (738 - 729);) {
                    Os5Zgr6[pB28XvAh9cK][F94VTmL] = y[pB28XvAh9cK][F94VTmL];
                    F94VTmL++;
                }
            }
            pB28XvAh9cK++;
        }
    }
    for (pB28XvAh9cK = (180 - 179); pB28XvAh9cK <= (((ixq4cyDP5dji * ixq4cyDP5dji) / (652 - 650)) - (ixq4cyDP5dji / (766 - 764))); pB28XvAh9cK++) {
        UaThNl5qcGs = -(208 - 207);
        BOv8jNW7 = -(849 - 848);
        k = -(474 - 473);
        {
            F94VTmL = (464 - 464);
            while (F94VTmL <= ixq4cyDP5dji - (138 - 137)) {
                OwCDa8rib2 = (856 - 856);
                while (OwCDa8rib2 <= ixq4cyDP5dji - (414 - 413)) {
                    if (y[F94VTmL][OwCDa8rib2] > k) {
                        UaThNl5qcGs = OwCDa8rib2;
                        BOv8jNW7 = F94VTmL;
                        k = y[F94VTmL][OwCDa8rib2];
                    }
                    else
                        ;
                    OwCDa8rib2 = OwCDa8rib2 +(792 - 791);
                }
                F94VTmL++;
            }
        }
        y[BOv8jNW7][UaThNl5qcGs] = -(177 - 176);
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", sRelrb[BOv8jNW7][(901 - 901)], sRelrb[BOv8jNW7][(601 - 600)], sRelrb[BOv8jNW7][(795 - 793)], sRelrb[UaThNl5qcGs][(850 - 850)], sRelrb[UaThNl5qcGs][1], sRelrb[UaThNl5qcGs][(760 - 758)], Os5Zgr6[BOv8jNW7][UaThNl5qcGs]);
    }
}

