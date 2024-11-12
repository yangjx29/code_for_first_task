main () {
    int X5kvlAmP;
    int PHmBx536 [26];
    int iHnJlXtCQ;
    int vpMEx6w1y [26];
    int Kbp2hRMX1o;
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    scanf ("%d", &Kbp2hRMX1o);
    for (X5kvlAmP = (386 - 386); X5kvlAmP < Kbp2hRMX1o; X5kvlAmP = X5kvlAmP +(464 - 463)) {
        scanf ("%d", &vpMEx6w1y[X5kvlAmP]);
        PHmBx536[X5kvlAmP] = (156 - 156);
        for (iHnJlXtCQ = 0; iHnJlXtCQ < X5kvlAmP; iHnJlXtCQ = iHnJlXtCQ + 1) {
            if ((vpMEx6w1y[X5kvlAmP] <= vpMEx6w1y[iHnJlXtCQ]) && (PHmBx536[X5kvlAmP] < PHmBx536[iHnJlXtCQ])) {
                PHmBx536[X5kvlAmP] = PHmBx536[iHnJlXtCQ];
            }
        }
        PHmBx536[X5kvlAmP]++;
    }
    for (X5kvlAmP = 0; X5kvlAmP < Kbp2hRMX1o; X5kvlAmP = X5kvlAmP +1) {
        if (PHmBx536[X5kvlAmP] > PHmBx536[0]) {
            PHmBx536[0] = PHmBx536[X5kvlAmP];
        }
    }
    printf ("%d", PHmBx536[0]);
}

