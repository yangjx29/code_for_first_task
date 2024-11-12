int main () {
    long  QMAf382;
    long  Ok95I4d;
    long  lose;
    long  EFuMgEJ3UlH;
    long  SBxwz6;
    long  qF0KaBULw [1002];
    long  LpBKOHAon5u;
    long  Ax2SVl3r1D [1002];
    long  Dpwj80mXk [1002];
    long  Rl79BZ8V [1002];
    long  TUDMGAmj;
    long  lw3fWsoQT;
    long  GWcjEY5e0A;
    long  ooniKrqtB;
    long  IhXMgvSuaI;
    QMAf382 = 1;
    Ok95I4d = 0;
    lose = 0;
    EFuMgEJ3UlH = 0;
    SBxwz6 = 0;
    QMAf382 = 1;
    while (QMAf382 != 0) {
        long  DMuqhYp19x [1002] = {0}, fU91uC [1002] = {0}, zWcljq3hmfpK [1002] = {0}, ZxAC7k [1002] = {0};
        scanf ("%d\n", &QMAf382);
        EFuMgEJ3UlH = 0;
        lose = 0;
        Ok95I4d = 0;
        if (QMAf382 == 0)
            break;
        {
            TUDMGAmj = 1;
            while (QMAf382 >= TUDMGAmj) {
                scanf ("%d", &qF0KaBULw[TUDMGAmj]);
                TUDMGAmj = TUDMGAmj +1;
            }
        }
        lw3fWsoQT = qF0KaBULw[1];
        for (TUDMGAmj = 1; QMAf382 >= TUDMGAmj; TUDMGAmj = TUDMGAmj +1)
            scanf ("%d", &Ax2SVl3r1D[TUDMGAmj]);
        for (ooniKrqtB = 1; ooniKrqtB <= QMAf382; ooniKrqtB = ooniKrqtB + 1) {
            TUDMGAmj = 1 + ooniKrqtB;
            for (; TUDMGAmj <= QMAf382;) {
                if (qF0KaBULw[ooniKrqtB] >= qF0KaBULw[TUDMGAmj]) {
                    GWcjEY5e0A = qF0KaBULw[TUDMGAmj];
                    qF0KaBULw[TUDMGAmj] = qF0KaBULw[ooniKrqtB];
                    qF0KaBULw[ooniKrqtB] = GWcjEY5e0A;
                }
                TUDMGAmj = TUDMGAmj +1;
            }
        }
        {
            ooniKrqtB = 1;
            for (; ooniKrqtB <= QMAf382;) {
                {
                    TUDMGAmj = 1 + ooniKrqtB;
                    for (; TUDMGAmj <= QMAf382;) {
                        if (Ax2SVl3r1D[TUDMGAmj] <= Ax2SVl3r1D[ooniKrqtB]) {
                            GWcjEY5e0A = Ax2SVl3r1D[TUDMGAmj];
                            Ax2SVl3r1D[TUDMGAmj] = Ax2SVl3r1D[ooniKrqtB];
                            Ax2SVl3r1D[ooniKrqtB] = GWcjEY5e0A;
                        }
                        TUDMGAmj = TUDMGAmj +1;
                    }
                }
                ooniKrqtB = ooniKrqtB + 1;
            }
        }
        for (TUDMGAmj = 1; TUDMGAmj <= QMAf382; TUDMGAmj = TUDMGAmj +1) {
            ooniKrqtB = QMAf382;
            while (ooniKrqtB != 0) {
                if (DMuqhYp19x[TUDMGAmj] == 0 && fU91uC[ooniKrqtB] == 0)
                    if (qF0KaBULw[TUDMGAmj] > Ax2SVl3r1D[ooniKrqtB]) {
                        Ok95I4d = Ok95I4d +1;
                        fU91uC[ooniKrqtB] = 1;
                        DMuqhYp19x[TUDMGAmj] = 1;
                        break;
                    }
                ooniKrqtB = ooniKrqtB - 1;
            }
        }
        for (TUDMGAmj = 1; TUDMGAmj <= QMAf382; TUDMGAmj = TUDMGAmj +1) {
            if (DMuqhYp19x[TUDMGAmj] == 0)
                for (ooniKrqtB = 1; ooniKrqtB <= QMAf382; ooniKrqtB = ooniKrqtB + 1) {
                    if (fU91uC[ooniKrqtB] == 0)
                        if (qF0KaBULw[TUDMGAmj] == Ax2SVl3r1D[ooniKrqtB]) {
                            EFuMgEJ3UlH = EFuMgEJ3UlH +1;
                            break;
                        }
                }
        }
        IhXMgvSuaI = 400 * Ok95I4d -200 * QMAf382 +200 * EFuMgEJ3UlH;
        printf ("%d\n", IhXMgvSuaI);
    }
    return 0;
}

