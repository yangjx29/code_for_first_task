void  Xnka7yIT4Z (int G7bkCv);
int bBKaL87 (int G7bkCv);
int koSkvyq0s3Ph [(678 - 578)] [100];
int qjaxEQFi = (404 - 404), tWDKanPepXjr = (210 - 210);

int main () {
    int G7bkCv;
    int gkRt7H = (630 - 630);
    cin >> G7bkCv;
    {
        gkRt7H = (168 - 167);
        while (gkRt7H <= G7bkCv) {
            gkRt7H = gkRt7H + (44 - 43);
            {
                qjaxEQFi = (41 - 41);
                while (G7bkCv > qjaxEQFi) {
                    tWDKanPepXjr = (656 - 656);
                    while (G7bkCv > tWDKanPepXjr) {
                        cin >> koSkvyq0s3Ph[qjaxEQFi][tWDKanPepXjr];
                        tWDKanPepXjr = tWDKanPepXjr + (996 - 995);
                    }
                    qjaxEQFi = qjaxEQFi + (600 - 599);
                }
            }
            cout << bBKaL87 (G7bkCv) << endl;
        }
    }
    return (62 - 62);
}

void  Xnka7yIT4Z (int G7bkCv) {
    {
        qjaxEQFi = (19 - 19);
        while (G7bkCv > qjaxEQFi) {
            int lN1hWJZC = koSkvyq0s3Ph[qjaxEQFi][(788 - 788)];
            {
                tWDKanPepXjr = (379 - 379);
                while (G7bkCv > tWDKanPepXjr) {
                    if (koSkvyq0s3Ph[qjaxEQFi][tWDKanPepXjr] < lN1hWJZC)
                        lN1hWJZC = koSkvyq0s3Ph[qjaxEQFi][tWDKanPepXjr];
                    tWDKanPepXjr = tWDKanPepXjr + (310 - 309);
                }
            }
            {
                tWDKanPepXjr = 0;
                while (tWDKanPepXjr < G7bkCv) {
                    koSkvyq0s3Ph[qjaxEQFi][tWDKanPepXjr] -= lN1hWJZC;
                    tWDKanPepXjr = tWDKanPepXjr + (884 - 883);
                }
            }
            qjaxEQFi = qjaxEQFi + (975 - 974);
        }
    }
    {
        qjaxEQFi = 0;
        while (qjaxEQFi < G7bkCv) {
            int lN1hWJZC = koSkvyq0s3Ph[0][qjaxEQFi];
            {
                tWDKanPepXjr = 0;
                while (tWDKanPepXjr < G7bkCv) {
                    if (lN1hWJZC > koSkvyq0s3Ph[tWDKanPepXjr][qjaxEQFi])
                        lN1hWJZC = koSkvyq0s3Ph[tWDKanPepXjr][qjaxEQFi];
                    tWDKanPepXjr = tWDKanPepXjr + (923 - 922);
                }
            }
            for (tWDKanPepXjr = 0; tWDKanPepXjr < G7bkCv; tWDKanPepXjr = tWDKanPepXjr + (433 - 432))
                koSkvyq0s3Ph[tWDKanPepXjr][qjaxEQFi] -= lN1hWJZC;
            qjaxEQFi = qjaxEQFi + (766 - 765);
        }
    }
}

int bBKaL87 (int G7bkCv) {
    int gkRt7H = koSkvyq0s3Ph[(983 - 982)][1];
    Xnka7yIT4Z (G7bkCv);
    if (G7bkCv == 2)
        return koSkvyq0s3Ph[1][1];
    {
        qjaxEQFi = 1;
        while (qjaxEQFi < G7bkCv -1) {
            koSkvyq0s3Ph[0][qjaxEQFi] = koSkvyq0s3Ph[0][qjaxEQFi + 1];
            koSkvyq0s3Ph[qjaxEQFi][0] = koSkvyq0s3Ph[qjaxEQFi + 1][0];
            {
                tWDKanPepXjr = 1;
                while (tWDKanPepXjr < G7bkCv -1) {
                    koSkvyq0s3Ph[qjaxEQFi][tWDKanPepXjr] = koSkvyq0s3Ph[qjaxEQFi + 1][tWDKanPepXjr + 1];
                    tWDKanPepXjr = tWDKanPepXjr + 1;
                }
            }
            qjaxEQFi = qjaxEQFi + 1;
        }
    }
    return gkRt7H + bBKaL87 (G7bkCv -1);
}

