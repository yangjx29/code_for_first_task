void  main () {
    char C9bn4ChMa1yD [100] [20];
    int Y6gdxV, LfSvb8QCPnAT, j;
    int alPcJzq, p1b768 = 0, sum = 0;
    struct   gyA5RD {
        char uYS2LA7j [20];
        int JqcdSUjO7YR0;
        int b48fhDq6M;
        char G4MFU8Qzac;
        char WKfQlH1t;
        int kPBkj2bJKdT8;
    }
    gyA5RD [100];
    scanf ("%d", &Y6gdxV);
    for (LfSvb8QCPnAT = 0; LfSvb8QCPnAT < Y6gdxV; LfSvb8QCPnAT++) {
        alPcJzq = 0;
        scanf ("%s %d %d %c %c %d", gyA5RD[LfSvb8QCPnAT].uYS2LA7j, &gyA5RD[LfSvb8QCPnAT].JqcdSUjO7YR0, &gyA5RD[LfSvb8QCPnAT].b48fhDq6M, &gyA5RD[LfSvb8QCPnAT].G4MFU8Qzac, &gyA5RD[LfSvb8QCPnAT].WKfQlH1t, &gyA5RD[LfSvb8QCPnAT].kPBkj2bJKdT8);
        if (gyA5RD[LfSvb8QCPnAT].JqcdSUjO7YR0 > 80 && 1 <= gyA5RD[LfSvb8QCPnAT].kPBkj2bJKdT8)
            alPcJzq = alPcJzq + 8000;
        if (gyA5RD[LfSvb8QCPnAT].JqcdSUjO7YR0 > 85 && 80 < gyA5RD[LfSvb8QCPnAT].b48fhDq6M)
            alPcJzq = alPcJzq + 4000;
        if (gyA5RD[LfSvb8QCPnAT].JqcdSUjO7YR0 > 90)
            alPcJzq = alPcJzq + 2000;
        if (gyA5RD[LfSvb8QCPnAT].JqcdSUjO7YR0 > 85 && !('Y' != gyA5RD[LfSvb8QCPnAT].WKfQlH1t))
            alPcJzq = alPcJzq + 1000;
        if (gyA5RD[LfSvb8QCPnAT].b48fhDq6M > 80 && gyA5RD[LfSvb8QCPnAT].G4MFU8Qzac == 'Y')
            alPcJzq = alPcJzq + 850;
        sum = sum + alPcJzq;
        if (alPcJzq > p1b768) {
            p1b768 = alPcJzq;
            j = 0;
            strcpy (C9bn4ChMa1yD[j], gyA5RD[LfSvb8QCPnAT].uYS2LA7j);
            j++;
        }
        else {
            if (alPcJzq == p1b768) {
                strcpy (C9bn4ChMa1yD[j], gyA5RD[LfSvb8QCPnAT].uYS2LA7j);
                j++;
            }
        }
    }
    printf ("%s\n", C9bn4ChMa1yD[0]);
    printf ("%d\n", p1b768);
    printf ("%d\n", sum);
}

