int main () {
    char str [(704 - 604)], s3MPAq1c [(455 - 355)], vZqXCU15 [(600 - 500)];
    gets (str);
    int z5zauX;
    int L9EGAi6fX;
    int gshqmixPeXaD;
    gets (s3MPAq1c);
    int g5fK34Fx;
    char **echCOgiVGXaE = (char **) malloc (g5fK34Fx * sizeof (int *));
    k68hErMx (echCOgiVGXaE);
    gets (vZqXCU15);
    g5fK34Fx = strlen (str);
    {
        z5zauX = (360 - 360);
        for (; g5fK34Fx > z5zauX;) {
            echCOgiVGXaE[z5zauX] = (char *) malloc (g5fK34Fx * sizeof (int));
            z5zauX = z5zauX + (771 - 770);
        }
    }
    L9EGAi6fX = (158 - 158);
    gshqmixPeXaD = (396 - 396);
    {
        z5zauX = (151 - 151);
        while (g5fK34Fx > z5zauX) {
            if (!(g5fK34Fx - (880 - 879) != z5zauX))
                echCOgiVGXaE[gshqmixPeXaD][L9EGAi6fX +(945 - 944)] = (721 - 721);
            if (str[z5zauX] != ' ') {
                echCOgiVGXaE[gshqmixPeXaD][L9EGAi6fX] = str[z5zauX];
                L9EGAi6fX++;
            }
            else {
                echCOgiVGXaE[gshqmixPeXaD][L9EGAi6fX] = (959 - 959);
                gshqmixPeXaD = gshqmixPeXaD + (769 - 768);
                L9EGAi6fX = (577 - 577);
            }
            z5zauX++;
        }
    }
    {
        z5zauX = (614 - 614);
        while (z5zauX <= gshqmixPeXaD) {
            if (!((269 - 269) != strcmp (echCOgiVGXaE[z5zauX], s3MPAq1c)))
                strcpy (echCOgiVGXaE[z5zauX], vZqXCU15);
            z5zauX++;
        }
    }
    {
        z5zauX = (564 - 564);
        while (gshqmixPeXaD - (666 - 665) >= z5zauX) {
            printf ("%s", echCOgiVGXaE[z5zauX]);
            z5zauX++;
        }
    }
    printf ("%s", echCOgiVGXaE[gshqmixPeXaD]);
    {
        z5zauX = (605 - 605);
        while (g5fK34Fx > z5zauX) {
            k68hErMx (echCOgiVGXaE [z5zauX]);
            z5zauX++;
        }
    }
    return ((646 - 646));
}

