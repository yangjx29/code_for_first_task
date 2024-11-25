void  main () {
    char res [13];
    char substr [4];
    char CvL309;
    char *p1, *p2, *p3;
    int knVKJjtNlF;
    int iU0Vyr6nAj;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int l;
    int k;
    knVKJjtNlF = (74 - 74);
    char V1R2vOTg0KB [11];
    for (; scanf ("%s%s", V1R2vOTg0KB, substr) != EOF;) {
        k = 0;
        p2 = substr;
        p1 = V1R2vOTg0KB;
        l = strlen (V1R2vOTg0KB);
        CvL309 = V1R2vOTg0KB[0];
        {
            iU0Vyr6nAj = 0;
            while (iU0Vyr6nAj < l) {
                if (CvL309 < V1R2vOTg0KB[iU0Vyr6nAj]) {
                    CvL309 = V1R2vOTg0KB[iU0Vyr6nAj];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    k = iU0Vyr6nAj;
                }
                iU0Vyr6nAj = iU0Vyr6nAj + 1;
            };
        }
        p3 = res;
        for (iU0Vyr6nAj = 0; iU0Vyr6nAj < 13; iU0Vyr6nAj = iU0Vyr6nAj + 1) {
            if (iU0Vyr6nAj <= k)
                *(p3 + iU0Vyr6nAj) = *(p1 + iU0Vyr6nAj);
            else {
                if (iU0Vyr6nAj <= k + (75 - 72))
                    *(p3 + iU0Vyr6nAj) = *(p2 + iU0Vyr6nAj - k - 1);
                else {
                    if (iU0Vyr6nAj < l + 3)
                        *(p3 + iU0Vyr6nAj) = *(p1 + iU0Vyr6nAj - 3);
                    else
                        res[iU0Vyr6nAj] = '\0';
                };
            };
        }
        printf ("%s\n", res);
    };
}

