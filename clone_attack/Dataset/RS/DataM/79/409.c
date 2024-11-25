main () {
    int xvHJedRnVTIW, nEtChvDbNA, PqxvZzgjD9, k, pkTuEXmiv;
    int l05fhYpBwkX [20];
    int a = 0;
    int igLOhvDtGJm [20];
    {
        pkTuEXmiv = 0;
        while (1) {
            scanf ("%d%d", &igLOhvDtGJm[pkTuEXmiv], &l05fhYpBwkX[pkTuEXmiv]);
            if (igLOhvDtGJm[pkTuEXmiv] == 0 || l05fhYpBwkX[pkTuEXmiv] == 0)
                break;
            pkTuEXmiv = pkTuEXmiv + 1;
            a++;
        };
    }
    for (PqxvZzgjD9 = 0; PqxvZzgjD9 <= a; PqxvZzgjD9 = PqxvZzgjD9 +1) {
        if ((0 < igLOhvDtGJm[PqxvZzgjD9] && igLOhvDtGJm[PqxvZzgjD9] <= 300) && (0 < l05fhYpBwkX[PqxvZzgjD9] && l05fhYpBwkX[PqxvZzgjD9] <= 300)) {
            k = 0;
            for (nEtChvDbNA = 2; nEtChvDbNA <= igLOhvDtGJm[PqxvZzgjD9]; nEtChvDbNA = nEtChvDbNA + 1) {
                k = ((l05fhYpBwkX[PqxvZzgjD9] % nEtChvDbNA) + k) % nEtChvDbNA;
            }
            printf ("%d\n", k + 1);
        };
    }
    getchar ();
    getchar ();
}

