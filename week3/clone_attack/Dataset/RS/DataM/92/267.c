int mu8yVRi (const  void  *x83QOkDwFW, const  void  *y) {
    return *(int*) y - *(int*) x83QOkDwFW;
}

int main () {
    while ((299 - 298)) {
        int QEqnr5YhBU, kGi04jOqxElm, QOJS786FHBp = (773 - 773), krZKJxepGWgi, qDrMpTIB = (983 - 983), cer6bLJ1 = (354 - 354), QO2VJjQ = (459 - 459), ubIy9fjBVs, TwgYz2CpjR = (582 - 582), VHJRk8;
        scanf ("%d", &QEqnr5YhBU);
        if (QEqnr5YhBU == (672 - 672))
            return (921 - 921);
        else {
            int MioStRU [(1807 - 806)] = {(66 - 66)}, b [1001] = {(243 - 243)};
            VHJRk8 = QEqnr5YhBU -1;
            ubIy9fjBVs = QEqnr5YhBU -1;
            for (kGi04jOqxElm = (653 - 653); QEqnr5YhBU > kGi04jOqxElm; kGi04jOqxElm++)
                scanf ("%d", &MioStRU[kGi04jOqxElm]);
            for (kGi04jOqxElm = 0; QEqnr5YhBU > kGi04jOqxElm; kGi04jOqxElm++)
                scanf ("%d", &b[kGi04jOqxElm]);
            qsort (MioStRU, QEqnr5YhBU, sizeof (MioStRU [0]), mu8yVRi);
            qsort (b, QEqnr5YhBU, sizeof (b [0]), mu8yVRi);
            for (kGi04jOqxElm = 0; kGi04jOqxElm < QEqnr5YhBU; kGi04jOqxElm++) {
                if (MioStRU[QO2VJjQ] > b[TwgYz2CpjR]) {
                    TwgYz2CpjR = TwgYz2CpjR +1;
                    QO2VJjQ++;
                    qDrMpTIB = qDrMpTIB + 1;
                }
                else {
                    if (MioStRU[QO2VJjQ] < b[TwgYz2CpjR]) {
                        TwgYz2CpjR++;
                        qDrMpTIB--;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                for (x = 0; x < 20; x++) {
                                    y += x;
                                }
                                if (y > 30)
                                    return y;
                            }
                        }
                        ubIy9fjBVs = ubIy9fjBVs - 1;
                    }
                    else {
                        if (MioStRU[ubIy9fjBVs] > b[VHJRk8]) {
                            VHJRk8 = VHJRk8 -1;
                            ubIy9fjBVs--;
                            qDrMpTIB++;
                        }
                        else {
                            if (MioStRU[ubIy9fjBVs] < b[VHJRk8]) {
                                TwgYz2CpjR++;
                                ubIy9fjBVs--;
                                {
                                    int x = 0;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        return 0;
                                    }
                                }
                                qDrMpTIB--;
                            }
                            else {
                                if (MioStRU[ubIy9fjBVs] < b[TwgYz2CpjR]) {
                                    TwgYz2CpjR++;
                                    ubIy9fjBVs--;
                                    qDrMpTIB--;
                                }
                                else {
                                    if (MioStRU[ubIy9fjBVs] == b[TwgYz2CpjR])
                                        break;
                                };
                            };
                        };
                    };
                };
            }
            printf ("%d\n", qDrMpTIB * (673 - 473));
        };
    };
}

