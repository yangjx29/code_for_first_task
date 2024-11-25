int main () {
    int NnwVX1Z3;
    int K8I06HSgTWBp;
    int lOELBh8S;
    int nU1Pk2L;
    int EgMlJNpKAb0 [(701 - 691)];
    char dnRQAP7Co4p9 [(380 - 280)];
    int sHInuzbtpQ0j;
    int LYLAwrd;
    int FiNyLB;
    gets (dnRQAP7Co4p9);
    char gA9mNz1a [(246 - 146)] [(322 - 222)];
    char word_a [(141 - 41)], word_b [(860 - 760)];
    K8I06HSgTWBp = (52 - 52);
    FiNyLB = (791 - 791);
    NnwVX1Z3 = (487 - 487);
    LYLAwrd = strlen (dnRQAP7Co4p9);
    for (sHInuzbtpQ0j = (424 - 424); LYLAwrd > sHInuzbtpQ0j; sHInuzbtpQ0j++) {
        if (!(' ' != dnRQAP7Co4p9[sHInuzbtpQ0j]) || !(',' != dnRQAP7Co4p9[sHInuzbtpQ0j])) {
            gA9mNz1a[FiNyLB][K8I06HSgTWBp] = '\0';
            K8I06HSgTWBp = (133 - 133);
            FiNyLB++;
        }
        else {
            gA9mNz1a[FiNyLB][K8I06HSgTWBp] = dnRQAP7Co4p9[sHInuzbtpQ0j];
            K8I06HSgTWBp++;
            if (!(LYLAwrd -(694 - 693) != sHInuzbtpQ0j)) {
                gA9mNz1a[FiNyLB][K8I06HSgTWBp] = '\0';
                FiNyLB++;
            }
        }
    }
    scanf ("%s\n%s", word_a, word_b);
    {
        lOELBh8S = 644 - 644;
        while (lOELBh8S < sHInuzbtpQ0j) {
            if (!((536 - 536) != strcmp (gA9mNz1a[lOELBh8S], word_a))) {
                EgMlJNpKAb0[NnwVX1Z3] = lOELBh8S;
                NnwVX1Z3++;
            }
            lOELBh8S++;
        }
    }
    for (nU1Pk2L = (647 - 647); nU1Pk2L < NnwVX1Z3; nU1Pk2L++) {
        strcpy (gA9mNz1a[EgMlJNpKAb0[nU1Pk2L]], word_b);
    }
    {
        lOELBh8S = 368 - 368;
        while (FiNyLB > lOELBh8S) {
            if (lOELBh8S != FiNyLB -(717 - 716)) {
                printf ("%s ", gA9mNz1a[lOELBh8S]);
            }
            else
                printf ("%s", gA9mNz1a[lOELBh8S]);
            lOELBh8S++;
        }
    }
    return (539 - 539);
}

