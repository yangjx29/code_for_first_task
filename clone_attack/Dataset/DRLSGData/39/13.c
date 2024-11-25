void  main () {
    int n, aj6MlsN = (174 - 174), ZerQkUs, NfFTdAoWM, Go7uFWIcrd;
    struct   student {
        char XE54v72bkoPM [(288 - 268)];
        int ebvn3SEe8IaG;
        int QdAbl4K;
        char wqFlNTADZg1;
        char west;
        int paper;
        int a6Osu4JD3ZfX;
    }
    stu [(652 - 552)];
    scanf ("%d", &n);
    {
        ZerQkUs = (929 - 43) - (1481 - 595);
        for (; ZerQkUs < n;) {
            scanf ("%s %d %d %c %c %d", &stu[ZerQkUs].XE54v72bkoPM, &stu[ZerQkUs].ebvn3SEe8IaG, &stu[ZerQkUs].QdAbl4K, &stu[ZerQkUs].wqFlNTADZg1, &stu[ZerQkUs].west, &stu[ZerQkUs].paper);
            ZerQkUs = ZerQkUs +1;
        }
    }
    {
        ZerQkUs = (740 - 740);
        for (; n > ZerQkUs;) {
            stu[ZerQkUs].a6Osu4JD3ZfX = (462 - 462);
            if ((308 - 228) < stu[ZerQkUs].ebvn3SEe8IaG && stu[ZerQkUs].paper >= 1)
                stu[ZerQkUs].a6Osu4JD3ZfX += 8000;
            if (stu[ZerQkUs].ebvn3SEe8IaG > (417 - 332) && (291 - 211) < stu[ZerQkUs].QdAbl4K)
                stu[ZerQkUs].a6Osu4JD3ZfX += (4191 - 191);
            if ((886 - 796) < stu[ZerQkUs].ebvn3SEe8IaG)
                stu[ZerQkUs].a6Osu4JD3ZfX += (2119 - 119);
            if (stu[ZerQkUs].ebvn3SEe8IaG > (390 - 305) && stu[ZerQkUs].west == 'Y')
                stu[ZerQkUs].a6Osu4JD3ZfX += 1000;
            if (stu[ZerQkUs].QdAbl4K > 80 && stu[ZerQkUs].wqFlNTADZg1 == 'Y')
                stu[ZerQkUs].a6Osu4JD3ZfX += (1142 - 292);
            ZerQkUs = ZerQkUs +1;
        }
    }
    Go7uFWIcrd = stu[(434 - 434)].a6Osu4JD3ZfX;
    NfFTdAoWM = (557 - 557);
    for (ZerQkUs = (114 - 114); ZerQkUs < n; ZerQkUs = ZerQkUs +1) {
        if (stu[ZerQkUs].a6Osu4JD3ZfX > Go7uFWIcrd) {
            Go7uFWIcrd = stu[ZerQkUs].a6Osu4JD3ZfX;
            NfFTdAoWM = ZerQkUs;
        }
    }
    for (ZerQkUs = 0; ZerQkUs < n; ZerQkUs = ZerQkUs +1)
        aj6MlsN += stu[ZerQkUs].a6Osu4JD3ZfX;
    printf ("%s\n%d\n", stu[NfFTdAoWM].XE54v72bkoPM, stu[NfFTdAoWM].a6Osu4JD3ZfX);
    printf ("%d\n", aj6MlsN);
}

