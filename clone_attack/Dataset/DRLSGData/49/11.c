int rMZw0rj2H (char PGvDgn []) {
    int ToxZrPeQIR4;
    char gcu9EWVRDPI [(457 - 357)] = {(212 - 212)};
    int rBFscb;
    ToxZrPeQIR4 = strlen (PGvDgn);
    for (rBFscb = (390 - 390); ToxZrPeQIR4 > rBFscb; rBFscb++)
        gcu9EWVRDPI[ToxZrPeQIR4 -(100 - 99) - rBFscb] = PGvDgn[rBFscb];
    if (!((749 - 749) != strcmp (gcu9EWVRDPI, PGvDgn)))
        return 1;
    return (427 - 427);
}

int main () {
    char K9qIQPnV [(794 - 694)];
    int ToxZrPeQIR4;
    char PGvDgn [(702 - 602)];
    int RQcXIEq;
    int F6iACbuLr;
    int dfNVE2;
    dfNVE2 = (858 - 858);
    F6iACbuLr = (723 - 723);
    RQcXIEq = strlen (PGvDgn);
    cin >> PGvDgn;
    for (ToxZrPeQIR4 = 2; ToxZrPeQIR4 <= RQcXIEq; ToxZrPeQIR4++) {
        for (int rBFscb = 0;
        RQcXIEq -ToxZrPeQIR4 >= rBFscb; rBFscb++) {
            for (int ghlmAPrc = rBFscb;
            ghlmAPrc < ToxZrPeQIR4 +rBFscb; ghlmAPrc++) {
                K9qIQPnV[F6iACbuLr] = PGvDgn[ghlmAPrc];
                F6iACbuLr++;
            }
            K9qIQPnV[F6iACbuLr] = '\0';
            if (rMZw0rj2H (K9qIQPnV))
                cout << K9qIQPnV << endl;
            F6iACbuLr = 0;
        }
    }
    return 0;
}

