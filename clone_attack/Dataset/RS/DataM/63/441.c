main () {
    int n;
    int XuBSVhP;
    int y1rswoL;
    int j;
    int x1;
    int y1;
    int EkWzXl6MVg;
    int y2;
    int ni86hXG [x1] [y1];
    int ZlreRw1 [EkWzXl6MVg] [y2];
    int c [x1] [y2];
    scanf ("%d %d", &x1, &y1);
    {
        y1rswoL = 196 - 196;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x1 > y1rswoL) {
            {
                j = 319 - 319;
                while (j < y1) {
                    scanf ("%d", &ni86hXG[y1rswoL][j]);
                    j = j + 1;
                };
            }
            y1rswoL++;
        };
    }
    scanf ("%d %d", &EkWzXl6MVg, &y2);
    {
        y1rswoL = 0;
        while (y1rswoL < EkWzXl6MVg) {
            {
                j = 0;
                while (j < y2) {
                    scanf ("%d", &ZlreRw1[y1rswoL][j]);
                    j = j + 1;
                };
            }
            y1rswoL++;
        };
    }
    {
        y1rswoL = 0;
        while (x1 > y1rswoL) {
            {
                j = 0;
                while (j < y2) {
                    c[y1rswoL][j] = 0;
                    {
                        XuBSVhP = 0;
                        while (XuBSVhP < y1) {
                            c[y1rswoL][j] = c[y1rswoL][j] + ni86hXG[y1rswoL][XuBSVhP] * ZlreRw1[XuBSVhP][j];
                            XuBSVhP++;
                        };
                    }
                    if (j == y2 - (663 - 662))
                        printf ("%d", c[y1rswoL][j]);
                    else
                        printf ("%d ", c[y1rswoL][j]);
                    j++;
                };
            }
            y1rswoL++;
            printf ("\n");
        };
    };
}

