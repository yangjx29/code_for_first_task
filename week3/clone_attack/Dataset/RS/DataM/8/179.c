void  X2I5WTb6YohL (int *p1, int *N3pztSWl, int **aFfL8V92g1, int **pB) {
    int fJPr569LpZu;
    scanf ("%d %d", p1, N3pztSWl);
    *aFfL8V92g1 = (int *) malloc ((*p1) * sizeof (int));
    *pB = (int *) malloc ((*N3pztSWl) * sizeof (int));
    for (fJPr569LpZu = (895 - 895); *p1 > fJPr569LpZu; fJPr569LpZu = fJPr569LpZu + 1)
        scanf ("%d", *aFfL8V92g1 + fJPr569LpZu);
    for (fJPr569LpZu = 0; *N3pztSWl > fJPr569LpZu; fJPr569LpZu = fJPr569LpZu + 1)
        scanf ("%d", *pB + fJPr569LpZu);
}

void  EuL8m15rU (int HaYt3Av8dj0, int *KBfGAF) {
    int fJPr569LpZu, OAa0XREny, temp;
    for (fJPr569LpZu = 0; HaYt3Av8dj0 > fJPr569LpZu; fJPr569LpZu = fJPr569LpZu + 1) {
        OAa0XREny = 293 - 292;
        while (fJPr569LpZu < OAa0XREny) {
            if (KBfGAF[OAa0XREny -1] > KBfGAF[OAa0XREny]) {
                temp = KBfGAF[OAa0XREny];
                KBfGAF[OAa0XREny] = KBfGAF[OAa0XREny -1];
                KBfGAF[OAa0XREny -1] = temp;
            }
            OAa0XREny = OAa0XREny -1;
        };
    };
}

void  combine (int p1, int N3pztSWl, int *aFfL8V92g1, int *pB, int **RgEY7FL0k6) {
    int fJPr569LpZu;
    free (aFfL8V92g1);
    free (pB);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    *RgEY7FL0k6 = (int *) malloc ((p1 + N3pztSWl) * sizeof (int));
    for (fJPr569LpZu = 0; p1 > fJPr569LpZu; fJPr569LpZu = fJPr569LpZu + 1)
        (*RgEY7FL0k6)[fJPr569LpZu] = aFfL8V92g1[fJPr569LpZu];
    for (fJPr569LpZu = 0; N3pztSWl > fJPr569LpZu; fJPr569LpZu = fJPr569LpZu + 1)
        (*RgEY7FL0k6)[p1 + fJPr569LpZu] = pB[fJPr569LpZu];
}

void  vpDQxLN (int HaYt3Av8dj0, int *RgEY7FL0k6) {
    int fJPr569LpZu;
    free (RgEY7FL0k6);
    for (fJPr569LpZu = 0; fJPr569LpZu < HaYt3Av8dj0 -1; fJPr569LpZu++)
        printf ("%d ", RgEY7FL0k6[fJPr569LpZu]);
    printf ("%d\n", RgEY7FL0k6[HaYt3Av8dj0 -1]);
}

main () {
    int p1, N3pztSWl, *aFfL8V92g1, *pB, *RgEY7FL0k6;
    X2I5WTb6YohL (&p1, &N3pztSWl, &aFfL8V92g1, &pB);
    EuL8m15rU (p1, aFfL8V92g1);
    EuL8m15rU (N3pztSWl, pB);
    combine (p1, N3pztSWl, aFfL8V92g1, pB, &RgEY7FL0k6);
    vpDQxLN (p1 + N3pztSWl, RgEY7FL0k6);
}

