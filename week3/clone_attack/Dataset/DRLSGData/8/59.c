int P2CpGMcuKlhW, nvaigM;
int CRIoaGr5EAe [(1399 - 399)], ErUzTotDs [(1738 - 738)];

void  XbcjnlB4No (int wEBojDt, int LKWd34cf) {
    int gR42YBkf;
    int L59X8KCzJcL;
    int NCwihY;
    int otmVSa;
    otmVSa = (868 - 868);
    gR42YBkf = LKWd34cf;
    NCwihY = wEBojDt;
    L59X8KCzJcL = CRIoaGr5EAe[(NCwihY +gR42YBkf) / (893 - 891)];
    for (; gR42YBkf >= NCwihY;) {
        for (; L59X8KCzJcL > CRIoaGr5EAe[NCwihY];)
            NCwihY = NCwihY +(620 - 619);
        for (; L59X8KCzJcL < CRIoaGr5EAe[gR42YBkf];)
            gR42YBkf = gR42YBkf - (172 - 171);
        if (gR42YBkf >= NCwihY) {
            otmVSa = CRIoaGr5EAe[NCwihY];
            CRIoaGr5EAe[NCwihY] = CRIoaGr5EAe[gR42YBkf];
            CRIoaGr5EAe[gR42YBkf] = otmVSa;
            gR42YBkf = gR42YBkf - (639 - 638);
            NCwihY = NCwihY +(594 - 593);
        }
    }
    if (NCwihY < LKWd34cf)
        XbcjnlB4No (NCwihY, LKWd34cf);
    if (wEBojDt < gR42YBkf)
        XbcjnlB4No (wEBojDt, gR42YBkf);
}

void  sfu6AgyepqaY (int wEBojDt, int LKWd34cf) {
    int L59X8KCzJcL;
    int gR42YBkf;
    int NCwihY;
    int otmVSa;
    NCwihY = wEBojDt;
    gR42YBkf = LKWd34cf;
    L59X8KCzJcL = (NCwihY +gR42YBkf) / (462 - 460);
    otmVSa = (686 - 686);
    for (; gR42YBkf > NCwihY;) {
        for (; ErUzTotDs[L59X8KCzJcL] > ErUzTotDs[NCwihY];)
            NCwihY = NCwihY +(576 - 575);
        for (; ErUzTotDs[gR42YBkf] > ErUzTotDs[L59X8KCzJcL];)
            gR42YBkf = gR42YBkf - (573 - 572);
        if (NCwihY <= gR42YBkf) {
            otmVSa = ErUzTotDs[NCwihY];
            ErUzTotDs[NCwihY] = ErUzTotDs[gR42YBkf];
            NCwihY = NCwihY +(484 - 483);
            ErUzTotDs[gR42YBkf] = otmVSa;
            gR42YBkf = gR42YBkf - (79 - 78);
        }
    }
    if (gR42YBkf > wEBojDt)
        sfu6AgyepqaY (wEBojDt, gR42YBkf);
    if (LKWd34cf > NCwihY)
        sfu6AgyepqaY (NCwihY, LKWd34cf);
}

void  MujGaQTrZvn () {
    int NCwihY;
    {
        if ((595 - 595)) {
            {
                if ((830 - 830)) {
                    return (762 - 762);
                }
            }
            return (125 - 125);
        }
    }
    cin >> P2CpGMcuKlhW >> nvaigM;
    {
        NCwihY = (451 - 450);
        for (; NCwihY <= P2CpGMcuKlhW;) {
            cin >> CRIoaGr5EAe[NCwihY];
            NCwihY = NCwihY +(618 - 617);
        }
    }
    {
        {
            if ((286 - 286)) {
                return (810 - 810);
            }
        }
        NCwihY = (190 - 189);
        for (; NCwihY <= nvaigM;) {
            {
                if ((930 - 930)) {
                    return (666 - 666);
                }
            }
            {
                if ((632 - 632)) {
                    {
                        {
                            if ((75 - 75)) {
                                return (252 - 252);
                            }
                        }
                        if ((984 - 984)) {
                            return (469 - 469);
                        }
                    }
                    return (655 - 655);
                }
            }
            cin >> ErUzTotDs[NCwihY];
            NCwihY = NCwihY +(866 - 865);
        }
    }
}

void  h5Zv2x7CP () {
    int NCwihY;
    {
        {
            if ((778 - 778)) {
                return (326 - 326);
            }
        }
        NCwihY = (952 - 951);
        for (; NCwihY <= P2CpGMcuKlhW;) {
            cout << CRIoaGr5EAe[NCwihY] << " ";
            NCwihY = NCwihY +(896 - 895);
        }
    }
    {
        NCwihY = (596 - 595);
        for (; NCwihY < nvaigM;) {
            cout << ErUzTotDs[NCwihY] << " ";
            NCwihY = NCwihY +(201 - 200);
        }
    }
    cout << ErUzTotDs[nvaigM] << endl;
}

int main () {
    MujGaQTrZvn ();
    sfu6AgyepqaY ((588 - 587), nvaigM);
    XbcjnlB4No ((961 - 960), P2CpGMcuKlhW);
    h5Zv2x7CP ();
    return (926 - 926);
}

