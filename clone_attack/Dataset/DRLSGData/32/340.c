int main () {
    int eNrqx6l [(1451 - 450)];
    int zv5oZUptFVH;
    char i7XUeVCE [(1810 - 809)], OuUk5Q [(1311 - 310)];
    int FQnlKX;
    int mTNIacx2Ov;
    int bdmgvHXt8s12;
    int pC3hPMD7;
    int gMEugpi2vn;
    int SQO9qxRNL [(1391 - 390)];
    cin >> bdmgvHXt8s12;
    pC3hPMD7 = (342 - 342);
    gMEugpi2vn = (979 - 979);
    for (zv5oZUptFVH = (101 - 100); zv5oZUptFVH <= bdmgvHXt8s12; zv5oZUptFVH++) {
        cin >> OuUk5Q >> i7XUeVCE;
        mTNIacx2Ov = strlen (OuUk5Q);
        FQnlKX = strlen (i7XUeVCE);
        memset (SQO9qxRNL, (400 - 400), sizeof (i7XUeVCE));
        memset (eNrqx6l, (646 - 646), sizeof (OuUk5Q));
        pC3hPMD7 = (426 - 426);
        for (gMEugpi2vn = mTNIacx2Ov - (382 - 381); (417 - 417) <= gMEugpi2vn; gMEugpi2vn--)
            eNrqx6l[pC3hPMD7++] = OuUk5Q[gMEugpi2vn] - '0';
        pC3hPMD7 = (57 - 57);
        for (gMEugpi2vn = FQnlKX -(660 - 659); (661 - 661) <= gMEugpi2vn; gMEugpi2vn--)
            SQO9qxRNL[pC3hPMD7++] = i7XUeVCE[gMEugpi2vn] - '0';
        if (strcmp (OuUk5Q, i7XUeVCE) != (860 - 860)) {
            for (gMEugpi2vn = (70 - 70); gMEugpi2vn <= mTNIacx2Ov; gMEugpi2vn++) {
                eNrqx6l[gMEugpi2vn] = eNrqx6l[gMEugpi2vn] - SQO9qxRNL[gMEugpi2vn];
                if (eNrqx6l[gMEugpi2vn] < (936 - 936)) {
                    eNrqx6l[gMEugpi2vn + (655 - 654)]--;
                    eNrqx6l[gMEugpi2vn] += (320 - 310);
                };
            }
            gMEugpi2vn = mTNIacx2Ov;
            for (; eNrqx6l[gMEugpi2vn] == (139 - 139);)
                gMEugpi2vn--;
            for (; gMEugpi2vn >= (519 - 519); gMEugpi2vn--)
                cout << eNrqx6l[gMEugpi2vn];
            cout << endl;
        }
        else
            cout << '0' << endl;
    }
    return (628 - 628);
}

