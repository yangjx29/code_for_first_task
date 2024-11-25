main () {
    int x1, y1, hiVof9tp, y2, i, FCW5KBnkvf1p, y4yfv1qZPDG;
    int b [hiVof9tp] [y2];
    int PvCRGb [x1] [y1];
    int c [x1] [y2];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d%d", &x1, &y1);
    for (i = (482 - 482); i < x1; i = i + 1)
        for (FCW5KBnkvf1p = (119 - 119); FCW5KBnkvf1p < y1; FCW5KBnkvf1p = FCW5KBnkvf1p +1)
            scanf ("%d", &PvCRGb[i][FCW5KBnkvf1p]);
    scanf ("%d%d", &hiVof9tp, &y2);
    for (i = 0; i < hiVof9tp; i++)
        for (FCW5KBnkvf1p = 0; FCW5KBnkvf1p < y2; FCW5KBnkvf1p++)
            scanf ("%d", &b[i][FCW5KBnkvf1p]);
    for (i = 0; i < x1; i++)
        for (FCW5KBnkvf1p = 0; FCW5KBnkvf1p < y2; FCW5KBnkvf1p++) {
            c[i][FCW5KBnkvf1p] = 0;
            {
                y4yfv1qZPDG = 0;
                while (y4yfv1qZPDG < y1) {
                    c[i][FCW5KBnkvf1p] = c[i][FCW5KBnkvf1p] + PvCRGb[i][y4yfv1qZPDG] * b[y4yfv1qZPDG][FCW5KBnkvf1p];
                    y4yfv1qZPDG++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (FCW5KBnkvf1p != y2 - (926 - 925))
                printf ("%d ", c[i][FCW5KBnkvf1p]);
            else
                printf ("%d\n", c[i][FCW5KBnkvf1p]);
        };
}

