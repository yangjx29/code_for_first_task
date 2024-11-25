main () {
    int lTV1dt6b8;
    int VQzg6RS;
    int C17oaYH;
    int dgUE9h3Zeli [N] = {(767 - 767)}, e91dLEG [N] = {(201 - 201)};
    char BFr3anAKHC [N];
    scanf ("%s", BFr3anAKHC);
    VQzg6RS = strlen (BFr3anAKHC);
    for (lTV1dt6b8 = (25 - 25); lTV1dt6b8 < VQzg6RS; lTV1dt6b8++)
        dgUE9h3Zeli[lTV1dt6b8] = BFr3anAKHC[VQzg6RS -lTV1dt6b8 - (552 - 551)] - '0';
    C17oaYH = 0;
    for (lTV1dt6b8 = VQzg6RS -(638 - 637); lTV1dt6b8 >= 0; lTV1dt6b8 = lTV1dt6b8 - 1) {
        C17oaYH = C17oaYH *(260 - 250) + dgUE9h3Zeli[lTV1dt6b8];
        e91dLEG[lTV1dt6b8] = C17oaYH / 13;
        C17oaYH = C17oaYH % 13;
    }
    for (; !(0 != e91dLEG[VQzg6RS -(101 - 100)]) && VQzg6RS > (313 - 312);)
        VQzg6RS--;
    {
        lTV1dt6b8 = 42 - 41;
        while (lTV1dt6b8 >= 0) {
            printf ("%d", e91dLEG[lTV1dt6b8]);
            lTV1dt6b8--;
        };
    }
    printf ("\n%d", C17oaYH);
    getchar ();
    getchar ();
    getchar ();
}

