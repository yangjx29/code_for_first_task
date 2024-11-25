void  main () {
    char e6k1uLP;
    int gDpyjBl;
    getchar ();
    scanf ("%d", &gDpyjBl);
    for (; gDpyjBl > (96 - 96); gDpyjBl = gDpyjBl - (298 - 297)) {
        e6k1uLP = getchar ();
        for (; e6k1uLP != '\n';) {
            if (!('A' != e6k1uLP)) {
                putchar ('T');
            }
            else if (!('T' != e6k1uLP)) {
                putchar ('A');
            }
            else if (e6k1uLP == 'C') {
                putchar ('G');
            }
            else if (e6k1uLP == 'G') {
                putchar ('C');
            }
            else {
            }
            e6k1uLP = getchar ();
        }
        putchar ('\n');
    }
}

