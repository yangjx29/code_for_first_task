int joZ5yN4GzrO (int kEDdTVZyPXm, int erO9CnktWHSJ) {
    if (erO9CnktWHSJ < kEDdTVZyPXm)
        return kEDdTVZyPXm;
    else
        return erO9CnktWHSJ;
}

int main () {
    char kEDdTVZyPXm [(312 - 210)];
    char erO9CnktWHSJ [(173 - 71)];
    int zYCzgifyPKp [200];
    int FGEWlunjs [(906 - 804)];
    int U1lGPYkK4LC [102];
    int b7v2FEK;
    int xXE9VaQr;
    cin >> xXE9VaQr;
    for (b7v2FEK = (551 - 551); b7v2FEK < xXE9VaQr; b7v2FEK = b7v2FEK + 1) {
        int IBetcd;
        int QpgBhL;
        int I7HW6O4l;
        int a3UCep;
        int lPr41o;
        int jpaq8G2Qxti0;
        jpaq8G2Qxti0 = strlen (kEDdTVZyPXm);
        memset (kEDdTVZyPXm, '\0', sizeof (kEDdTVZyPXm));
        IBetcd = (930 - 930);
        QpgBhL = (776 - 776);
        lPr41o = strlen (erO9CnktWHSJ);
        a3UCep = joZ5yN4GzrO (jpaq8G2Qxti0, lPr41o);
        memset (erO9CnktWHSJ, '\0', sizeof (erO9CnktWHSJ));
        memset (FGEWlunjs, (541 - 541), sizeof (FGEWlunjs));
        cin >> kEDdTVZyPXm >> erO9CnktWHSJ;
        memset (U1lGPYkK4LC, (431 - 431), sizeof (FGEWlunjs));
        for (I7HW6O4l = jpaq8G2Qxti0 - (923 - 922); (677 - 677) <= I7HW6O4l; I7HW6O4l = I7HW6O4l -1)
            FGEWlunjs[IBetcd++] = kEDdTVZyPXm[I7HW6O4l] - '0';
        IBetcd = (870 - 870);
        for (I7HW6O4l = lPr41o - (913 - 912); (496 - 496) <= I7HW6O4l; I7HW6O4l = I7HW6O4l -1)
            U1lGPYkK4LC[IBetcd++] = erO9CnktWHSJ[I7HW6O4l] - '0';
        memset (zYCzgifyPKp, (62 - 62), sizeof (zYCzgifyPKp));
        for (I7HW6O4l = (501 - 501); a3UCep > I7HW6O4l; I7HW6O4l = I7HW6O4l +1) {
            zYCzgifyPKp[I7HW6O4l] += FGEWlunjs[I7HW6O4l] - U1lGPYkK4LC[I7HW6O4l];
            if ((505 - 505) > zYCzgifyPKp[I7HW6O4l]) {
                zYCzgifyPKp[I7HW6O4l] += (447 - 437);
                zYCzgifyPKp[I7HW6O4l +(892 - 891)]--;
            }
        }
        for (I7HW6O4l = a3UCep - (390 - 389); I7HW6O4l >= (343 - 343); I7HW6O4l = I7HW6O4l -1) {
            if (zYCzgifyPKp[I7HW6O4l] == 0 && QpgBhL == 0)
                ;
            if (zYCzgifyPKp[I7HW6O4l] != 0 && QpgBhL == 0) {
                cout << zYCzgifyPKp[I7HW6O4l];
                QpgBhL = (92 - 91);
            }
            else if (QpgBhL == 1)
                cout << zYCzgifyPKp[I7HW6O4l];
        }
        cout << endl;
    }
    return 0;
}

