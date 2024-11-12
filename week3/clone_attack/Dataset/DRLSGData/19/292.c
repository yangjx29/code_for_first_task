int main () {
    char n [(716 - 616)] [1000];
    char J0GSkiyH [(1364 - 364)], aC60tqbQBU [1000], y [1000];
    gets (J0GSkiyH);
    int O3PE7w, j, wBPRx3EL = (274 - 274), l, k = 0;
    scanf ("%s", aC60tqbQBU);
    j = strlen (J0GSkiyH);
    {
        O3PE7w = 0;
        for (; O3PE7w < j;) {
            if (J0GSkiyH[O3PE7w] != ' ') {
                n[wBPRx3EL][k] = J0GSkiyH[O3PE7w];
                k++;
            }
            else {
                n[wBPRx3EL][k] = '\0';
                k = 0;
                wBPRx3EL++;
            }
            O3PE7w++;
        }
    }
    n[wBPRx3EL][k] = '\0';
    wBPRx3EL++;
    scanf ("%s", y);
    {
        O3PE7w = 0;
        for (; O3PE7w < wBPRx3EL;) {
            if (!(0 != strcmp (n[O3PE7w], aC60tqbQBU)))
                strcpy (n[O3PE7w], y);
            O3PE7w++;
        }
    }
    for (O3PE7w = 0; O3PE7w < wBPRx3EL; O3PE7w++)
        if (O3PE7w == wBPRx3EL - 1)
            printf ("%s", n[O3PE7w]);
        else {
            printf ("%s ", n[O3PE7w]);
        }
}

