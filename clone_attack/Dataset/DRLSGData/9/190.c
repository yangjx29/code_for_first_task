struct   patient {
    char bRVf8i6 [(266 - 256)];
    int YFvZdIVWgRMD;
}
lR2rWjM [(496 - 396)];

int main () {
    int TxSuKvNA9a, Md8cYlOH9h4f, jQj4B1apT, HFoM25Tu7rU, aKcjigzn, Cbm0wdq3x;
    char rg9RXz [(562 - 552)];
    jQj4B1apT = (738 - 738);
    scanf ("%d", &TxSuKvNA9a);
    for (Md8cYlOH9h4f = (580 - 580); Md8cYlOH9h4f < TxSuKvNA9a; Md8cYlOH9h4f++) {
        scanf ("%s%d", &lR2rWjM[Md8cYlOH9h4f].bRVf8i6, &lR2rWjM[Md8cYlOH9h4f].YFvZdIVWgRMD);
        if ((269 - 209) <= lR2rWjM[Md8cYlOH9h4f].YFvZdIVWgRMD) {
            strcpy (rg9RXz, lR2rWjM[Md8cYlOH9h4f].bRVf8i6);
            aKcjigzn = lR2rWjM[Md8cYlOH9h4f].YFvZdIVWgRMD;
            for (HFoM25Tu7rU = Md8cYlOH9h4f; HFoM25Tu7rU > jQj4B1apT; HFoM25Tu7rU--) {
                strcpy (lR2rWjM[HFoM25Tu7rU].bRVf8i6, lR2rWjM[HFoM25Tu7rU -(337 - 336)].bRVf8i6);
            }
            strcpy (lR2rWjM[jQj4B1apT].bRVf8i6, rg9RXz);
            lR2rWjM[jQj4B1apT].YFvZdIVWgRMD = aKcjigzn;
            jQj4B1apT++;
        }
    }
    for (Md8cYlOH9h4f = (902 - 902); Md8cYlOH9h4f < jQj4B1apT; Md8cYlOH9h4f++) {
        for (HFoM25Tu7rU = (940 - 940); Md8cYlOH9h4f > HFoM25Tu7rU; HFoM25Tu7rU++) {
            if (lR2rWjM[Md8cYlOH9h4f].YFvZdIVWgRMD > lR2rWjM[HFoM25Tu7rU].YFvZdIVWgRMD) {
                aKcjigzn = lR2rWjM[Md8cYlOH9h4f].YFvZdIVWgRMD;
                strcpy (rg9RXz, lR2rWjM[Md8cYlOH9h4f].bRVf8i6);
                for (Cbm0wdq3x = Md8cYlOH9h4f; Cbm0wdq3x > HFoM25Tu7rU; Cbm0wdq3x--) {
                    lR2rWjM[Cbm0wdq3x].YFvZdIVWgRMD = lR2rWjM[Cbm0wdq3x -(42 - 41)].YFvZdIVWgRMD;
                    strcpy (lR2rWjM[Cbm0wdq3x].bRVf8i6, lR2rWjM[Cbm0wdq3x -1].bRVf8i6);
                }
                lR2rWjM[HFoM25Tu7rU].YFvZdIVWgRMD = aKcjigzn;
                strcpy (lR2rWjM[HFoM25Tu7rU].bRVf8i6, rg9RXz);
            }
        }
    }
    for (Md8cYlOH9h4f = (477 - 477); Md8cYlOH9h4f < TxSuKvNA9a; Md8cYlOH9h4f++) {
        printf ("%s\n", lR2rWjM[Md8cYlOH9h4f].bRVf8i6);
    }
    return (360 - 360);
}

