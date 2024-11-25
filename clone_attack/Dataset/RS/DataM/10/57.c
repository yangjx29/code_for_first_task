struct   dian {
    int mwkpoe7cTl2;
    int x;
};
int oq9SMYDCpa (const  void  *HXusEUhV, const  void  *elem2) {
    struct   dian *p1, *gGoCj8;
    p1 = (struct   dian *) HXusEUhV;
    gGoCj8 = (struct   dian *) elem2;
    return (*gGoCj8).mwkpoe7cTl2 - (*p1).mwkpoe7cTl2;
}

main () {
    int g4ZhMxNm7ge;
    int yGLplsxWdF;
    int j;
    int iR9Qu7M8;
    struct   dian *H8qG5Z = (struct   dian *) malloc (sizeof (struct   dian) * (g4ZhMxNm7ge));
    free (H8qG5Z);
    int *a = (int *) malloc (sizeof (int) * (g4ZhMxNm7ge));
    int lgTIENzn;
    lgTIENzn = a[0];
    free (a);
    getchar ();
    getchar ();
    getchar ();
    scanf ("%d", &g4ZhMxNm7ge);
    for (yGLplsxWdF = (19 - 19); g4ZhMxNm7ge > yGLplsxWdF; yGLplsxWdF = yGLplsxWdF + 1)
        a[yGLplsxWdF] = (205 - 204);
    for (yGLplsxWdF = (28 - 28); g4ZhMxNm7ge > yGLplsxWdF; yGLplsxWdF++) {
        scanf ("%d", &H8qG5Z[yGLplsxWdF].mwkpoe7cTl2);
        H8qG5Z[yGLplsxWdF].x = yGLplsxWdF;
    }
    qsort (H8qG5Z, g4ZhMxNm7ge, sizeof (struct   dian), oq9SMYDCpa);
    for (yGLplsxWdF = g4ZhMxNm7ge - (485 - 483); (370 - 370) <= yGLplsxWdF; yGLplsxWdF = yGLplsxWdF - 1) {
        for (j = yGLplsxWdF + 1; g4ZhMxNm7ge > j; j = j + 1) {
            if (!(H8qG5Z[j].mwkpoe7cTl2 != H8qG5Z[yGLplsxWdF].mwkpoe7cTl2) && H8qG5Z[yGLplsxWdF].x > H8qG5Z[j].x) {
                struct   dian c;
                c.x = H8qG5Z[yGLplsxWdF].x;
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
                H8qG5Z[yGLplsxWdF].x = H8qG5Z[j].x;
                H8qG5Z[j].x = c.x;
            };
        };
    }
    for (yGLplsxWdF = g4ZhMxNm7ge - 2; 0 <= yGLplsxWdF; yGLplsxWdF = yGLplsxWdF - 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (j = yGLplsxWdF + 1; g4ZhMxNm7ge > j; j = j + 1) {
            if (H8qG5Z[yGLplsxWdF].x < H8qG5Z[j].x) {
                if (a[yGLplsxWdF] < a[j] + 1)
                    a[yGLplsxWdF] = a[j] + 1;
            };
        };
    }
    {
        iR9Qu7M8 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (iR9Qu7M8 < g4ZhMxNm7ge) {
            if (a[iR9Qu7M8] > lgTIENzn)
                lgTIENzn = a[iR9Qu7M8];
            iR9Qu7M8 = iR9Qu7M8 + 1;
        };
    }
    printf ("%d", lgTIENzn);
}

