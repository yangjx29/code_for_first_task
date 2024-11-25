int main () {
    int eDKPgm [11];
    int jW89tMEV [11];
    int JTb1eS7X [11];
    int PkS7ZK2mycV;
    int gFkrZJ59, TUf6uZz9, aqox3FKawJ, PCSmJrPTR5, ISXeJBFDt;
    double  s;
    double  w [100];
    int DohZ1FEVfD9 [100];
    int olXiqep [100];
    int d;
    {
        if (0) {
            return 0;
        }
    }
    cin >> PkS7ZK2mycV;
    {
        gFkrZJ59 = 1;
        while (gFkrZJ59 <= PkS7ZK2mycV) {
            cin >> eDKPgm[gFkrZJ59] >> jW89tMEV[gFkrZJ59] >> JTb1eS7X[gFkrZJ59];
            gFkrZJ59++;
        }
    }
    d = PkS7ZK2mycV *(PkS7ZK2mycV -1) / 2;
    gFkrZJ59 = 1;
    {
        TUf6uZz9 = 1;
        while (TUf6uZz9 < PkS7ZK2mycV) {
            {
                aqox3FKawJ = TUf6uZz9 +1;
                while (aqox3FKawJ <= PkS7ZK2mycV) {
                    w[gFkrZJ59] = sqrt (pow ((eDKPgm[TUf6uZz9] - eDKPgm[aqox3FKawJ]), 2.0) + pow ((jW89tMEV[TUf6uZz9] - jW89tMEV[aqox3FKawJ]), 2.0) + pow ((JTb1eS7X[TUf6uZz9] - JTb1eS7X[aqox3FKawJ]), 2.0));
                    DohZ1FEVfD9[gFkrZJ59] = TUf6uZz9;
                    olXiqep[gFkrZJ59] = aqox3FKawJ;
                    aqox3FKawJ++;
                    gFkrZJ59++;
                }
            }
            TUf6uZz9++;
        }
    }
    {
        TUf6uZz9 = 1;
        while (TUf6uZz9 < d) {
            {
                gFkrZJ59 = 1;
                while (gFkrZJ59 <= d - TUf6uZz9) {
                    if (w[gFkrZJ59] < w[gFkrZJ59 + 1]) {
                        s = w[gFkrZJ59];
                        w[gFkrZJ59] = w[gFkrZJ59 + 1];
                        w[gFkrZJ59 + 1] = s;
                        PCSmJrPTR5 = DohZ1FEVfD9[gFkrZJ59];
                        DohZ1FEVfD9[gFkrZJ59] = DohZ1FEVfD9[gFkrZJ59 + 1];
                        DohZ1FEVfD9[gFkrZJ59 + 1] = PCSmJrPTR5;
                        ISXeJBFDt = olXiqep[gFkrZJ59];
                        olXiqep[gFkrZJ59] = olXiqep[gFkrZJ59 + 1];
                        olXiqep[gFkrZJ59 + 1] = ISXeJBFDt;
                    }
                    gFkrZJ59++;
                }
            }
            TUf6uZz9++;
        }
    }
    {
        gFkrZJ59 = 1;
        while (gFkrZJ59 <= d) {
            {
                if (0) {
                    return 0;
                }
            }
            cout << "(" << eDKPgm[DohZ1FEVfD9[gFkrZJ59]] << "," << jW89tMEV[DohZ1FEVfD9[gFkrZJ59]] << "," << JTb1eS7X[DohZ1FEVfD9[gFkrZJ59]] << ")-" << "(" << eDKPgm[olXiqep[gFkrZJ59]] << "," << jW89tMEV[olXiqep[gFkrZJ59]] << "," << JTb1eS7X[olXiqep[gFkrZJ59]] << ")=" << fixed << setprecision (2) << w[gFkrZJ59] << endl;
            gFkrZJ59++;
        }
    }
    return 0;
}

