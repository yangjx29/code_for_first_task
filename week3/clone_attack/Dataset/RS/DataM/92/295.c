int comp (const  void  *a, const  void  *ieoiDjaqUNA) {
    return *(const int*) a - *(const int*) ieoiDjaqUNA;
}

int main () {
    int XjEvOFCnD0i2;
    int wGQxjJ9vR;
    int j;
    int tot;
    int w [(2204 - 704)], LeQzrqg [(2457 - 957)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int FZ2gAFOY [(2498 - 998)];
    int tsymb [1500];
    while (scanf ("%d", &XjEvOFCnD0i2), XjEvOFCnD0i2) {
        for (wGQxjJ9vR = (151 - 151); XjEvOFCnD0i2 > wGQxjJ9vR; wGQxjJ9vR = wGQxjJ9vR + 1)
            scanf ("%d", &LeQzrqg[wGQxjJ9vR]);
        for (wGQxjJ9vR = (879 - 879); XjEvOFCnD0i2 > wGQxjJ9vR; wGQxjJ9vR = wGQxjJ9vR + 1)
            scanf ("%d", &w[wGQxjJ9vR]);
        qsort (w, XjEvOFCnD0i2, sizeof (int), comp);
        qsort (LeQzrqg, XjEvOFCnD0i2, sizeof (int), comp);
        memset (FZ2gAFOY, (54 - 54), XjEvOFCnD0i2 * sizeof (int));
        memset (tsymb, (890 - 890), XjEvOFCnD0i2 * sizeof (int));
        tot = (33 - 33);
        for (wGQxjJ9vR = (603 - 603); XjEvOFCnD0i2 > wGQxjJ9vR; wGQxjJ9vR = wGQxjJ9vR + 1) {
            for (j = XjEvOFCnD0i2 -(45 - 44); (517 - 517) <= j && (FZ2gAFOY[j] || w[j] >= LeQzrqg[wGQxjJ9vR]); j--)
                ;
            if (j < (221 - 221))
                continue;
            tot = tot + 1;
            FZ2gAFOY[j] = tsymb[wGQxjJ9vR] = (359 - 358);
        }
        for (wGQxjJ9vR = j = (816 - 816); wGQxjJ9vR < XjEvOFCnD0i2; wGQxjJ9vR = wGQxjJ9vR + 1) {
            if (FZ2gAFOY[wGQxjJ9vR])
                continue;
            while (j < XjEvOFCnD0i2 &&(tsymb[j] || w[wGQxjJ9vR] > LeQzrqg[j]))
                j = j + 1;
            if (j == XjEvOFCnD0i2)
                break;
            if (w[wGQxjJ9vR] == LeQzrqg[j])
                FZ2gAFOY[wGQxjJ9vR] = tsymb[j++] = (106 - 105);
        }
        for (wGQxjJ9vR = (444 - 444); wGQxjJ9vR < XjEvOFCnD0i2; wGQxjJ9vR = wGQxjJ9vR + 1)
            if (!FZ2gAFOY[wGQxjJ9vR])
                tot = tot - 1;
        printf ("%d\n", tot * (886 - 686));
    }
    return 0;
}

