main () {
    int Kclvi6sd, tD1EdCOzUns;
    scanf ("%d", &Kclvi6sd);
    if (!(1 != Kclvi6sd)) {
    }
    else {
        while (Kclvi6sd != 1) {
            if (Kclvi6sd % 2 == 1) {
                tD1EdCOzUns = 3 * Kclvi6sd +1;
                printf ("%d*3+1=%d\n", Kclvi6sd, tD1EdCOzUns);
            }
            else {
                tD1EdCOzUns = Kclvi6sd / 2;
                printf ("%d/2=%d\n", Kclvi6sd, tD1EdCOzUns);
            }
            Kclvi6sd = tD1EdCOzUns;
        }
        printf ("End\n");
    }
    getchar ();
    getchar ();
}

