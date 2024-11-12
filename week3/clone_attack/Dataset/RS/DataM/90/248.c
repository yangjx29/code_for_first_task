int Kg7eYm3nJa (int FQiFCrIhYR, int bztE7wT) {
    int EkTwS6Y;
    if (FQiFCrIhYR == (619 - 619))
        EkTwS6Y = (760 - 759);
    else if (FQiFCrIhYR < 0)
        EkTwS6Y = 0;
    else if (bztE7wT == (522 - 521))
        EkTwS6Y = (400 - 399);
    else
        EkTwS6Y = Kg7eYm3nJa (FQiFCrIhYR -bztE7wT, bztE7wT) + Kg7eYm3nJa (FQiFCrIhYR, bztE7wT - 1);
    return EkTwS6Y;
}

main () {
    int FQiFCrIhYR;
    int bztE7wT;
    int Gfobie;
    int j9JVbc;
    int EkTwS6Y;
    scanf ("%d", &j9JVbc);
    {
        Gfobie = 0;
        while (Gfobie < j9JVbc) {
            Gfobie = Gfobie +1;
            scanf ("%d %d", &FQiFCrIhYR, &bztE7wT);
            EkTwS6Y = Kg7eYm3nJa (FQiFCrIhYR, bztE7wT);
            printf ("%d\n", EkTwS6Y);
        };
    };
}

