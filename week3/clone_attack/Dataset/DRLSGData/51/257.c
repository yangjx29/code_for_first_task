int main () {
    int ClKbfpY3Py;
    char p6P2GsQCnadv [500];
    int hVHZSfF3M;
    int yERdg1sFeI;
    int bArm7xBeh9CI [500] = {0};
    int sypxsTW;
    gets (p6P2GsQCnadv);
    int vQchtlrFNUjC;
    p6P2GsQCnadv[0] = getchar ();
    scanf ("%d", &ClKbfpY3Py);
    for (hVHZSfF3M = 0; hVHZSfF3M < 500; hVHZSfF3M = hVHZSfF3M + 1)
        if (p6P2GsQCnadv[hVHZSfF3M] != '\0')
            for (sypxsTW = hVHZSfF3M + 1; 500 > sypxsTW; sypxsTW = sypxsTW + 1)
                if (p6P2GsQCnadv[sypxsTW] != '\0') {
                    for (yERdg1sFeI = 0; yERdg1sFeI < ClKbfpY3Py; yERdg1sFeI++)
                        if (p6P2GsQCnadv[hVHZSfF3M + yERdg1sFeI] != p6P2GsQCnadv[sypxsTW + yERdg1sFeI])
                            break;
                    if (!(ClKbfpY3Py != yERdg1sFeI))
                        bArm7xBeh9CI[hVHZSfF3M]++;
                }
                else
                    break;
        else
            break;
    vQchtlrFNUjC = 0;
    for (yERdg1sFeI = 0; 500 > yERdg1sFeI; yERdg1sFeI++)
        if (vQchtlrFNUjC < bArm7xBeh9CI[yERdg1sFeI])
            vQchtlrFNUjC = bArm7xBeh9CI[yERdg1sFeI];
    if (vQchtlrFNUjC != 0) {
        printf ("%d\n", vQchtlrFNUjC + 1);
        for (yERdg1sFeI = 0; 500 > yERdg1sFeI; yERdg1sFeI++)
            if (!(vQchtlrFNUjC != bArm7xBeh9CI[yERdg1sFeI])) {
                for (sypxsTW = 0; ClKbfpY3Py > sypxsTW; sypxsTW++)
                    printf ("%c", p6P2GsQCnadv[yERdg1sFeI + sypxsTW]);
            }
    }
    else
        ;
    return 0;
}

