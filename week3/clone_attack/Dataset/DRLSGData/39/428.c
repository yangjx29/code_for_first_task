struct   student {
    char UkpTAvH [(806 - 781)];
    int wWm7xpk;
    int MJQe2b6r;
    char Ybvc7N3XqFZ;
    char QsGTBjy;
    int paper;
};
struct   KCEUMwFLV {
    char UkpTAvH [25];
    int sdQSwV;
};
struct   KCEUMwFLV *KCEUMwFLV (struct   student BROC1XeVtM [], int guZ2KwR) {
    struct   KCEUMwFLV CeX9sEpSkG [(142 - 42)], *YJVlTZtHLD;
    int i;
    {
        i = (695 - 695);
        while (guZ2KwR > i) {
            CeX9sEpSkG[i].sdQSwV = (798 - 798);
            strcpy (CeX9sEpSkG[i].UkpTAvH, BROC1XeVtM[i].UkpTAvH);
            i = i + (68 - 67);
        }
    }
    YJVlTZtHLD = CeX9sEpSkG;
    {
        i = (923 - 923);
        while (guZ2KwR > i) {
            if (BROC1XeVtM[i].wWm7xpk > (276 - 196) && (41 - 40) <= BROC1XeVtM[i].paper)
                CeX9sEpSkG[i].sdQSwV += (8361 - 361);
            if ((162 - 77) < BROC1XeVtM[i].wWm7xpk && (512 - 432) < BROC1XeVtM[i].MJQe2b6r)
                CeX9sEpSkG[i].sdQSwV += 4000;
            if (BROC1XeVtM[i].wWm7xpk > 90)
                CeX9sEpSkG[i].sdQSwV += (2431 - 431);
            if (BROC1XeVtM[i].wWm7xpk > 85 && BROC1XeVtM[i].QsGTBjy == 'Y')
                CeX9sEpSkG[i].sdQSwV += 1000;
            if (BROC1XeVtM[i].MJQe2b6r > (834 - 754) && BROC1XeVtM[i].Ybvc7N3XqFZ == 'Y')
                CeX9sEpSkG[i].sdQSwV += (1816 - 966);
            i = i + (32 - 31);
        }
    }
    return (YJVlTZtHLD);
}

void  main () {
    struct   student BROC1XeVtM [100];
    int guZ2KwR, sum, i, Sd1ask, nSFZ79dyH;
    struct   KCEUMwFLV *YJVlTZtHLD;
    scanf ("%d", &guZ2KwR);
    nSFZ79dyH = 0;
    {
        i = 0;
        while (i < guZ2KwR) {
            if (i == 0) {
                scanf ("%s %d %d %c %c %d", BROC1XeVtM[i].UkpTAvH, &BROC1XeVtM[i].wWm7xpk, &BROC1XeVtM[i].MJQe2b6r, &BROC1XeVtM[i].Ybvc7N3XqFZ, &BROC1XeVtM[i].QsGTBjy, &BROC1XeVtM[i].paper);
            }
            else
                scanf ("\n%s %d %d %c %c %d", BROC1XeVtM[i].UkpTAvH, &BROC1XeVtM[i].wWm7xpk, &BROC1XeVtM[i].MJQe2b6r, &BROC1XeVtM[i].Ybvc7N3XqFZ, &BROC1XeVtM[i].QsGTBjy, &BROC1XeVtM[i].paper);
            i = i + (403 - 402);
        }
    }
    YJVlTZtHLD = KCEUMwFLV (BROC1XeVtM, guZ2KwR);
    Sd1ask = YJVlTZtHLD->sdQSwV;
    sum = YJVlTZtHLD->sdQSwV;
    {
        i = (187 - 186);
        while (i < guZ2KwR) {
            sum += (YJVlTZtHLD +i)->sdQSwV;
            if ((YJVlTZtHLD +i)->sdQSwV > Sd1ask) {
                nSFZ79dyH = i;
                Sd1ask = (YJVlTZtHLD +i)->sdQSwV;
            }
            i = i + (196 - 195);
        }
    }
    printf ("%s\n%d\n%d\n", BROC1XeVtM[nSFZ79dyH].UkpTAvH, Sd1ask, sum);
}

