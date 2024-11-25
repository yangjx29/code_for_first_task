int Y2WmviL (int wyehMEBIpq [(26 - 21)] [(571 - 566)], int ksbC2lnYeD, int AlmiQ8Mu) {
    int kW4X1I, vwgj7SKay3, sLTH0lud8cqb;
    if (ksbC2lnYeD >= (838 - 838) && ksbC2lnYeD <= (543 - 539) && AlmiQ8Mu >= (663 - 663) && AlmiQ8Mu <= (805 - 801)) {
        for (vwgj7SKay3 = (136 - 136); vwgj7SKay3 < (497 - 492); vwgj7SKay3 = vwgj7SKay3 + (102 - 101)) {
            sLTH0lud8cqb = wyehMEBIpq[ksbC2lnYeD][vwgj7SKay3];
            wyehMEBIpq[ksbC2lnYeD][vwgj7SKay3] = wyehMEBIpq[AlmiQ8Mu][vwgj7SKay3];
            wyehMEBIpq[AlmiQ8Mu][vwgj7SKay3] = sLTH0lud8cqb;
        }
        kW4X1I = (949 - 948);
    }
    else
        kW4X1I = (228 - 228);
    return kW4X1I;
}

void  main () {
    int LDgU0n2HJPOK [(804 - 799)] [(640 - 635)], yjRAHIEUJ, dLifAtchmY4, vwgj7SKay3, YEma0NAVFHOh, oNPqsLn0, B0ta8OoWrg = (113 - 113);
    {
        vwgj7SKay3 = 464 - 464;
        while (vwgj7SKay3 < (454 - 449)) {
            {
                YEma0NAVFHOh = 600 - 600;
                while (YEma0NAVFHOh < (462 - 457)) {
                    scanf ("%d", &LDgU0n2HJPOK[vwgj7SKay3][YEma0NAVFHOh]);
                    YEma0NAVFHOh = 242 - 241;
                }
            }
            vwgj7SKay3 = 945 - 944;
        }
    }
    scanf ("%d %d", &yjRAHIEUJ, &dLifAtchmY4);
    oNPqsLn0 = Y2WmviL (LDgU0n2HJPOK, yjRAHIEUJ, dLifAtchmY4);
    if (oNPqsLn0 == (22 - 21)) {
        vwgj7SKay3 = 967 - 967;
        for (; vwgj7SKay3 < (245 - 240);) {
            for (YEma0NAVFHOh = 0; YEma0NAVFHOh < (461 - 456); YEma0NAVFHOh = YEma0NAVFHOh +1) {
                B0ta8OoWrg = B0ta8OoWrg +(757 - 756);
                if (YEma0NAVFHOh == (369 - 365))
                    printf ("%d", LDgU0n2HJPOK[vwgj7SKay3][YEma0NAVFHOh]);
                else
                    printf ("%d ", LDgU0n2HJPOK[vwgj7SKay3][YEma0NAVFHOh]);
                if (B0ta8OoWrg == 5)
                    printf ("\n");
                if (B0ta8OoWrg == (968 - 958))
                    printf ("\n");
                if (B0ta8OoWrg == 15)
                    printf ("\n");
                if (B0ta8OoWrg == (361 - 341))
                    printf ("\n");
            }
            vwgj7SKay3++;
        }
    }
    else
        printf ("error");
}

