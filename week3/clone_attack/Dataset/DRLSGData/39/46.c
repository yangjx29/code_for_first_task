struct   student {
    char GYZ9oTC [100];
    int OHEZVMlxs;
    int GbtWvIu5i;
    char iQpekyLux;
    char t1tgWPbyXAN;
    int tZxOAes;
};
void  main () {
    int ToXROcgL3E, xxy1kEOod4ST, cpBIxfkjwAiV, inIPyLz0CiJX [101] [6], JYB3XZ, Y2qKSNwRcp = 0;
    struct   student I1otW9ZaB8 [101];
    struct   student *FQop5UZi;
    long  int XDG9ZhF = 0;
    scanf ("%d\n", &ToXROcgL3E);
    {
        FQop5UZi = I1otW9ZaB8;
        while (I1otW9ZaB8 +ToXROcgL3E > FQop5UZi) {
            scanf ("%s %d %d %c %c %d", FQop5UZi->GYZ9oTC, &FQop5UZi->OHEZVMlxs, &FQop5UZi->GbtWvIu5i, &FQop5UZi->iQpekyLux, &FQop5UZi->t1tgWPbyXAN, &FQop5UZi->tZxOAes);
            FQop5UZi = FQop5UZi +1;
        };
    }
    for (xxy1kEOod4ST = 0; xxy1kEOod4ST < ToXROcgL3E; xxy1kEOod4ST = xxy1kEOod4ST + 1) {
        cpBIxfkjwAiV = 0;
        while (6 > cpBIxfkjwAiV) {
            inIPyLz0CiJX[xxy1kEOod4ST][cpBIxfkjwAiV] = 0;
            cpBIxfkjwAiV = cpBIxfkjwAiV + 1;
        };
    }
    {
        xxy1kEOod4ST = 0;
        while (xxy1kEOod4ST < ToXROcgL3E) {
            if (I1otW9ZaB8[xxy1kEOod4ST].OHEZVMlxs > 80 && I1otW9ZaB8[xxy1kEOod4ST].tZxOAes >= 1)
                inIPyLz0CiJX[xxy1kEOod4ST][0] = 8000;
            if (I1otW9ZaB8[xxy1kEOod4ST].OHEZVMlxs > 85 && I1otW9ZaB8[xxy1kEOod4ST].GbtWvIu5i > 80)
                inIPyLz0CiJX[xxy1kEOod4ST][1] = 4000;
            if (I1otW9ZaB8[xxy1kEOod4ST].OHEZVMlxs > 90)
                inIPyLz0CiJX[xxy1kEOod4ST][2] = 2000;
            if (I1otW9ZaB8[xxy1kEOod4ST].OHEZVMlxs > 85 && I1otW9ZaB8[xxy1kEOod4ST].t1tgWPbyXAN == 'Y')
                inIPyLz0CiJX[xxy1kEOod4ST][3] = 1000;
            if (I1otW9ZaB8[xxy1kEOod4ST].GbtWvIu5i > 80 && I1otW9ZaB8[xxy1kEOod4ST].iQpekyLux == 'Y')
                inIPyLz0CiJX[xxy1kEOod4ST][4] = 850;
            xxy1kEOod4ST = xxy1kEOod4ST + 1;
        };
    }
    for (xxy1kEOod4ST = 0; xxy1kEOod4ST < ToXROcgL3E; xxy1kEOod4ST = xxy1kEOod4ST + 1) {
        cpBIxfkjwAiV = 4;
        while (cpBIxfkjwAiV >= 0) {
            inIPyLz0CiJX[xxy1kEOod4ST][5] = inIPyLz0CiJX[xxy1kEOod4ST][5] + inIPyLz0CiJX[xxy1kEOod4ST][cpBIxfkjwAiV];
            cpBIxfkjwAiV = cpBIxfkjwAiV - 1;
        };
    }
    JYB3XZ = inIPyLz0CiJX[0][5];
    for (xxy1kEOod4ST = 0; xxy1kEOod4ST < ToXROcgL3E; xxy1kEOod4ST = xxy1kEOod4ST + 1)
        if (inIPyLz0CiJX[xxy1kEOod4ST][5] > JYB3XZ) {
            JYB3XZ = inIPyLz0CiJX[xxy1kEOod4ST][5];
            Y2qKSNwRcp = xxy1kEOod4ST;
        }
    printf ("%s\n%d\n", I1otW9ZaB8[Y2qKSNwRcp].GYZ9oTC, inIPyLz0CiJX[Y2qKSNwRcp][5]);
    for (xxy1kEOod4ST = 0; xxy1kEOod4ST < ToXROcgL3E; xxy1kEOod4ST = xxy1kEOod4ST + 1)
        XDG9ZhF = XDG9ZhF +inIPyLz0CiJX[xxy1kEOod4ST][5];
    printf ("%ld\n", XDG9ZhF);
}

