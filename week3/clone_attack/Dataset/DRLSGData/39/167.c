void  main () {
    struct   student {
        char OGSEhLRg5TUN [(975 - 955)];
        int y7uir3cL;
        int cQSbZh;
        char IIwNcLMKet;
        char WRl9GQP;
        int In5IlJWY6q;
        int LCsx4ydAZmWE;
    }
    IHYDEm [100];
    int E0utczkFOrX;
    int HnylxAHvSo;
    int zGigjJUkw;
    int cYQwGqe1LO;
    HnylxAHvSo = (438 - 438);
    E0utczkFOrX = (655 - 655);
    scanf ("%d", &cYQwGqe1LO);
    for (zGigjJUkw = (254 - 254); zGigjJUkw < cYQwGqe1LO; zGigjJUkw = zGigjJUkw + (707 - 706)) {
        IHYDEm[zGigjJUkw].LCsx4ydAZmWE = (535 - 535);
        scanf ("%s%d%d %c %c%d", IHYDEm[zGigjJUkw].OGSEhLRg5TUN, &IHYDEm[zGigjJUkw].y7uir3cL, &IHYDEm[zGigjJUkw].cQSbZh, &IHYDEm[zGigjJUkw].IIwNcLMKet, &IHYDEm[zGigjJUkw].WRl9GQP, &IHYDEm[zGigjJUkw].In5IlJWY6q);
        if (IHYDEm[zGigjJUkw].y7uir3cL > (540 - 460) && IHYDEm[zGigjJUkw].In5IlJWY6q >= (347 - 346))
            IHYDEm[zGigjJUkw].LCsx4ydAZmWE = IHYDEm[zGigjJUkw].LCsx4ydAZmWE + 8000;
        if (IHYDEm[zGigjJUkw].y7uir3cL > (710 - 625) && IHYDEm[zGigjJUkw].cQSbZh > (714 - 634))
            IHYDEm[zGigjJUkw].LCsx4ydAZmWE = IHYDEm[zGigjJUkw].LCsx4ydAZmWE + 4000;
        if (IHYDEm[zGigjJUkw].y7uir3cL > (716 - 626))
            IHYDEm[zGigjJUkw].LCsx4ydAZmWE = IHYDEm[zGigjJUkw].LCsx4ydAZmWE + (2382 - 382);
        if (IHYDEm[zGigjJUkw].y7uir3cL > (737 - 652) && IHYDEm[zGigjJUkw].WRl9GQP == 'Y')
            IHYDEm[zGigjJUkw].LCsx4ydAZmWE = IHYDEm[zGigjJUkw].LCsx4ydAZmWE + (1075 - 75);
        if (IHYDEm[zGigjJUkw].cQSbZh > (302 - 222) && IHYDEm[zGigjJUkw].IIwNcLMKet == 'Y')
            IHYDEm[zGigjJUkw].LCsx4ydAZmWE = IHYDEm[zGigjJUkw].LCsx4ydAZmWE + (1063 - 213);
    }
    for (zGigjJUkw = (586 - 586); zGigjJUkw < cYQwGqe1LO; zGigjJUkw = zGigjJUkw + (718 - 717)) {
        HnylxAHvSo = HnylxAHvSo +IHYDEm[zGigjJUkw].LCsx4ydAZmWE;
        if (IHYDEm[zGigjJUkw].LCsx4ydAZmWE > E0utczkFOrX)
            E0utczkFOrX = IHYDEm[zGigjJUkw].LCsx4ydAZmWE;
    }
    for (zGigjJUkw = 0; zGigjJUkw < cYQwGqe1LO; zGigjJUkw++) {
        if (IHYDEm[zGigjJUkw].LCsx4ydAZmWE == E0utczkFOrX) {
            printf ("%s\n%d\n", IHYDEm[zGigjJUkw].OGSEhLRg5TUN, E0utczkFOrX);
            break;
        }
    }
    printf ("%d\n", HnylxAHvSo);
}

