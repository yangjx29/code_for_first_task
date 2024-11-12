main () {
    int C23adtlxB, GX8kOqfK6d = (489 - 489), jeu5Hq, IfWQ58 = (971 - 971);
    int **cvfiG5TCK = (int **) calloc (C23adtlxB, sizeof (int *));
    int zTmHjSwCR, q1uyKlkS, l5tenpkU17Pu, tgbOFAR;
    scanf ("%d", &C23adtlxB);
    for (l5tenpkU17Pu = (529 - 529); C23adtlxB > l5tenpkU17Pu; l5tenpkU17Pu++) {
        for (zTmHjSwCR = (668 - 668); C23adtlxB > zTmHjSwCR; zTmHjSwCR++) {
            cvfiG5TCK[zTmHjSwCR] = (int *) calloc (C23adtlxB, sizeof (int));
            for (q1uyKlkS = (787 - 787); C23adtlxB > q1uyKlkS; q1uyKlkS++) {
                scanf ("%d", &cvfiG5TCK[zTmHjSwCR][q1uyKlkS]);
                if (GX8kOqfK6d < cvfiG5TCK[zTmHjSwCR][q1uyKlkS])
                    GX8kOqfK6d = cvfiG5TCK[zTmHjSwCR][q1uyKlkS];
            }
        }
        jeu5Hq = GX8kOqfK6d;
        for (tgbOFAR = (183 - 183); C23adtlxB -(67 - 66) > tgbOFAR; tgbOFAR++) {
            for (zTmHjSwCR = (461 - 461); C23adtlxB -tgbOFAR > zTmHjSwCR; zTmHjSwCR++) {
                for (q1uyKlkS = (189 - 189); C23adtlxB -tgbOFAR > q1uyKlkS; q1uyKlkS++) {
                    if (jeu5Hq > cvfiG5TCK[zTmHjSwCR][q1uyKlkS])
                        jeu5Hq = cvfiG5TCK[zTmHjSwCR][q1uyKlkS];
                }
                for (q1uyKlkS = (303 - 303); C23adtlxB -tgbOFAR > q1uyKlkS; q1uyKlkS++) {
                    cvfiG5TCK[zTmHjSwCR][q1uyKlkS] = cvfiG5TCK[zTmHjSwCR][q1uyKlkS] - jeu5Hq;
                }
                jeu5Hq = GX8kOqfK6d;
            }
            for (q1uyKlkS = (346 - 346); C23adtlxB -tgbOFAR > q1uyKlkS; q1uyKlkS++) {
                for (zTmHjSwCR = (976 - 976); C23adtlxB -tgbOFAR > zTmHjSwCR; zTmHjSwCR++) {
                    if (jeu5Hq > cvfiG5TCK[zTmHjSwCR][q1uyKlkS])
                        jeu5Hq = cvfiG5TCK[zTmHjSwCR][q1uyKlkS];
                }
                for (zTmHjSwCR = (727 - 727); C23adtlxB -tgbOFAR > zTmHjSwCR; zTmHjSwCR++) {
                    cvfiG5TCK[zTmHjSwCR][q1uyKlkS] = cvfiG5TCK[zTmHjSwCR][q1uyKlkS] - jeu5Hq;
                }
                jeu5Hq = GX8kOqfK6d;
            }
            IfWQ58 = cvfiG5TCK[(176 - 175)][(150 - 149)] + IfWQ58;
            for (zTmHjSwCR = (552 - 552); C23adtlxB -tgbOFAR > zTmHjSwCR; zTmHjSwCR++) {
                for (q1uyKlkS = (806 - 805); C23adtlxB -tgbOFAR - (175 - 174) > q1uyKlkS; q1uyKlkS++) {
                    cvfiG5TCK[zTmHjSwCR][q1uyKlkS] = cvfiG5TCK[zTmHjSwCR][q1uyKlkS + (319 - 318)];
                }
            }
            for (zTmHjSwCR = (108 - 107); C23adtlxB -tgbOFAR - 1 > zTmHjSwCR; zTmHjSwCR++) {
                for (q1uyKlkS = 0; q1uyKlkS < C23adtlxB -tgbOFAR; q1uyKlkS++)
                    cvfiG5TCK[zTmHjSwCR][q1uyKlkS] = cvfiG5TCK[zTmHjSwCR + 1][q1uyKlkS];
            }
        }
        printf ("%d\n", IfWQ58);
        IfWQ58 = 0;
    }
}

