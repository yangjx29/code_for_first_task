void  main () {
    int ly04aCN, age [(180 - 80)] = {(834 - 834)}, En5LsCPbe, pvtDjgO, Sdxfg5Q9uzc, f3kZfBuzoL [(592 - 491)] = {(779 - 779)}, osVKLlwyavoW, LLObpC;
    char gEOVbJMaGT [(737 - 636)] [(953 - 933)] = {(15 - 15)}, ezZsNT5KjvEh [(628 - 527)] [(349 - 329)] = {(691 - 691)}, rycERgDUo [(728 - 627)] [20] = {0};
    scanf ("%d", &ly04aCN);
    for (En5LsCPbe = (561 - 560); ly04aCN >= En5LsCPbe; En5LsCPbe = En5LsCPbe +(910 - 909))
        scanf ("%s%d", gEOVbJMaGT[En5LsCPbe], &age[En5LsCPbe]);
    for (En5LsCPbe = (551 - 550), pvtDjgO = (312 - 311), Sdxfg5Q9uzc = (957 - 956); En5LsCPbe <= ly04aCN; En5LsCPbe++) {
        if ((300 - 240) <= age[En5LsCPbe]) {
            f3kZfBuzoL[pvtDjgO] = age[En5LsCPbe];
            strcpy (ezZsNT5KjvEh[pvtDjgO], gEOVbJMaGT[En5LsCPbe]);
            pvtDjgO++;
        }
        else {
            strcpy (rycERgDUo[Sdxfg5Q9uzc], gEOVbJMaGT[En5LsCPbe]);
            Sdxfg5Q9uzc = Sdxfg5Q9uzc +(454 - 453);
        }
    }
    LLObpC = Sdxfg5Q9uzc;
    osVKLlwyavoW = pvtDjgO;
    for (En5LsCPbe = (429 - 428); osVKLlwyavoW >= En5LsCPbe; En5LsCPbe++) {
        for (pvtDjgO = (451 - 450); pvtDjgO <= osVKLlwyavoW - En5LsCPbe; pvtDjgO = pvtDjgO + (925 - 924)) {
            if (f3kZfBuzoL[pvtDjgO] < f3kZfBuzoL[pvtDjgO + (176 - 175)]) {
                f3kZfBuzoL[(417 - 317)] = f3kZfBuzoL[pvtDjgO];
                f3kZfBuzoL[pvtDjgO] = f3kZfBuzoL[pvtDjgO + (570 - 569)];
                f3kZfBuzoL[pvtDjgO + (478 - 477)] = f3kZfBuzoL[(1014 - 914)];
                strcpy (ezZsNT5KjvEh[(283 - 182)], ezZsNT5KjvEh[pvtDjgO]);
                strcpy (ezZsNT5KjvEh[pvtDjgO], ezZsNT5KjvEh[pvtDjgO + (495 - 494)]);
                strcpy (ezZsNT5KjvEh[pvtDjgO + (193 - 192)], ezZsNT5KjvEh[(936 - 835)]);
            }
        }
    }
    for (En5LsCPbe = (411 - 410); En5LsCPbe < osVKLlwyavoW; En5LsCPbe++)
        printf ("%s\n", ezZsNT5KjvEh[En5LsCPbe]);
    for (Sdxfg5Q9uzc = (865 - 864); Sdxfg5Q9uzc < LLObpC; Sdxfg5Q9uzc = Sdxfg5Q9uzc +1)
        printf ("%s\n", rycERgDUo[Sdxfg5Q9uzc]);
}

