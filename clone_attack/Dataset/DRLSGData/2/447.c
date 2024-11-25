int main (int IEUkaA0w7Y, char *G26kxGA3KTWY []) {
    int EL6MVqOtNroc;
    int FBwChIFZ;
    char OLjfK9T [(1088 - 988)] [27], JA9DMNJyK;
    int FoydY0Jc [(1650 - 650)];
    int IvMPSE;
    int b [26] = {(881 - 881)};
    int SMCEUbJ6;
    int EQ0LwIDYUm;
    JA9DMNJyK = 'A';
    scanf ("%d", &FBwChIFZ);
    for (EQ0LwIDYUm = (302 - 302); FBwChIFZ > EQ0LwIDYUm; EQ0LwIDYUm = EQ0LwIDYUm +1) {
        scanf ("%d %s", &FoydY0Jc[EQ0LwIDYUm], OLjfK9T[EQ0LwIDYUm]);
        IvMPSE = strlen (OLjfK9T[EQ0LwIDYUm]);
        for (SMCEUbJ6 = 0; IvMPSE > SMCEUbJ6; SMCEUbJ6 = SMCEUbJ6 +1) {
            b[OLjfK9T[EQ0LwIDYUm][SMCEUbJ6] - 'A']++;
        }
    }
    EL6MVqOtNroc = b[0];
    for (SMCEUbJ6 = 1; 26 > SMCEUbJ6; SMCEUbJ6++) {
        if (EL6MVqOtNroc < b[SMCEUbJ6]) {
            EL6MVqOtNroc = b[SMCEUbJ6];
            JA9DMNJyK = SMCEUbJ6 +'A';
        }
    }
    printf ("%c\n%d\n", JA9DMNJyK, EL6MVqOtNroc);
    for (EQ0LwIDYUm = 0; FBwChIFZ > EQ0LwIDYUm; EQ0LwIDYUm = EQ0LwIDYUm +1) {
        IvMPSE = strlen (OLjfK9T[EQ0LwIDYUm]);
        for (SMCEUbJ6 = 0; SMCEUbJ6 < IvMPSE; SMCEUbJ6++) {
            if (!(JA9DMNJyK != OLjfK9T[EQ0LwIDYUm][SMCEUbJ6])) {
                strcpy (OLjfK9T[EQ0LwIDYUm], "shuchu");
                break;
            }
        }
    }
    for (EQ0LwIDYUm = 0; EQ0LwIDYUm < FBwChIFZ; EQ0LwIDYUm++) {
        if (strcmp (OLjfK9T[EQ0LwIDYUm], "shuchu") == 0)
            printf ("%d\n", FoydY0Jc[EQ0LwIDYUm]);
    }
    return 0;
}

