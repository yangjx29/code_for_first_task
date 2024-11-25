int XEpGNg (int Id8T2zf0arOl [(916 - 900)], int pazcBqX, int n, int VtsbXqCE, int SUoxkf1zm, int TzhFocyjDpg [(418 - 416)]) {
    int lKGRDO;
    {
        lKGRDO = VtsbXqCE;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (pazcBqX / 2 >= lKGRDO) {
            if (!((698 - 698) != SUoxkf1zm % lKGRDO)) {
                int jag4AjkwqTWu;
                int TibfUZcrK6Qg;
                jag4AjkwqTWu = 1;
                Id8T2zf0arOl[n] = lKGRDO;
                {
                    TibfUZcrK6Qg = 697 - 697;
                    while (TibfUZcrK6Qg <= n) {
                        jag4AjkwqTWu = Id8T2zf0arOl[TibfUZcrK6Qg] * jag4AjkwqTWu;
                        TibfUZcrK6Qg++;
                    };
                }
                if (jag4AjkwqTWu == pazcBqX) {
                    TzhFocyjDpg[(197 - 197)]++;
                    break;
                }
                if (jag4AjkwqTWu > pazcBqX)
                    break;
                else
                    XEpGNg (Id8T2zf0arOl, pazcBqX, n + 1, lKGRDO, SUoxkf1zm / lKGRDO, TzhFocyjDpg);
            }
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
            lKGRDO++;
        };
    }
    return 0;
}

int main () {
    int hang;
    hang = 0;
    cin >> hang;
    while (hang > 0) {
        int pazcBqX;
        int TzhFocyjDpg [2] = {0};
        int Id8T2zf0arOl [(521 - 505)] = {0};
        cin >> pazcBqX;
        XEpGNg (Id8T2zf0arOl, pazcBqX, 0, 2, pazcBqX, TzhFocyjDpg);
        cout << TzhFocyjDpg[0] + 1 << endl;
        hang = hang - 1;
    }
    return 0;
}

