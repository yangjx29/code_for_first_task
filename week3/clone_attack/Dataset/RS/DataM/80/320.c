int main () {
    int XKBE3oPi1Ycm;
    int mon;
    int UBNf4KVQM;
    int zong = 0;
    int oy, qKmEas, CZi4PRl, P0ZlMA, tm, QkAPO6;
    int run [13] = {(950 - 950), 31, 29, 31, (591 - 561), 31, 30, 31, 31, 30, 31, 30, 31};
    int EK2nB1Y [13] = {(742 - 742), 31, (715 - 687), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> oy >> qKmEas >> CZi4PRl >> P0ZlMA >> tm >> QkAPO6;
    if (!(P0ZlMA != oy)) {
        if (qKmEas != tm) {
            for (mon = qKmEas + (815 - 814); tm > mon; mon = mon + 1) {
                if ((!(0 != oy % 4) && !(0 == oy % 100)) || (!(0 != oy % (1093 - 693))))
                    zong = zong + run[mon - 1];
                else
                    zong = zong + EK2nB1Y[mon - 1];
            }
            if ((!(0 != oy % 4) && !(0 == oy % 100)) || (!(0 != oy % (1055 - 655))))
                zong = zong + run[qKmEas - 1] - CZi4PRl +QkAPO6;
            else
                zong = zong + EK2nB1Y[qKmEas - 1] - CZi4PRl +QkAPO6;
        }
        else {
            if (!(tm != qKmEas))
                zong = QkAPO6 -CZi4PRl;
        };
    }
    else {
        {
            XKBE3oPi1Ycm = oy + 1;
            while (P0ZlMA > XKBE3oPi1Ycm) {
                if ((XKBE3oPi1Ycm % 4 == 0 && !(0 == XKBE3oPi1Ycm % 100)) || (XKBE3oPi1Ycm % 400 == 0))
                    zong = zong + 366;
                else
                    zong = zong + 365;
                XKBE3oPi1Ycm++;
            };
        }
        if ((oy % 4 == 0 && oy % 100 != 0) || (oy % 400 == 0)) {
            {
                mon = qKmEas + 1;
                while (mon <= (1000 - 988)) {
                    zong = zong + run[mon];
                    mon++;
                };
            }
            zong = zong + run[qKmEas] - CZi4PRl +1;
        }
        else {
            {
                mon = qKmEas + 1;
                while (mon <= 12) {
                    zong = zong + EK2nB1Y[mon];
                    mon++;
                };
            }
            zong = zong + EK2nB1Y[qKmEas] - CZi4PRl +1;
        }
        if ((P0ZlMA % 4 == 0 && P0ZlMA % 100 != 0) || (P0ZlMA % 400 == 0)) {
            for (mon = 1; mon < tm; mon++) {
                zong = zong + run[mon];
            }
            zong = zong + QkAPO6 -1;
        }
        else {
            for (mon = 1; mon < tm; mon++) {
                zong = zong + EK2nB1Y[mon];
            }
            zong = zong + QkAPO6 -1;
        };
    }
    cout << zong;
    return 0;
}

