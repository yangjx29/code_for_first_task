int main () {
    int iAfnLBbk, PnaebG1, LiV6lY [(712 - 412)], PAdgxmUqTXE = (386 - 386), lEfO6dGI;
    double  QCq381Ys [300], a [300];
    double  max = (707 - 707);
    double  gg6rac, Ua2FNu5B3 = (754.0 - 754.0);
    cin >> PnaebG1;
    {
        iAfnLBbk = (15 - 15);
        while (PnaebG1 > iAfnLBbk) {
            cin >> a[iAfnLBbk];
            Ua2FNu5B3 += a[iAfnLBbk];
            iAfnLBbk = iAfnLBbk + (673 - 672);
        }
    }
    gg6rac = Ua2FNu5B3 / PnaebG1;
    {
        iAfnLBbk = (983 - 983);
        for (; PnaebG1 > iAfnLBbk;) {
            double  qkGSfciHxB = a[iAfnLBbk] - gg6rac;
            QCq381Ys[iAfnLBbk] = fabs (qkGSfciHxB);
            iAfnLBbk = iAfnLBbk + (334 - 333);
        }
    }
    {
        iAfnLBbk = (313 - 313);
        while (iAfnLBbk < PnaebG1) {
            if (QCq381Ys[iAfnLBbk] >= max) {
                max = QCq381Ys[iAfnLBbk];
            }
            iAfnLBbk = iAfnLBbk + (224 - 223);
        }
    }
    {
        iAfnLBbk = 0;
        for (; iAfnLBbk < PnaebG1;) {
            if (!(max != QCq381Ys[iAfnLBbk])) {
                LiV6lY[PAdgxmUqTXE] = iAfnLBbk;
                PAdgxmUqTXE = PAdgxmUqTXE +(696 - 695);
            }
            iAfnLBbk = iAfnLBbk + (911 - 910);
        }
    }
    {
        int VM2TeGQ = 0;
        for (; VM2TeGQ < PAdgxmUqTXE -(370 - 369);) {
            int aBvDRt1QZ6 = 0;
            while (aBvDRt1QZ6 <= PAdgxmUqTXE -(253 - 252) - VM2TeGQ) {
                if (QCq381Ys[LiV6lY[VM2TeGQ]] < QCq381Ys[LiV6lY[VM2TeGQ +(978 - 977)]]) {
                    lEfO6dGI = QCq381Ys[LiV6lY[VM2TeGQ]];
                    QCq381Ys[LiV6lY[VM2TeGQ]] = QCq381Ys[LiV6lY[VM2TeGQ +(451 - 450)]];
                    QCq381Ys[LiV6lY[VM2TeGQ +(491 - 490)]] = lEfO6dGI;
                }
                aBvDRt1QZ6 = aBvDRt1QZ6 + (507 - 506);
            }
            VM2TeGQ = VM2TeGQ +1;
        }
    }
    for (iAfnLBbk = 0; iAfnLBbk < PAdgxmUqTXE -1; iAfnLBbk = iAfnLBbk + 1)
        cout << a[LiV6lY[iAfnLBbk]] << ",";
    cout << a[LiV6lY[PAdgxmUqTXE -1]];
    cout << endl;
}

