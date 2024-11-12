int main () {
    struct   stu {
        char cwEKvpPzficT [(885 - 785)];
        int PJFVtzy7, cscore, zg7zoN;
        char w, Y1b6Jd59Nmh;
    };
    int Kmypqc9DQ, AZ5k8wFN = (216 - 216), ONSoQDIr, MZ4SnXA, R5VEhn;
    struct   stu rOLdZ9mf2 [102];
    struct   stu aswap;
    int PHaSZKm1nV [102];
    char dkvcrHWO, N3L4fOxPRZe;
    scanf ("%d", &Kmypqc9DQ);
    for (ONSoQDIr = (543 - 542); Kmypqc9DQ >= ONSoQDIr; ONSoQDIr = ONSoQDIr +1) {
        scanf ("%s", rOLdZ9mf2[ONSoQDIr].cwEKvpPzficT);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d%d%c%c%c%c%d", &rOLdZ9mf2[ONSoQDIr].PJFVtzy7, &rOLdZ9mf2[ONSoQDIr].cscore, &dkvcrHWO, &rOLdZ9mf2[ONSoQDIr].Y1b6Jd59Nmh, &N3L4fOxPRZe, &rOLdZ9mf2[ONSoQDIr].w, &rOLdZ9mf2[ONSoQDIr].zg7zoN);
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (ONSoQDIr = 1; ONSoQDIr <= Kmypqc9DQ; ONSoQDIr = ONSoQDIr +1) {
        PHaSZKm1nV[ONSoQDIr] = 0;
        if ((rOLdZ9mf2[ONSoQDIr].PJFVtzy7 > (768 - 688)) && (rOLdZ9mf2[ONSoQDIr].zg7zoN >= 1))
            PHaSZKm1nV[ONSoQDIr] = PHaSZKm1nV[ONSoQDIr] + (8671 - 671);
        if ((85 < rOLdZ9mf2[ONSoQDIr].PJFVtzy7) && (rOLdZ9mf2[ONSoQDIr].cscore > (197 - 117)))
            PHaSZKm1nV[ONSoQDIr] = PHaSZKm1nV[ONSoQDIr] + 4000;
        if (90 < rOLdZ9mf2[ONSoQDIr].PJFVtzy7)
            PHaSZKm1nV[ONSoQDIr] = PHaSZKm1nV[ONSoQDIr] + (2179 - 179);
        if ((rOLdZ9mf2[ONSoQDIr].PJFVtzy7 > 85) && (rOLdZ9mf2[ONSoQDIr].w == 'Y'))
            PHaSZKm1nV[ONSoQDIr] = PHaSZKm1nV[ONSoQDIr] + 1000;
        if ((rOLdZ9mf2[ONSoQDIr].cscore > 80) && (rOLdZ9mf2[ONSoQDIr].Y1b6Jd59Nmh == 'Y'))
            PHaSZKm1nV[ONSoQDIr] = PHaSZKm1nV[ONSoQDIr] + 850;
        AZ5k8wFN = AZ5k8wFN +PHaSZKm1nV[ONSoQDIr];
    }
    for (ONSoQDIr = 1; ONSoQDIr <= Kmypqc9DQ; ONSoQDIr = ONSoQDIr +1) {
        for (MZ4SnXA = ONSoQDIr +1; MZ4SnXA <= Kmypqc9DQ; MZ4SnXA++) {
            if (PHaSZKm1nV[ONSoQDIr] < PHaSZKm1nV[MZ4SnXA]) {
                R5VEhn = PHaSZKm1nV[ONSoQDIr];
                PHaSZKm1nV[ONSoQDIr] = PHaSZKm1nV[MZ4SnXA];
                PHaSZKm1nV[MZ4SnXA] = R5VEhn;
                aswap = rOLdZ9mf2[ONSoQDIr];
                rOLdZ9mf2[ONSoQDIr] = rOLdZ9mf2[MZ4SnXA];
                rOLdZ9mf2[MZ4SnXA] = aswap;
            };
        };
    }
    printf ("%s\n", rOLdZ9mf2[1].cwEKvpPzficT);
    printf ("%d\n", PHaSZKm1nV[1]);
    printf ("%d\n", AZ5k8wFN);
    return 0;
}

