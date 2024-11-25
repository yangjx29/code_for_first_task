int main () {
    int wNIQABGC [501];
    int fof2KkeXZpWu;
    int max = 1;
    int t43AgU1qSi;
    int w0Gejc8aCpS;
    int i;
    int O6mN0dMaD;
    int cE91X8D;
    char E0xdMuwDA [501];
    gets (E0xdMuwDA);
    scanf ("%d\n", &fof2KkeXZpWu);
    for (i = 0; i < strlen (E0xdMuwDA) - fof2KkeXZpWu + 1; i++) {
        wNIQABGC[i] = 1;
    }
    for (i = 0; i < strlen (E0xdMuwDA) - 2; i++) {
        for (O6mN0dMaD = i + 1; O6mN0dMaD < strlen (E0xdMuwDA) - 1; O6mN0dMaD++) {
            w0Gejc8aCpS = 0;
            for (t43AgU1qSi = 0; fof2KkeXZpWu > t43AgU1qSi; t43AgU1qSi++) {
                if (!(E0xdMuwDA[O6mN0dMaD +t43AgU1qSi] != E0xdMuwDA[i + t43AgU1qSi])) {
                    w0Gejc8aCpS++;
                }
                else {
                    break;
                }
            }
            if (!(fof2KkeXZpWu != w0Gejc8aCpS)) {
                wNIQABGC[i]++;
            }
        }
    }
    for (cE91X8D = 0; cE91X8D < strlen (E0xdMuwDA) - fof2KkeXZpWu + 1; cE91X8D++) {
        if (wNIQABGC[cE91X8D] > max) {
            max = wNIQABGC[cE91X8D];
        }
    }
    if (max == 1) {
        return 0;
    }
    printf ("%d\n", max);
    for (cE91X8D = 0; cE91X8D < strlen (E0xdMuwDA) - fof2KkeXZpWu + 1; cE91X8D++) {
        if (wNIQABGC[cE91X8D] == max) {
            for (t43AgU1qSi = 0; t43AgU1qSi < fof2KkeXZpWu; t43AgU1qSi++) {
                printf ("%c", E0xdMuwDA[cE91X8D + t43AgU1qSi]);
            }
        }
    }
    return 0;
}

