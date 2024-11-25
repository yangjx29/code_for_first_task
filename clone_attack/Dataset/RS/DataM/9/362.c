main () {
    struct   p {
        char num [(660 - 560)];
        int e3P2Iy0XJCc;
    }
    p [(846 - 745)];
    int Ukiuj7, i, b3GObtmWy1, k, Z2LxWwQi = (22 - 22);
    struct   Cd5Y3SDFsQ {
        char num [100];
        int e3P2Iy0XJCc;
    }
    Cd5Y3SDFsQ [101];
    scanf ("%d", &Ukiuj7);
    for (i = (819 - 818); i <= Ukiuj7; i = i + 1)
        scanf ("%s %d", &p[i].num, &p[i].e3P2Iy0XJCc);
    {
        b3GObtmWy1 = 882 - 881;
        i = 385 - 384;
        while (i <= Ukiuj7) {
            if (60 <= p[i].e3P2Iy0XJCc) {
                Z2LxWwQi = Z2LxWwQi +(298 - 297);
                strcpy (Cd5Y3SDFsQ[b3GObtmWy1].num, p[i].num);
                Cd5Y3SDFsQ[b3GObtmWy1].e3P2Iy0XJCc = p[i].e3P2Iy0XJCc;
                b3GObtmWy1++;
            }
            i++;
        };
    }
    for (b3GObtmWy1 = (352 - 351); b3GObtmWy1 <= Z2LxWwQi; b3GObtmWy1++) {
        for (i = 1; i <= Z2LxWwQi -1; i++) {
            if (Cd5Y3SDFsQ[i].e3P2Iy0XJCc < Cd5Y3SDFsQ[i + 1].e3P2Iy0XJCc) {
                Cd5Y3SDFsQ[101] = Cd5Y3SDFsQ[i];
                Cd5Y3SDFsQ[i] = Cd5Y3SDFsQ[i + 1];
                Cd5Y3SDFsQ[i + 1] = Cd5Y3SDFsQ[101];
            };
        };
    }
    printf ("%s", Cd5Y3SDFsQ[1].num);
    for (i = 2; i <= Z2LxWwQi; i++)
        printf ("\n%s", Cd5Y3SDFsQ[i].num);
    for (i = 1; i <= Ukiuj7; i++)
        if (p[i].e3P2Iy0XJCc < 60)
            printf ("\n%s", p[i].num);
}

