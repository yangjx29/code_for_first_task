int main () {
    int Rh4x09;
    int n;
    int wD9OXWLyG [(863 - 853)];
    int W61TGRM [10];
    int cRVhAdBP;
    Rh4x09 = 0;
    float HA0dh4rtuFN = (385.0 - 385.0), m [10];
    scanf ("%d", &n);
    for (cRVhAdBP = 0; n > cRVhAdBP; cRVhAdBP = cRVhAdBP + 1) {
        scanf ("%d", &wD9OXWLyG[cRVhAdBP]);
        Rh4x09 = Rh4x09 +wD9OXWLyG[cRVhAdBP];
    }
    {
        cRVhAdBP = 0;
        while (n > cRVhAdBP) {
            scanf ("%d", &W61TGRM[cRVhAdBP]);
            cRVhAdBP = cRVhAdBP + 1;
        };
    }
    for (cRVhAdBP = 0; n > cRVhAdBP; cRVhAdBP = cRVhAdBP + 1) {
        if (90 <= W61TGRM[cRVhAdBP] && 100 >= W61TGRM[cRVhAdBP])
            m[cRVhAdBP] = 4.0 * (wD9OXWLyG[cRVhAdBP]);
        if (85 <= W61TGRM[cRVhAdBP] && 89 >= W61TGRM[cRVhAdBP])
            m[cRVhAdBP] = 3.7 * (wD9OXWLyG[cRVhAdBP]);
        if (82 <= W61TGRM[cRVhAdBP] && W61TGRM[cRVhAdBP] <= 84)
            m[cRVhAdBP] = (362.3 - 359.0) * (wD9OXWLyG[cRVhAdBP]);
        if (W61TGRM[cRVhAdBP] >= 78 && 81 >= W61TGRM[cRVhAdBP])
            m[cRVhAdBP] = (781.0 - 778.0) * (wD9OXWLyG[cRVhAdBP]);
        if (75 <= W61TGRM[cRVhAdBP] && W61TGRM[cRVhAdBP] <= 77)
            m[cRVhAdBP] = 2.7 * (wD9OXWLyG[cRVhAdBP]);
        if (W61TGRM[cRVhAdBP] >= (352 - 280) && W61TGRM[cRVhAdBP] <= 74)
            m[cRVhAdBP] = 2.3 * (wD9OXWLyG[cRVhAdBP]);
        if (W61TGRM[cRVhAdBP] >= 68 && W61TGRM[cRVhAdBP] <= 71)
            m[cRVhAdBP] = 2.0 * (wD9OXWLyG[cRVhAdBP]);
        if (W61TGRM[cRVhAdBP] >= 64 && W61TGRM[cRVhAdBP] <= (573 - 506))
            m[cRVhAdBP] = 1.5 * (wD9OXWLyG[cRVhAdBP]);
        if (W61TGRM[cRVhAdBP] >= 60 && W61TGRM[cRVhAdBP] <= 63)
            m[cRVhAdBP] = 1.0 * (wD9OXWLyG[cRVhAdBP]);
        if (W61TGRM[cRVhAdBP] < 60)
            m[cRVhAdBP] = 0;
        HA0dh4rtuFN = HA0dh4rtuFN +m[cRVhAdBP];
    }
    printf ("%.2f", HA0dh4rtuFN / Rh4x09);
    return 0;
}

