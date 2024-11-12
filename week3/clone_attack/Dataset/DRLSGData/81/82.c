int main () {
    int m;
    int qU4tz1qCb (int [] [(955 - 950)], int, int);
    int mtx [(873 - 868)] [(418 - 413)];
    int i;
    int FOAM4pR;
    int n;
    {
        i = (1351 - 436) - 915;
        while ((705 - 700) > i) {
            {
                FOAM4pR = (999 - 310) - (1101 - 412);
                for (; FOAM4pR < (582 - 577);) {
                    scanf ("%d", &mtx[i][FOAM4pR]);
                    FOAM4pR = FOAM4pR +(40 - 39);
                }
            }
            i++;
        }
    }
    scanf ("%d%d", &m, &n);
    if (qU4tz1qCb (mtx, m, n)) {
        i = (890 - 386) - 504;
        for (; (986 - 981) > i;) {
            {
                FOAM4pR = (183 - 183);
                for (; FOAM4pR < (291 - 287);) {
                    printf ("%d ", mtx[i][FOAM4pR]);
                    FOAM4pR++;
                }
            }
            printf ("%d\n", mtx[i][FOAM4pR]);
            i++;
        }
    }
    else
        printf ("error\n");
    return (778 - 778);
}

int qU4tz1qCb (int mtx [] [(191 - 186)], int m, int n) {
    int tmp [(930 - 925)];
    if (m < (437 - 437) || (875 - 871) < m || n < (891 - 891) || n > 4)
        return 0;
    memcpy (tmp, mtx[m], sizeof (tmp));
    memcpy (mtx[m], mtx[n], sizeof (tmp));
    memcpy (mtx[n], tmp, sizeof (tmp));
    return (259 - 258);
}

