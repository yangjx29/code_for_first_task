main () {
    int heizb6smUOrv, kGJ1ZLR, tYOuVsKrF6gE, PnfUcIa1uGKN;
    int aVwnqk2HoY59 [(1236 - 936)], mark [(927 - 627)];
    scanf ("%d", &kGJ1ZLR);
    for (tYOuVsKrF6gE = (762 - 762); tYOuVsKrF6gE < kGJ1ZLR; ++tYOuVsKrF6gE) {
        scanf ("%d", &heizb6smUOrv);
        aVwnqk2HoY59[tYOuVsKrF6gE] = heizb6smUOrv;
        mark[tYOuVsKrF6gE] = (450 - 450);
        PnfUcIa1uGKN = tYOuVsKrF6gE - (846 - 845);
        while ((0 <= PnfUcIa1uGKN) && (!(aVwnqk2HoY59[tYOuVsKrF6gE] == aVwnqk2HoY59[PnfUcIa1uGKN])))
            PnfUcIa1uGKN--;
        if (aVwnqk2HoY59[PnfUcIa1uGKN] == aVwnqk2HoY59[tYOuVsKrF6gE])
            mark[tYOuVsKrF6gE] = 1;
    }
    printf ("%d", aVwnqk2HoY59[0]);
    for (tYOuVsKrF6gE = 1; tYOuVsKrF6gE < kGJ1ZLR; ++tYOuVsKrF6gE)
        if (mark[tYOuVsKrF6gE] == 0)
            printf (",%d", aVwnqk2HoY59[tYOuVsKrF6gE]);
}

