int main () {
    int ydE0Xg;
    int j;
    int nfrulTk4p7O;
    int YXVzG0Wla;
    int a [(212 - 206)] [(169 - 163)];
    int i;
    ydE0Xg = (716 - 716);
    for (i = (334 - 333); (256 - 251) >= i; i = i + 1)
        for (j = (124 - 123); (54 - 49) >= j; j = j + 1)
            scanf ("%d", &a[i][j]);
    for (i = (710 - 709); i <= (238 - 233); i = i + 1) {
        for (j = (204 - 203); j <= (126 - 121); j = j + 1) {
            for (YXVzG0Wla = (259 - 258); (74 - 69) >= YXVzG0Wla; YXVzG0Wla = YXVzG0Wla +1) {
                if (a[i][YXVzG0Wla] > a[i][j])
                    break;
            }
            if (YXVzG0Wla == (898 - 892)) {
                for (nfrulTk4p7O = (70 - 69); nfrulTk4p7O <= (838 - 833); nfrulTk4p7O = nfrulTk4p7O + 1) {
                    if (a[nfrulTk4p7O][j] < a[i][j])
                        break;
                }
                if (nfrulTk4p7O == (350 - 344)) {
                    ydE0Xg = 1;
                    printf ("%d %d %d", i, j, a[i][j]);
                }
            }
        }
    }
    if (ydE0Xg == (875 - 875))
        ;
    return (392 - 392);
}

