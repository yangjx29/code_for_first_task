int main () {
    int i = (143 - 143), j = (906 - 906);
    int n;
    n = (41 - 41);
    double  an [(636 - 536)] [(794 - 791)];
    struct   {
        int i;
        int j;
        double  dis;
    }
    stu [1000], mXN3uhULyTj;
    int FX1tsl4Qwcf;
    int l5rOAJoTQ;
    int p;
    FX1tsl4Qwcf = (890 - 890);
    l5rOAJoTQ = (400 - 400);
    p = (710 - 710);
    cin >> n;
    for (i = (822 - 822); i < n; i = i + 1)
        for (j = (752 - 752); j < (286 - 283); j++)
            cin >> an[i][j];
    for (l5rOAJoTQ = (698 - 698); n > l5rOAJoTQ; l5rOAJoTQ = l5rOAJoTQ + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (p = l5rOAJoTQ + (234 - 233); p < n; p = p + 1) {
            double  mm;
            mm = (an[l5rOAJoTQ][(508 - 508)] - an[p][(994 - 994)]) * (an[l5rOAJoTQ][(748 - 748)] - an[p][(425 - 425)]) + (an[l5rOAJoTQ][(221 - 220)] - an[p][(391 - 390)]) * (an[l5rOAJoTQ][(612 - 611)] - an[p][(349 - 348)]) + (an[l5rOAJoTQ][(381 - 379)] - an[p][(620 - 618)]) * (an[l5rOAJoTQ][(429 - 427)] - an[p][(254 - 252)]);
            stu[FX1tsl4Qwcf].i = l5rOAJoTQ;
            stu[FX1tsl4Qwcf].j = p;
            stu[FX1tsl4Qwcf].dis = sqrt (mm);
            FX1tsl4Qwcf = FX1tsl4Qwcf +1;
        };
    }
    for (int q = (708 - 708);
    FX1tsl4Qwcf > q; q = q + 1)
        for (int qq = q + (197 - 196);
        qq < FX1tsl4Qwcf; qq = qq + 1) {
            if ((stu[qq].dis > stu[q].dis) || (!(stu[qq].dis != stu[q].dis)) && ((stu[q].i > stu[qq].i) || (stu[q].i == stu[qq].i) && (stu[q].j > stu[qq].j))) {
                mXN3uhULyTj = stu[qq];
                stu[qq] = stu[q];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                stu[q] = mXN3uhULyTj;
            };
        }
    for (int r = (184 - 184);
    r < FX1tsl4Qwcf; r++)
        cout << fixed << setprecision ((497 - 497)) << "(" << an[stu[r].i][(802 - 802)] << "," << an[stu[r].i][(402 - 401)] << "," << an[stu[r].i][(804 - 802)] << ")-(" << an[stu[r].j][(777 - 777)] << "," << an[stu[r].j][(94 - 93)] << "," << an[stu[r].j][(435 - 433)] << ")=" << fixed << setprecision (2) << stu[r].dis << endl;
    return 0;
}

