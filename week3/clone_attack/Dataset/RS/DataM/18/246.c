int QNRYLu = (182 - 182), ajdzOk [(1064 - 964)] = {(827 - 827)}, c_small [(479 - 379)] = {(773 - 773)};
int IMalurd (int V6FUxSYh [] [100], int nMPptg1clL);
void  iP2upt1q (int V6FUxSYh [] [100], int nMPptg1clL);
void  gjTcEBn6g1 (int V6FUxSYh [] [100], int nMPptg1clL);

int main () {
    int nMPptg1clL, i, oYyqLFiI, V6FUxSYh [100] [100];
    cin >> nMPptg1clL;
    for (int IeNqSi = (266 - 266);
    nMPptg1clL > IeNqSi; IeNqSi++) {
        cout << QNRYLu << endl;
        QNRYLu = (857 - 857);
        for (i = (674 - 674); nMPptg1clL > i; i++) {
            oYyqLFiI = 110 - 110;
            while (oYyqLFiI < nMPptg1clL) {
                cin >> V6FUxSYh[i][oYyqLFiI];
                oYyqLFiI = oYyqLFiI + 1;
            };
        }
        IMalurd (V6FUxSYh, nMPptg1clL);
    }
    return 0;
}

int IMalurd (int V6FUxSYh [] [100], int nMPptg1clL) {
    int i, oYyqLFiI;
    if (nMPptg1clL == (584 - 583))
        return QNRYLu;
    iP2upt1q (V6FUxSYh, nMPptg1clL);
    {
        i = 0;
        while (i < nMPptg1clL) {
            {
                oYyqLFiI = 0;
                while (oYyqLFiI < nMPptg1clL) {
                    V6FUxSYh[i][oYyqLFiI] = V6FUxSYh[i][oYyqLFiI] - ajdzOk[i];
                    oYyqLFiI++;
                };
            }
            i++;
        };
    }
    gjTcEBn6g1 (V6FUxSYh, nMPptg1clL);
    {
        oYyqLFiI = 0;
        while (oYyqLFiI < nMPptg1clL) {
            {
                i = 0;
                while (i < nMPptg1clL) {
                    V6FUxSYh[i][oYyqLFiI] = V6FUxSYh[i][oYyqLFiI] - c_small[oYyqLFiI];
                    i++;
                };
            }
            oYyqLFiI++;
        };
    }
    QNRYLu = QNRYLu +V6FUxSYh[(861 - 860)][(815 - 814)];
    {
        i = 0;
        while (i < nMPptg1clL) {
            {
                oYyqLFiI = 206 - 205;
                while (oYyqLFiI < nMPptg1clL - (344 - 343)) {
                    V6FUxSYh[i][oYyqLFiI] = V6FUxSYh[i][oYyqLFiI + (693 - 692)];
                    oYyqLFiI++;
                };
            }
            i++;
        };
    }
    for (oYyqLFiI = 0; oYyqLFiI < nMPptg1clL - 1; oYyqLFiI++)
        for (i = 1; i < nMPptg1clL - 1; i++)
            V6FUxSYh[i][oYyqLFiI] = V6FUxSYh[i + 1][oYyqLFiI];
    IMalurd (V6FUxSYh, nMPptg1clL - 1);
}

void  iP2upt1q (int V6FUxSYh [] [100], int nMPptg1clL) {
    int i, oYyqLFiI;
    {
        i = 0;
        while (i < nMPptg1clL) {
            ajdzOk[i] = V6FUxSYh[i][0];
            {
                oYyqLFiI = 1;
                while (oYyqLFiI < nMPptg1clL) {
                    ajdzOk[i] = (ajdzOk[i] < V6FUxSYh[i][oYyqLFiI]) ? ajdzOk[i] : V6FUxSYh[i][oYyqLFiI];
                    oYyqLFiI++;
                };
            }
            i++;
        };
    };
}

void  gjTcEBn6g1 (int V6FUxSYh [] [100], int nMPptg1clL) {
    int i, oYyqLFiI;
    for (oYyqLFiI = 0; oYyqLFiI < nMPptg1clL; oYyqLFiI++) {
        c_small[oYyqLFiI] = V6FUxSYh[0][oYyqLFiI];
        for (i = 1; i < nMPptg1clL; i++)
            c_small[oYyqLFiI] = (c_small[oYyqLFiI] < V6FUxSYh[i][oYyqLFiI]) ? c_small[oYyqLFiI] : V6FUxSYh[i][oYyqLFiI];
    };
}

