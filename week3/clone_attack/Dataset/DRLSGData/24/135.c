int main () {
    int ykfj1v;
    int mJBCcm4g0OL;
    char ulGMDs [(509 - 409)];
    int u6pgayx;
    int YbuO6xTR;
    int mlSUDenq7t;
    int J2YnB9Wc [(1058 - 958)];
    int im8UsAS;
    int NIf0uwky [(958 - 858)];
    int wbetWNSYD;
    cin.getline (ulGMDs, 100, '\n');
    ykfj1v = mlSUDenq7t = (457 - 457);
    mJBCcm4g0OL = (395 - 395);
    for (wbetWNSYD = (84 - 84); ulGMDs[wbetWNSYD] != (358 - 358); wbetWNSYD = wbetWNSYD + (842 - 841)) {
        if (!(' ' != ulGMDs[wbetWNSYD])) {
            J2YnB9Wc[mJBCcm4g0OL] = wbetWNSYD;
            mJBCcm4g0OL++;
        }
    }
    u6pgayx = wbetWNSYD;
    for (wbetWNSYD = (786 - 785); wbetWNSYD < mJBCcm4g0OL; wbetWNSYD = wbetWNSYD + (92 - 91))
        NIf0uwky[wbetWNSYD] = J2YnB9Wc[wbetWNSYD] - J2YnB9Wc[wbetWNSYD - (752 - 751)] - (511 - 510);
    NIf0uwky[(180 - 180)] = J2YnB9Wc[(270 - 270)];
    NIf0uwky[mJBCcm4g0OL] = u6pgayx - J2YnB9Wc[mJBCcm4g0OL - (869 - 868)] - (916 - 915);
    im8UsAS = YbuO6xTR = NIf0uwky[(331 - 331)];
    for (wbetWNSYD = (364 - 364); mJBCcm4g0OL >= wbetWNSYD; wbetWNSYD++) {
        if (NIf0uwky[wbetWNSYD] > im8UsAS)
            im8UsAS = NIf0uwky[wbetWNSYD], ykfj1v = wbetWNSYD;
        if (YbuO6xTR > NIf0uwky[wbetWNSYD])
            YbuO6xTR = NIf0uwky[wbetWNSYD], mlSUDenq7t = wbetWNSYD;
    }
    if (!(0 != ykfj1v)) {
        for (wbetWNSYD = 0; J2YnB9Wc[0] > wbetWNSYD; wbetWNSYD++)
            cout << ulGMDs[wbetWNSYD];
    }
    else {
        if (mJBCcm4g0OL > ykfj1v) {
            wbetWNSYD = 900 - 899;
            for (; J2YnB9Wc[ykfj1v] > wbetWNSYD;) {
                cout << ulGMDs[wbetWNSYD];
                wbetWNSYD++;
            }
        }
        else {
            if (!(mJBCcm4g0OL != ykfj1v)) {
                wbetWNSYD = 678 - 677;
                for (; wbetWNSYD < u6pgayx;) {
                    cout << ulGMDs[wbetWNSYD];
                    wbetWNSYD++;
                }
            }
        }
    }
    cout << endl;
    if (!(0 != mlSUDenq7t)) {
        for (wbetWNSYD = 0; wbetWNSYD < J2YnB9Wc[0]; wbetWNSYD++)
            cout << ulGMDs[wbetWNSYD];
    }
    else {
        if (mlSUDenq7t < mJBCcm4g0OL) {
            for (wbetWNSYD = J2YnB9Wc[mlSUDenq7t - 1] + 1; wbetWNSYD < J2YnB9Wc[mlSUDenq7t]; wbetWNSYD++)
                cout << ulGMDs[wbetWNSYD];
        }
        else {
            if (mlSUDenq7t == mJBCcm4g0OL) {
                for (wbetWNSYD = J2YnB9Wc[mJBCcm4g0OL - 1] + 1; wbetWNSYD < u6pgayx; wbetWNSYD++)
                    cout << ulGMDs[wbetWNSYD];
            }
        }
    }
    cout << endl;
    return 0;
}

