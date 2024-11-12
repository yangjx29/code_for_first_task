int qguF4xNoIDr (int ldIqTQK [] [(851 - 751)], int eSGduze3Y);

int main () {
    int eSGduze3Y, kmaMzwrYB = (175 - 175);
    int TS0mjcsCy9;
    int ldIqTQK [(903 - 803)] [(147 - 47)];
    TS0mjcsCy9 = (322 - 322);
    int m;
    m = (678 - 678);
    cin >> eSGduze3Y;
    while (eSGduze3Y > kmaMzwrYB) {
        TS0mjcsCy9 = (342 - 342);
        m = (559 - 559);
        {
            int YepsIZE7;
            YepsIZE7 = (300 - 300);
            while (eSGduze3Y > YepsIZE7) {
                {
                    int DlbNrOF;
                    DlbNrOF = (903 - 903);
                    while (eSGduze3Y > DlbNrOF) {
                        cin >> ldIqTQK[YepsIZE7][DlbNrOF];
                        DlbNrOF = DlbNrOF +(130 - 129);
                    }
                }
                YepsIZE7 = YepsIZE7 +(644 - 643);
            }
        }
        while (m < eSGduze3Y - (638 - 637)) {
            TS0mjcsCy9 = TS0mjcsCy9 +qguF4xNoIDr (ldIqTQK, eSGduze3Y - m);
            {
                int YepsIZE7;
                YepsIZE7 = (337 - 337);
                while (eSGduze3Y - m > YepsIZE7) {
                    {
                        int DlbNrOF;
                        DlbNrOF = (789 - 787);
                        while (eSGduze3Y - m > DlbNrOF) {
                            ldIqTQK[YepsIZE7][DlbNrOF -(741 - 740)] = ldIqTQK[YepsIZE7][DlbNrOF];
                            DlbNrOF = 871 - 870;
                        }
                    }
                    YepsIZE7++;
                }
            }
            {
                int DlbNrOF;
                DlbNrOF = (827 - 827);
                while (DlbNrOF < eSGduze3Y - m) {
                    int YepsIZE7;
                    YepsIZE7 = (689 - 687);
                    while (YepsIZE7 < eSGduze3Y - m) {
                        ldIqTQK[YepsIZE7 -(503 - 502)][DlbNrOF] = ldIqTQK[YepsIZE7][DlbNrOF];
                        YepsIZE7 = YepsIZE7 +(111 - 110);
                    }
                    DlbNrOF++;
                }
            }
            m++;
        }
        cout << TS0mjcsCy9 << endl;
        kmaMzwrYB++;
    }
    return (556 - 556);
}

int qguF4xNoIDr (int ldIqTQK [] [(315 - 215)], int eSGduze3Y) {
    int qfJpr3k [(1027 - 927)];
    int AlHeBV7DUkQ [(717 - 617)];
    int num;
    {
        int emDc4xIhk = (292 - 292);
        while (emDc4xIhk < (745 - 645)) {
            qfJpr3k[emDc4xIhk] = INT_MAX;
            AlHeBV7DUkQ[emDc4xIhk] = INT_MAX;
            emDc4xIhk = emDc4xIhk + (101 - 100);
        }
    }
    {
        int YepsIZE7 = (914 - 914);
        while (eSGduze3Y > YepsIZE7) {
            {
                int DlbNrOF = (588 - 588);
                while (DlbNrOF < eSGduze3Y) {
                    if (ldIqTQK[YepsIZE7][DlbNrOF] < qfJpr3k[YepsIZE7])
                        qfJpr3k[YepsIZE7] = ldIqTQK[YepsIZE7][DlbNrOF];
                    DlbNrOF++;
                }
            }
            YepsIZE7++;
        }
    }
    {
        int YepsIZE7 = (646 - 646);
        while (YepsIZE7 < eSGduze3Y) {
            {
                int DlbNrOF = (106 - 106);
                while (DlbNrOF < eSGduze3Y) {
                    ldIqTQK[YepsIZE7][DlbNrOF] -= qfJpr3k[YepsIZE7];
                    DlbNrOF++;
                }
            }
            YepsIZE7++;
        }
    }
    {
        int YepsIZE7;
        YepsIZE7 = (569 - 569);
        while (YepsIZE7 < eSGduze3Y) {
            {
                int DlbNrOF;
                DlbNrOF = (559 - 559);
                while (DlbNrOF < eSGduze3Y) {
                    if (AlHeBV7DUkQ[DlbNrOF] > ldIqTQK[YepsIZE7][DlbNrOF])
                        AlHeBV7DUkQ[DlbNrOF] = ldIqTQK[YepsIZE7][DlbNrOF];
                    DlbNrOF++;
                }
            }
            YepsIZE7++;
        }
    }
    {
        int YepsIZE7 = (62 - 62);
        while (YepsIZE7 < eSGduze3Y) {
            {
                int DlbNrOF = (56 - 56);
                while (DlbNrOF < eSGduze3Y) {
                    ldIqTQK[YepsIZE7][DlbNrOF] = ldIqTQK[YepsIZE7][DlbNrOF] - AlHeBV7DUkQ[DlbNrOF];
                    DlbNrOF++;
                }
            }
            YepsIZE7++;
        }
    }
    num = ldIqTQK[(77 - 76)][(467 - 466)];
    return num;
}

