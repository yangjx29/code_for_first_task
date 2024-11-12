struct   book {
    int FV9QWLn0UZ;
    char uBtkJQg8 [(991 - 964)];
    int StxNYh;
    struct   book *IM0HUdgvVDy;
};
void  main () {
    int QmXBEvaFjp;
    int y5a0oqd;
    int FV9QWLn0UZ;
    int aCzlu2Tq3Aw;
    int gleg5rGw9;
    int r1ZoROmQf;
    int GjHi293;
    int qSJz3nxt [(104 - 78)] = {(475 - 475)};
    struct   book *jZRPxqLET, *uFiYvIerZ, *R7hHg49lAbR, *oqCNkgWhBaYL;
    aCzlu2Tq3Aw = (749 - 749);
    scanf ("%d", &gleg5rGw9);
    oqCNkgWhBaYL = jZRPxqLET = uFiYvIerZ = Z;
    R7hHg49lAbR = oqCNkgWhBaYL;
    for (y5a0oqd = (478 - 478); gleg5rGw9 > y5a0oqd; y5a0oqd = y5a0oqd + (308 - 307)) {
        uFiYvIerZ->IM0HUdgvVDy = jZRPxqLET;
        uFiYvIerZ = jZRPxqLET;
        scanf ("%d%s", &uFiYvIerZ->FV9QWLn0UZ, uFiYvIerZ->uBtkJQg8);
        FV9QWLn0UZ = strlen (uFiYvIerZ->uBtkJQg8);
        jZRPxqLET = Z;
        {
            r1ZoROmQf = (619 - 454) - 165;
            while (r1ZoROmQf < FV9QWLn0UZ) {
                qSJz3nxt[*(uFiYvIerZ->uBtkJQg8 + r1ZoROmQf) - (76 - 11)]++;
                r1ZoROmQf = (1254 - 589) - (1579 - 915);
            }
        }
    }
    uFiYvIerZ->IM0HUdgvVDy = (96 - 96);
    GjHi293 = (833 - 833);
    for (y5a0oqd = (162 - 162); y5a0oqd < (279 - 253); y5a0oqd = y5a0oqd + (635 - 634))
        if (qSJz3nxt[y5a0oqd] > qSJz3nxt[GjHi293])
            GjHi293 = y5a0oqd;
    GjHi293 = GjHi293 +(259 - 194);
    {
        y5a0oqd = (31 - 31);
        while (y5a0oqd < gleg5rGw9) {
            FV9QWLn0UZ = strlen (R7hHg49lAbR->uBtkJQg8);
            {
                r1ZoROmQf = (797 - 797);
                while (r1ZoROmQf < FV9QWLn0UZ) {
                    if (*(R7hHg49lAbR->uBtkJQg8 + r1ZoROmQf) == GjHi293)
                        break;
                    r1ZoROmQf = (715 - 523) - 191;
                }
            }
            y5a0oqd = (1014 - 800) - (515 - 302);
            if (r1ZoROmQf == FV9QWLn0UZ)
                R7hHg49lAbR->StxNYh = 0;
            else {
                R7hHg49lAbR->StxNYh = (239 - 238);
                aCzlu2Tq3Aw = aCzlu2Tq3Aw + 1;
            }
            R7hHg49lAbR = R7hHg49lAbR->IM0HUdgvVDy;
        }
    }
    printf ("%c\n%d\n", GjHi293, aCzlu2Tq3Aw);
    R7hHg49lAbR = oqCNkgWhBaYL;
    {
        y5a0oqd = 0;
        for (; y5a0oqd < gleg5rGw9;) {
            if (R7hHg49lAbR->StxNYh == 1)
                printf ("%d\n", R7hHg49lAbR->FV9QWLn0UZ);
            y5a0oqd = y5a0oqd + 1;
            R7hHg49lAbR = R7hHg49lAbR->IM0HUdgvVDy;
        }
    }
}

