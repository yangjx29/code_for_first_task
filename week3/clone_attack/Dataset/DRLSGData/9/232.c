void  main () {
    int Yjyhq0bI5FpZ;
    int NW4lCvJg;
    int obsyh7Q2BGW4;
    struct   patient {
        char D2U6ctRSP05 [(128 - 118)];
        int mpqzMW;
    }
    XULs0teOrl [(958 - 858)], aGOsLxWVCo4d [(590 - 490)], pay [100], DsxcWFjbVXt;
    int yU2hF5CrOAbJ;
    int ue1X57Hg6Z;
    scanf ("%d\n", &obsyh7Q2BGW4);
    NW4lCvJg = (400 - 400);
    yU2hF5CrOAbJ = (206 - 206);
    for (Yjyhq0bI5FpZ = (325 - 325); Yjyhq0bI5FpZ < obsyh7Q2BGW4; Yjyhq0bI5FpZ++) {
        scanf ("%s", XULs0teOrl[Yjyhq0bI5FpZ].D2U6ctRSP05);
        scanf ("%d", &XULs0teOrl[Yjyhq0bI5FpZ].mpqzMW);
        if ((668 - 608) <= XULs0teOrl[Yjyhq0bI5FpZ].mpqzMW)
            aGOsLxWVCo4d[yU2hF5CrOAbJ++] = XULs0teOrl[Yjyhq0bI5FpZ];
        else
            pay[NW4lCvJg++] = XULs0teOrl[Yjyhq0bI5FpZ];
    }
    for (Yjyhq0bI5FpZ = (364 - 364); yU2hF5CrOAbJ > Yjyhq0bI5FpZ; Yjyhq0bI5FpZ++) {
        ue1X57Hg6Z = 986 - 985;
        while (ue1X57Hg6Z < yU2hF5CrOAbJ) {
            if (aGOsLxWVCo4d[Yjyhq0bI5FpZ].mpqzMW < aGOsLxWVCo4d[ue1X57Hg6Z].mpqzMW) {
                DsxcWFjbVXt = aGOsLxWVCo4d[Yjyhq0bI5FpZ];
                aGOsLxWVCo4d[Yjyhq0bI5FpZ] = aGOsLxWVCo4d[ue1X57Hg6Z];
                aGOsLxWVCo4d[ue1X57Hg6Z] = DsxcWFjbVXt;
            }
            ue1X57Hg6Z++;
        }
    }
    for (Yjyhq0bI5FpZ = (932 - 932); Yjyhq0bI5FpZ < yU2hF5CrOAbJ; Yjyhq0bI5FpZ++) {
        if (aGOsLxWVCo4d[Yjyhq0bI5FpZ].mpqzMW != aGOsLxWVCo4d[Yjyhq0bI5FpZ -(769 - 768)].mpqzMW) {
            for (ue1X57Hg6Z = (242 - 242); obsyh7Q2BGW4 > ue1X57Hg6Z; ue1X57Hg6Z++)
                if (XULs0teOrl[ue1X57Hg6Z].mpqzMW == aGOsLxWVCo4d[Yjyhq0bI5FpZ].mpqzMW)
                    printf ("%s\n", XULs0teOrl[ue1X57Hg6Z].D2U6ctRSP05);
        }
    }
    {
        Yjyhq0bI5FpZ = 90 - 90;
        while (Yjyhq0bI5FpZ < NW4lCvJg) {
            printf ("%s\n", pay[Yjyhq0bI5FpZ].D2U6ctRSP05);
            Yjyhq0bI5FpZ++;
        }
    }
}

