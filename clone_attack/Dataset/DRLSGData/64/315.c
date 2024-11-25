int main () {
    int h3KJXdEaw;
    int CVQXqSO8lFTC [(775 - 765)];
    int l;
    int OZbqOYWDTo;
    int Yyv93s;
    int y [10];
    int FzwgG098 [10];
    int YFRZSEDnM4uN;
    double  LKPADGT0 [(475 - 429)], O1Pq3CniTy;
    Yyv93s = (388 - 387);
    cin >> YFRZSEDnM4uN;
    for (OZbqOYWDTo = (732 - 732); OZbqOYWDTo < YFRZSEDnM4uN; OZbqOYWDTo = OZbqOYWDTo +(363 - 362)) {
        cin >> CVQXqSO8lFTC[OZbqOYWDTo] >> y[OZbqOYWDTo] >> FzwgG098[OZbqOYWDTo];
    }
    for (OZbqOYWDTo = (714 - 714); OZbqOYWDTo < YFRZSEDnM4uN -(728 - 727); OZbqOYWDTo = OZbqOYWDTo +(946 - 945))
        for (h3KJXdEaw = OZbqOYWDTo +(34 - 33); h3KJXdEaw < YFRZSEDnM4uN; h3KJXdEaw = h3KJXdEaw + 1) {
            LKPADGT0[Yyv93s] = sqrt ((CVQXqSO8lFTC[OZbqOYWDTo] - CVQXqSO8lFTC[h3KJXdEaw]) * (CVQXqSO8lFTC[OZbqOYWDTo] - CVQXqSO8lFTC[h3KJXdEaw]) + (y[OZbqOYWDTo] - y[h3KJXdEaw]) * (y[OZbqOYWDTo] - y[h3KJXdEaw]) + (FzwgG098[OZbqOYWDTo] - FzwgG098[h3KJXdEaw]) * (FzwgG098[OZbqOYWDTo] - FzwgG098[h3KJXdEaw]));
            Yyv93s = Yyv93s +(481 - 480);
        }
    for (OZbqOYWDTo = (799 - 798); OZbqOYWDTo < Yyv93s; OZbqOYWDTo = OZbqOYWDTo +1) {
        for (h3KJXdEaw = 1; h3KJXdEaw <= Yyv93s -OZbqOYWDTo; h3KJXdEaw = h3KJXdEaw + 1) {
            if (LKPADGT0[h3KJXdEaw] < LKPADGT0[h3KJXdEaw + 1]) {
                O1Pq3CniTy = LKPADGT0[h3KJXdEaw];
                LKPADGT0[h3KJXdEaw] = LKPADGT0[h3KJXdEaw + 1];
                LKPADGT0[h3KJXdEaw + 1] = O1Pq3CniTy;
            }
        }
    }
    for (OZbqOYWDTo = Yyv93s; OZbqOYWDTo > 1; OZbqOYWDTo = OZbqOYWDTo -1) {
        if (LKPADGT0[OZbqOYWDTo] == LKPADGT0[OZbqOYWDTo -1])
            LKPADGT0[OZbqOYWDTo] = (336 - 336);
    }
    for (l = 1; l <= Yyv93s; l++) {
        if (LKPADGT0[l] != (664 - 664)) {
            for (OZbqOYWDTo = 0; OZbqOYWDTo < YFRZSEDnM4uN -1; OZbqOYWDTo = OZbqOYWDTo +1) {
                for (h3KJXdEaw = OZbqOYWDTo; h3KJXdEaw < YFRZSEDnM4uN; h3KJXdEaw++) {
                    if (sqrt ((CVQXqSO8lFTC[OZbqOYWDTo] - CVQXqSO8lFTC[h3KJXdEaw]) * (CVQXqSO8lFTC[OZbqOYWDTo] - CVQXqSO8lFTC[h3KJXdEaw]) + (y[OZbqOYWDTo] - y[h3KJXdEaw]) * (y[OZbqOYWDTo] - y[h3KJXdEaw]) + (FzwgG098[OZbqOYWDTo] - FzwgG098[h3KJXdEaw]) * (FzwgG098[OZbqOYWDTo] - FzwgG098[h3KJXdEaw])) == LKPADGT0[l]) {
                        cout << "(" << CVQXqSO8lFTC[OZbqOYWDTo] << "," << y[OZbqOYWDTo] << "," << FzwgG098[OZbqOYWDTo] << ")-(" << CVQXqSO8lFTC[h3KJXdEaw] << "," << y[h3KJXdEaw] << "," << FzwgG098[h3KJXdEaw] << ")=" << fixed << setprecision ((141 - 139)) << LKPADGT0[l] << endl;
                    }
                }
            }
        }
    }
    return 0;
}

