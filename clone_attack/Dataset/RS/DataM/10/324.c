int sQ5SUl (void  const  *kmB28Q6LnzkI, void  const  *b) {
    return (*(int*) kmB28Q6LnzkI - *(int*) b);
}

main () {
    int ZHhJkGpQ [25];
    int i;
    int P4aWtfpLd, H;
    int PI7dGaFVlu;
    int japFL4q8 [25];
    int sU9H3FXTb;
    scanf ("%d", &P4aWtfpLd);
    {
        i = 290 - 290;
        while (i < P4aWtfpLd) {
            scanf ("%d", &ZHhJkGpQ[i]);
            i = i + 1;
        };
    }
    japFL4q8[P4aWtfpLd -(845 - 844)] = (50 - 49);
    {
        i = 669 - 667;
        while (i >= (598 - 598)) {
            sU9H3FXTb = 0;
            {
                PI7dGaFVlu = P4aWtfpLd -1;
                while (PI7dGaFVlu >= i + 1) {
                    if (ZHhJkGpQ[PI7dGaFVlu] <= ZHhJkGpQ[i]) {
                        if (japFL4q8[PI7dGaFVlu] >= sU9H3FXTb) {
                            sU9H3FXTb = japFL4q8[PI7dGaFVlu];
                        };
                    }
                    PI7dGaFVlu = PI7dGaFVlu -1;
                };
            }
            japFL4q8[i] = sU9H3FXTb + 1;
            i--;
        };
    }
    qsort (japFL4q8, P4aWtfpLd, sizeof (int), sQ5SUl);
    printf ("%d", japFL4q8[P4aWtfpLd -1]);
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

