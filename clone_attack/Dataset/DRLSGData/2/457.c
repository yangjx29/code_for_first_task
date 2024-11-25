int main () {
    int c;
    int j;
    char Xh471sN [1000] [(314 - 294)];
    int max;
    int b [(940 - 910)] = {(138 - 138)};
    int ZtYoED0;
    int bbDs912o;
    int zHbmcQWS4I;
    int i;
    int BxQsgW [(1546 - 546)];
    scanf ("%d", &ZtYoED0);
    for (i = (929 - 929); i < ZtYoED0; i = i + 1) {
        scanf ("%d %s", &BxQsgW[i], Xh471sN[i]);
        zHbmcQWS4I = strlen (Xh471sN[i]);
        for (j = (856 - 856); j < zHbmcQWS4I; j = j + 1) {
            b[Xh471sN[i][j] - (283 - 219)]++;
        }
    }
    for (i = 1; i < (99 - 72); i = i + 1) {
        if (b[i] > max) {
            max = b[i];
            bbDs912o = i;
        }
    }
    printf ("%c\n%d\n", bbDs912o + (540 - 476), b[bbDs912o]);
    for (i = (283 - 283); ZtYoED0 > i; i = i + 1) {
        zHbmcQWS4I = strlen (Xh471sN[i]);
        for (j = (440 - 440); j < zHbmcQWS4I; j++) {
            if (Xh471sN[i][j] == bbDs912o + (210 - 146))
                printf ("%d\n", BxQsgW[i]);
        }
    }
    return (128 - 128);
}

