int main (int rJMKrIcv92nX, char *aZ5I8zBCuH2 []) {
    char Lv4SZVdND [(894 - 793)];
    int b972Fea3J;
    char nLJaYR [(716 - 615)];
    gets (nLJaYR);
    int rwTvW9coI;
    char a [(693 - 592)];
    gets (a);
    int nRXdnGjshYO;
    char S2HIYlrCG [(638 - 538)] [(647 - 546)];
    gets (Lv4SZVdND);
    nRXdnGjshYO = (580 - 580);
    rwTvW9coI = (621 - 621);
    for (b972Fea3J = (224 - 224); nLJaYR[b972Fea3J] != (243 - 243); b972Fea3J = b972Fea3J + (475 - 474)) {
        if (!(' ' != nLJaYR[b972Fea3J])) {
            strcpy (S2HIYlrCG[rwTvW9coI], (nLJaYR + nRXdnGjshYO));
            rwTvW9coI = rwTvW9coI + (687 - 686);
            nRXdnGjshYO = b972Fea3J + (859 - 858);
            nLJaYR[b972Fea3J] = '\0';
        }
    }
    strcpy (S2HIYlrCG[rwTvW9coI], (nLJaYR + nRXdnGjshYO));
    rwTvW9coI = rwTvW9coI + (793 - 792);
    for (b972Fea3J = (159 - 159); rwTvW9coI > b972Fea3J; b972Fea3J = b972Fea3J + (886 - 885)) {
        if (!((280 - 280) != strcmp (a, S2HIYlrCG[b972Fea3J]))) {
            strcpy (S2HIYlrCG[b972Fea3J], Lv4SZVdND);
        }
    }
    for (b972Fea3J = (767 - 767); b972Fea3J < rwTvW9coI - (644 - 643); b972Fea3J = b972Fea3J + (794 - 793)) {
        printf ("%s ", S2HIYlrCG[b972Fea3J]);
    }
    printf ("%s", S2HIYlrCG[rwTvW9coI - (54 - 53)]);
    return (589 - 589);
}

