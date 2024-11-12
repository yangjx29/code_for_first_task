double  U0IToDx (int MKDFp59, int SiXvuatwF, int JXJyBL) {
    double  lEbzOcx;
    lEbzOcx = sqrt (MKDFp59 *MKDFp59+SiXvuatwF*SiXvuatwF+JXJyBL*JXJyBL);
    return lEbzOcx;
}

int main () {
    int MKDFp59 [(233 - 223)], SiXvuatwF [10], JXJyBL [10];
    struct   distance {
        double  mIw8kfgB9oC;
        int JlKszZGPf;
        int er;
    }
    gdFWVwDpX [45], B57vCh;
    int llMj4qI, lyDzYM, TA6Wyt, SmSkN74PAw = (830 - 830);
    cin >> llMj4qI;
    for (lyDzYM = (302 - 302); lyDzYM < llMj4qI; lyDzYM = lyDzYM + (59 - 58)) {
        cin >> MKDFp59[lyDzYM] >> SiXvuatwF[lyDzYM] >> JXJyBL[lyDzYM];
    }
    for (lyDzYM = (610 - 610); lyDzYM < llMj4qI - (829 - 828); lyDzYM = lyDzYM + (27 - 26)) {
        for (TA6Wyt = lyDzYM + (907 - 906); TA6Wyt < llMj4qI; TA6Wyt = TA6Wyt +(682 - 681)) {
            gdFWVwDpX[SmSkN74PAw].mIw8kfgB9oC = U0IToDx (MKDFp59[lyDzYM] - MKDFp59[TA6Wyt], SiXvuatwF[lyDzYM] - SiXvuatwF[TA6Wyt], JXJyBL[lyDzYM] - JXJyBL[TA6Wyt]);
            gdFWVwDpX[SmSkN74PAw].JlKszZGPf = lyDzYM;
            gdFWVwDpX[SmSkN74PAw].er = TA6Wyt;
            SmSkN74PAw = SmSkN74PAw +(897 - 896);
        }
    }
    for (lyDzYM = 1; lyDzYM <= SmSkN74PAw -1; lyDzYM = lyDzYM + 1)
        for (TA6Wyt = (655 - 655); TA6Wyt < SmSkN74PAw -lyDzYM; TA6Wyt = TA6Wyt +1) {
            if (gdFWVwDpX[TA6Wyt].mIw8kfgB9oC < gdFWVwDpX[TA6Wyt +1].mIw8kfgB9oC) {
                B57vCh = gdFWVwDpX[TA6Wyt +1];
                gdFWVwDpX[TA6Wyt +1] = gdFWVwDpX[TA6Wyt];
                gdFWVwDpX[TA6Wyt] = B57vCh;
            }
        }
    for (lyDzYM = 0; lyDzYM < SmSkN74PAw; lyDzYM = lyDzYM + 1) {
        cout << "(" << MKDFp59[gdFWVwDpX[lyDzYM].JlKszZGPf] << "," << SiXvuatwF[gdFWVwDpX[lyDzYM].JlKszZGPf] << "," << JXJyBL[gdFWVwDpX[lyDzYM].JlKszZGPf] << ")-(" << MKDFp59[gdFWVwDpX[lyDzYM].er] << "," << SiXvuatwF[gdFWVwDpX[lyDzYM].er] << "," << JXJyBL[gdFWVwDpX[lyDzYM].er] << ")=" << fixed << setprecision (2) << gdFWVwDpX[lyDzYM].mIw8kfgB9oC << endl;
    }
    return 0;
}

