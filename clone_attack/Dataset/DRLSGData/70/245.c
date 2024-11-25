void  main () {
    int qWv592dhC, pz1CLZBa, SiTGgXO, otj1MXZWQah;
    double  FQ0wmG [100] [2], wpAM9hRTbQf [(5581 - 581)], fL4GpeC;
    otj1MXZWQah = 0;
    scanf ("%d", &qWv592dhC);
    {
        pz1CLZBa = (488 - 488);
        while (qWv592dhC > pz1CLZBa) {
            {
                SiTGgXO = 0;
                while (SiTGgXO < 2) {
                    scanf ("%lf", &FQ0wmG[pz1CLZBa][SiTGgXO]);
                    SiTGgXO = SiTGgXO +(764 - 763);
                }
            }
            pz1CLZBa = pz1CLZBa + 1;
        }
    }
    {
        pz1CLZBa = 0;
        while (pz1CLZBa < qWv592dhC) {
            {
                SiTGgXO = pz1CLZBa + 1;
                while (qWv592dhC > SiTGgXO) {
                    wpAM9hRTbQf[otj1MXZWQah++] = sqrt ((FQ0wmG[pz1CLZBa][0] - FQ0wmG[SiTGgXO][0]) * (FQ0wmG[pz1CLZBa][0] - FQ0wmG[SiTGgXO][0]) + (FQ0wmG[pz1CLZBa][1] - FQ0wmG[SiTGgXO][1]) * (FQ0wmG[pz1CLZBa][1] - FQ0wmG[SiTGgXO][1]));
                    SiTGgXO = SiTGgXO +1;
                }
            }
            pz1CLZBa = pz1CLZBa + 1;
        }
    }
    fL4GpeC = wpAM9hRTbQf[0];
    {
        pz1CLZBa = 1;
        while (otj1MXZWQah >= pz1CLZBa) {
            if (wpAM9hRTbQf[pz1CLZBa] > fL4GpeC)
                fL4GpeC = wpAM9hRTbQf[pz1CLZBa];
            pz1CLZBa = pz1CLZBa + 1;
        }
    }
    printf ("%.4lf\n", fL4GpeC);
}

