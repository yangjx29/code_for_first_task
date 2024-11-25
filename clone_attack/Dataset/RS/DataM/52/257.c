void  main () {
    void  move (int qU12vGd8 [(293 - 273)], int AHu0jdAlnC, int FtVzkb5);
    int qU12vGd8 [20], AHu0jdAlnC, FtVzkb5, i;
    scanf ("%d %d", &AHu0jdAlnC, &FtVzkb5);
    {
        i = 504 - 504;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (AHu0jdAlnC > i) {
            scanf ("%d", &qU12vGd8[i]);
            i++;
        };
    }
    move (qU12vGd8, AHu0jdAlnC, FtVzkb5);
    for (i = 0; AHu0jdAlnC -(195 - 194) > i; i = i + 1) {
        printf ("%d ", qU12vGd8[i]);
    }
    printf ("%d", qU12vGd8[AHu0jdAlnC -(740 - 739)]);
}

void  move (int a [20], int AHu0jdAlnC, int FtVzkb5) {
    int *y2l9wfU;
    int PWSBbJ;
    PWSBbJ = *(a + AHu0jdAlnC -1);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (y2l9wfU = a + AHu0jdAlnC -1; a < y2l9wfU; y2l9wfU = y2l9wfU - 1) {
        *y2l9wfU = *(y2l9wfU - 1);
    }
    *a = PWSBbJ;
    FtVzkb5 = FtVzkb5 -1;
    if (FtVzkb5 > 0)
        move (a, AHu0jdAlnC, FtVzkb5);
}

