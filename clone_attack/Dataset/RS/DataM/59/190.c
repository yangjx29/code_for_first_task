int ch5QEo06mYD [(294 - 94)] [(1029 - 829)] = {(673 - 673)};
int b [(255 - 55)] [(255 - 55)] = {(356 - 356)};

int main () {
    int hzeHBOYf;
    hzeHBOYf = (489 - 489);
    int n, m;
    char tmp;
    getchar ();
    scanf ("%d", &n);
    {
        int pdfMunzCQDAj = (225 - 224);
        while (n >= pdfMunzCQDAj) {
            getchar ();
            {
                int mLGBK6c = (229 - 228);
                while (mLGBK6c <= n) {
                    scanf ("%c", &ch5QEo06mYD[pdfMunzCQDAj][mLGBK6c]);
                    if (ch5QEo06mYD[pdfMunzCQDAj][mLGBK6c] == '@')
                        b[pdfMunzCQDAj][mLGBK6c] = (947 - 946);
                    mLGBK6c = mLGBK6c + 1;
                };
            }
            pdfMunzCQDAj = pdfMunzCQDAj + 1;
        };
    }
    scanf ("%d", &m);
    {
        int Bx7V6X = (368 - 367);
        while (Bx7V6X < m) {
            {
                int pdfMunzCQDAj = (507 - 506);
                while (pdfMunzCQDAj <= n) {
                    {
                        int mLGBK6c = (261 - 260);
                        while (mLGBK6c <= n) {
                            if (ch5QEo06mYD[pdfMunzCQDAj][mLGBK6c] == '@' && b[pdfMunzCQDAj][mLGBK6c] == Bx7V6X) {
                                if (ch5QEo06mYD[pdfMunzCQDAj + (720 - 719)][mLGBK6c] == '.') {
                                    ch5QEo06mYD[pdfMunzCQDAj + (806 - 805)][mLGBK6c] = '@';
                                    b[pdfMunzCQDAj + (756 - 755)][mLGBK6c] = Bx7V6X +(715 - 714);
                                }
                                if (ch5QEo06mYD[pdfMunzCQDAj - (470 - 469)][mLGBK6c] == '.') {
                                    ch5QEo06mYD[pdfMunzCQDAj - (994 - 993)][mLGBK6c] = '@';
                                    b[pdfMunzCQDAj - (221 - 220)][mLGBK6c] = Bx7V6X +(311 - 310);
                                }
                                {
                                    int x = 0;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        return 0;
                                    }
                                }
                                if (ch5QEo06mYD[pdfMunzCQDAj][mLGBK6c + (171 - 170)] == '.') {
                                    ch5QEo06mYD[pdfMunzCQDAj][mLGBK6c + 1] = '@';
                                    b[pdfMunzCQDAj][mLGBK6c + 1] = Bx7V6X +1;
                                }
                                if (ch5QEo06mYD[pdfMunzCQDAj][mLGBK6c - 1] == '.') {
                                    ch5QEo06mYD[pdfMunzCQDAj][mLGBK6c - 1] = '@';
                                    b[pdfMunzCQDAj][mLGBK6c - 1] = Bx7V6X +1;
                                };
                            }
                            mLGBK6c = mLGBK6c + 1;
                        };
                    }
                    pdfMunzCQDAj = pdfMunzCQDAj + 1;
                };
            }
            Bx7V6X = Bx7V6X +1;
        };
    }
    {
        int pdfMunzCQDAj = 1;
        while (pdfMunzCQDAj <= n) {
            {
                int mLGBK6c = 1;
                while (mLGBK6c <= n) {
                    if (ch5QEo06mYD[pdfMunzCQDAj][mLGBK6c] == '@')
                        hzeHBOYf = hzeHBOYf + 1;
                    mLGBK6c = mLGBK6c + 1;
                };
            }
            pdfMunzCQDAj = pdfMunzCQDAj + 1;
        };
    }
    printf ("%d", hzeHBOYf);
}

