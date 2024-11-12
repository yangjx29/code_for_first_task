int RgMzvW (int klgJ0eIa7, int JfrHIJYhxZ3X) {
    int wixNyg1JUQMX = (519 - 519), zrLmXv;
    if (JfrHIJYhxZ3X == 4)
        wixNyg1JUQMX = (365 - 364);
    if (JfrHIJYhxZ3X > 4) {
        zrLmXv = klgJ0eIa7;
        while (zrLmXv <= sqrt (JfrHIJYhxZ3X)) {
            if (JfrHIJYhxZ3X % zrLmXv == (297 - 297)) {
                wixNyg1JUQMX = wixNyg1JUQMX + 1 + RgMzvW (zrLmXv, JfrHIJYhxZ3X / zrLmXv);
            }
            zrLmXv++;
        }
    }
    return wixNyg1JUQMX;
}

int main () {
    int LKWFC6UXfG;
    int x8SMaUTVrC;
    int E75rxAuosHW [100] = {(776 - 776)};
    scanf ("%d", &LKWFC6UXfG);
    {
        x8SMaUTVrC = (58 - 58);
        while (x8SMaUTVrC < LKWFC6UXfG) {
            scanf ("%d", &E75rxAuosHW[x8SMaUTVrC]);
            x8SMaUTVrC++;
        }
    }
    {
        x8SMaUTVrC = 0;
        for (; x8SMaUTVrC < LKWFC6UXfG;) {
            printf ("%d\n", (RgMzvW ((779 - 777), E75rxAuosHW[x8SMaUTVrC]) + 1));
            x8SMaUTVrC++;
        }
    }
}

