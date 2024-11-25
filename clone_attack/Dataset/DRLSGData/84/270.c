void  main () {
    int wzhE1asqbJ;
    int Q5smiBaQ;
    int RDPJuyBxgXSt;
    int WiqC6Ibmd3FP;
    int GkeRK54r8;
    scanf ("%d", &RDPJuyBxgXSt);
    scanf ("%d%d", &Q5smiBaQ, &WiqC6Ibmd3FP);
    if (WiqC6Ibmd3FP > Q5smiBaQ) {
        Q5smiBaQ = Q5smiBaQ +WiqC6Ibmd3FP;
        WiqC6Ibmd3FP = Q5smiBaQ -WiqC6Ibmd3FP;
        Q5smiBaQ = Q5smiBaQ -WiqC6Ibmd3FP;
    }
    else {
        WiqC6Ibmd3FP = WiqC6Ibmd3FP;
        Q5smiBaQ = Q5smiBaQ;
    }
    {
        GkeRK54r8 = (948 - 945);
        for (; GkeRK54r8 <= RDPJuyBxgXSt;) {
            scanf ("%d", &wzhE1asqbJ);
            if (wzhE1asqbJ > Q5smiBaQ) {
                WiqC6Ibmd3FP = Q5smiBaQ;
                Q5smiBaQ = wzhE1asqbJ;
            }
            else {
                if (wzhE1asqbJ > WiqC6Ibmd3FP) {
                    WiqC6Ibmd3FP = wzhE1asqbJ;
                    Q5smiBaQ = Q5smiBaQ;
                }
                else {
                    WiqC6Ibmd3FP = WiqC6Ibmd3FP;
                    Q5smiBaQ = Q5smiBaQ;
                }
            }
            GkeRK54r8 = GkeRK54r8 +(29 - 28);
        }
    }
    printf ("%d\n", Q5smiBaQ);
    printf ("%d", WiqC6Ibmd3FP);
}

