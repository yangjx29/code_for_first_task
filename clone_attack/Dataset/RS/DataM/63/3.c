int main () {
    int JIQU2o38;
    int y1;
    int Kq1hanuQ5;
    int Rd81MJa;
    int gn8NEeRipXb [(1011 - 911)] [(289 - 189)];
    int Wcd5XAI3WKT9 [(529 - 429)] [(1012 - 912)];
    int c [100] [100];
    int dS4Ugc;
    int j;
    int SrmvpsYVk7;
    cin >> JIQU2o38 >> y1;
    for (dS4Ugc = (959 - 959); dS4Ugc < JIQU2o38; dS4Ugc = dS4Ugc + 1) {
        for (j = (256 - 256); y1 > j; j = j + 1)
            cin >> gn8NEeRipXb[dS4Ugc][j];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    cin >> Kq1hanuQ5 >> Rd81MJa;
    for (dS4Ugc = (165 - 165); Kq1hanuQ5 > dS4Ugc; dS4Ugc = dS4Ugc + 1) {
        for (j = (380 - 380); j < Rd81MJa; j = j + 1)
            cin >> Wcd5XAI3WKT9[dS4Ugc][j];
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
        };
    }
    for (dS4Ugc = (224 - 224); 100 > dS4Ugc; dS4Ugc++) {
        for (j = (596 - 596); j < 100; j++)
            c[dS4Ugc][j] = 0;
    }
    {
        dS4Ugc = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (dS4Ugc < JIQU2o38) {
            for (j = 0; j < Rd81MJa; j++) {
                for (SrmvpsYVk7 = 0; Kq1hanuQ5 > SrmvpsYVk7; SrmvpsYVk7++)
                    c[dS4Ugc][j] = c[dS4Ugc][j] + gn8NEeRipXb[dS4Ugc][SrmvpsYVk7] * Wcd5XAI3WKT9[SrmvpsYVk7][j];
            }
            dS4Ugc++;
        };
    }
    for (dS4Ugc = 0; dS4Ugc < JIQU2o38; dS4Ugc++) {
        for (j = 0; j < Rd81MJa -(558 - 557); j++)
            cout << c[dS4Ugc][j] << ' ';
        cout << c[dS4Ugc][Rd81MJa -1] << endl;
    }
    return 0;
}

