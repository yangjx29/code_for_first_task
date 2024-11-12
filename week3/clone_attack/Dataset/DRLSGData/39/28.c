void  main () {
    struct   student {
        char hrIMQJZqXkW [20];
        int J5LAGe;
        int JALeKo7;
        char U2oVaXB3Z0O7;
        char etF8D4Kmaw5T;
        int lzW1orHLR;
        int K97bnDEUKxH;
    }
    EuGBbt3U [100];
    struct   student *p;
    int OMY3cd72, OHel5a9DXUhb, uycoAfdKk, CcXMsv;
    scanf ("%d", &OMY3cd72);
    for (OHel5a9DXUhb = 0; OHel5a9DXUhb < OMY3cd72; OHel5a9DXUhb = OHel5a9DXUhb +1)
        scanf ("%s %d %d %c %c %d", &EuGBbt3U[OHel5a9DXUhb].hrIMQJZqXkW, &EuGBbt3U[OHel5a9DXUhb].J5LAGe, &EuGBbt3U[OHel5a9DXUhb].JALeKo7, &EuGBbt3U[OHel5a9DXUhb].U2oVaXB3Z0O7, &EuGBbt3U[OHel5a9DXUhb].etF8D4Kmaw5T, &EuGBbt3U[OHel5a9DXUhb].lzW1orHLR);
    {
        OHel5a9DXUhb = 0;
        for (; OHel5a9DXUhb < OMY3cd72;) {
            EuGBbt3U[OHel5a9DXUhb].K97bnDEUKxH = 0;
            if (80 < EuGBbt3U[OHel5a9DXUhb].J5LAGe && 1 <= EuGBbt3U[OHel5a9DXUhb].lzW1orHLR)
                EuGBbt3U[OHel5a9DXUhb].K97bnDEUKxH = EuGBbt3U[OHel5a9DXUhb].K97bnDEUKxH + 8000;
            if (EuGBbt3U[OHel5a9DXUhb].J5LAGe > 85 && EuGBbt3U[OHel5a9DXUhb].JALeKo7 > 80)
                EuGBbt3U[OHel5a9DXUhb].K97bnDEUKxH = EuGBbt3U[OHel5a9DXUhb].K97bnDEUKxH + 4000;
            if (EuGBbt3U[OHel5a9DXUhb].J5LAGe > 90)
                EuGBbt3U[OHel5a9DXUhb].K97bnDEUKxH = EuGBbt3U[OHel5a9DXUhb].K97bnDEUKxH + 2000;
            if (EuGBbt3U[OHel5a9DXUhb].J5LAGe > 85 && !('Y' != EuGBbt3U[OHel5a9DXUhb].etF8D4Kmaw5T))
                EuGBbt3U[OHel5a9DXUhb].K97bnDEUKxH = EuGBbt3U[OHel5a9DXUhb].K97bnDEUKxH + 1000;
            if (EuGBbt3U[OHel5a9DXUhb].JALeKo7 > 80 && EuGBbt3U[OHel5a9DXUhb].U2oVaXB3Z0O7 == 'Y')
                EuGBbt3U[OHel5a9DXUhb].K97bnDEUKxH = EuGBbt3U[OHel5a9DXUhb].K97bnDEUKxH + 850;
            OHel5a9DXUhb = OHel5a9DXUhb +1;
        }
    }
    {
        OHel5a9DXUhb = 0;
        uycoAfdKk = 0;
        while (OHel5a9DXUhb < OMY3cd72) {
            uycoAfdKk = uycoAfdKk + EuGBbt3U[OHel5a9DXUhb].K97bnDEUKxH;
            OHel5a9DXUhb = OHel5a9DXUhb +1;
        }
    }
    for (OHel5a9DXUhb = 1, p = &EuGBbt3U[0]; OHel5a9DXUhb < OMY3cd72; OHel5a9DXUhb = OHel5a9DXUhb +1) {
        if (EuGBbt3U[OHel5a9DXUhb].K97bnDEUKxH > p->K97bnDEUKxH)
            p = EuGBbt3U +OHel5a9DXUhb;
    }
    printf ("%s\n%d\n%d\n", p->hrIMQJZqXkW, p->K97bnDEUKxH, uycoAfdKk);
}

