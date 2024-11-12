int main () {
    int nswFTcgRBL, c59zT1enfU0w, aq4ubxC5AZ, cfYxh2PeECl, ujM7SmRo, yyfvitGcMsKj, B41Bq8p;
    int a [101] [101] = {0};
    int pApr5Wd [101] [101] = {0};
    int vKZbmrxQ9L [101] [101] = {0};
    cin >> nswFTcgRBL >> c59zT1enfU0w;
    {
        ujM7SmRo = 1;
        while (ujM7SmRo <= nswFTcgRBL) {
            {
                yyfvitGcMsKj = 1;
                while (yyfvitGcMsKj <= c59zT1enfU0w) {
                    cin >> a[ujM7SmRo][yyfvitGcMsKj];
                    yyfvitGcMsKj = yyfvitGcMsKj + 1;
                };
            }
            ujM7SmRo = ujM7SmRo + 1;
        };
    }
    cin >> aq4ubxC5AZ >> cfYxh2PeECl;
    for (ujM7SmRo = 1; ujM7SmRo <= aq4ubxC5AZ; ujM7SmRo = ujM7SmRo + 1) {
        yyfvitGcMsKj = 1;
        while (yyfvitGcMsKj <= cfYxh2PeECl) {
            cin >> pApr5Wd[ujM7SmRo][yyfvitGcMsKj];
            yyfvitGcMsKj = yyfvitGcMsKj + 1;
        };
    }
    for (ujM7SmRo = 1; ujM7SmRo <= nswFTcgRBL; ujM7SmRo++) {
        for (yyfvitGcMsKj = 1; yyfvitGcMsKj <= cfYxh2PeECl; yyfvitGcMsKj = yyfvitGcMsKj + 1) {
            B41Bq8p = 1;
            while (B41Bq8p <= c59zT1enfU0w) {
                vKZbmrxQ9L[ujM7SmRo][yyfvitGcMsKj] += a[ujM7SmRo][B41Bq8p] * pApr5Wd[B41Bq8p][yyfvitGcMsKj];
                B41Bq8p = B41Bq8p +1;
            };
        };
    }
    {
        ujM7SmRo = 1;
        while (ujM7SmRo <= nswFTcgRBL) {
            cout << vKZbmrxQ9L[ujM7SmRo][1];
            {
                yyfvitGcMsKj = 2;
                while (yyfvitGcMsKj <= cfYxh2PeECl) {
                    cout << ' ' << vKZbmrxQ9L[ujM7SmRo][yyfvitGcMsKj];
                    yyfvitGcMsKj = yyfvitGcMsKj + 1;
                };
            }
            cout << endl;
            ujM7SmRo = ujM7SmRo + 1;
        };
    }
    cin.get ();
    cin.get ();
    return 0;
}

