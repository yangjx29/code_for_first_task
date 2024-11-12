int Mm1w2Yyr7F (int sDWFGY, int j8uiUw7GsC2c) {
    if (j8uiUw7GsC2c <= sDWFGY)
        return sDWFGY;
    else
        return j8uiUw7GsC2c;
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
}

int main () {
    int tBOlCTHo4K9 = 0;
    int j = 0;
    int cQtFTSr = 0, Fmop58Yx = 0;
    char QYpLES [100000];
    char naHdZFQe7cS0 [1000000];
    int sDWFGY [100000] = {0}, j8uiUw7GsC2c [100000] = {0};
    int m;
    m = Mm1w2Yyr7F (cQtFTSr, Fmop58Yx);
    scanf ("%s%s", QYpLES, naHdZFQe7cS0);
    cQtFTSr = strlen (QYpLES);
    for (int bCzG5lbsN = cQtFTSr - 1;
    0 <= bCzG5lbsN; bCzG5lbsN = bCzG5lbsN - 1, j = j + 1)
        sDWFGY[j] = QYpLES[bCzG5lbsN] - '0';
    j = 0;
    Fmop58Yx = strlen (naHdZFQe7cS0);
    for (int bCzG5lbsN = Fmop58Yx -1;
    0 <= bCzG5lbsN; bCzG5lbsN = bCzG5lbsN - 1, j++)
        j8uiUw7GsC2c[j] = naHdZFQe7cS0[bCzG5lbsN] - '0';
    for (int bCzG5lbsN = 0;
    m > bCzG5lbsN; bCzG5lbsN++) {
        sDWFGY[bCzG5lbsN] = sDWFGY[bCzG5lbsN] + j8uiUw7GsC2c[bCzG5lbsN];
        if (10 <= sDWFGY[bCzG5lbsN]) {
            sDWFGY[bCzG5lbsN] %= 10;
            sDWFGY[bCzG5lbsN + 1]++;
        };
    }
    for (int bCzG5lbsN = m;
    bCzG5lbsN >= 0; bCzG5lbsN = bCzG5lbsN - 1) {
        if (sDWFGY[bCzG5lbsN] != 0)
            tBOlCTHo4K9 = 1;
        if (tBOlCTHo4K9 == 1) {
            printf ("%d", sDWFGY[bCzG5lbsN]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (tBOlCTHo4K9 == 0 && bCzG5lbsN == 0)
            ;
    }
    printf ("\n");
    return 0;
}

