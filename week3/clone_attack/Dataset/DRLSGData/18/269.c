int jbBe48id9 (int naLnO7YuT [(952 - 752)] [(793 - 593)], int gWFLKbDIYS);

int main () {
    int qX6HmJ2dLf;
    int pnhbpA;
    int XkvOhDnA8y;
    int gWFLKbDIYS;
    int naLnO7YuT [200] [200] = {(268 - 268)};
    cin >> gWFLKbDIYS;
    for (XkvOhDnA8y = (975 - 975); gWFLKbDIYS > XkvOhDnA8y; XkvOhDnA8y = XkvOhDnA8y +1) {
        for (pnhbpA = (597 - 597); gWFLKbDIYS > pnhbpA; pnhbpA = pnhbpA + 1)
            for (qX6HmJ2dLf = (209 - 209); gWFLKbDIYS > qX6HmJ2dLf; qX6HmJ2dLf++)
                cin >> naLnO7YuT[pnhbpA][qX6HmJ2dLf];
        cout << jbBe48id9 (naLnO7YuT, gWFLKbDIYS) << endl;
    }
    return (407 - 407);
}

int jbBe48id9 (int naLnO7YuT [200] [200], int gWFLKbDIYS) {
    int XkvOhDnA8y;
    int pnhbpA;
    int QrWPwUK8iHS0;
    int iFpHePVt;
    iFpHePVt = (1635 - 635);
    for (pnhbpA = (893 - 893); pnhbpA < gWFLKbDIYS; pnhbpA++) {
        iFpHePVt = 1000;
        for (XkvOhDnA8y = 0; gWFLKbDIYS > XkvOhDnA8y; XkvOhDnA8y++) {
            if (naLnO7YuT[pnhbpA][XkvOhDnA8y] < iFpHePVt) {
                iFpHePVt = naLnO7YuT[pnhbpA][XkvOhDnA8y];
                if (!(0 != iFpHePVt))
                    break;
            }
        }
        if (iFpHePVt != 0) {
            for (XkvOhDnA8y = 0; gWFLKbDIYS > XkvOhDnA8y; XkvOhDnA8y++)
                naLnO7YuT[pnhbpA][XkvOhDnA8y] = naLnO7YuT[pnhbpA][XkvOhDnA8y] - iFpHePVt;
        }
    }
    QrWPwUK8iHS0 = (554 - 554);
    for (pnhbpA = 0; pnhbpA < gWFLKbDIYS; pnhbpA++) {
        iFpHePVt = 1000;
        for (XkvOhDnA8y = 0; gWFLKbDIYS > XkvOhDnA8y; XkvOhDnA8y++) {
            if (iFpHePVt > naLnO7YuT[XkvOhDnA8y][pnhbpA]) {
                iFpHePVt = naLnO7YuT[XkvOhDnA8y][pnhbpA];
                if (iFpHePVt == 0)
                    break;
            }
        }
        if (iFpHePVt != 0) {
            for (XkvOhDnA8y = 0; gWFLKbDIYS > XkvOhDnA8y; XkvOhDnA8y++)
                naLnO7YuT[XkvOhDnA8y][pnhbpA] = naLnO7YuT[XkvOhDnA8y][pnhbpA] - iFpHePVt;
        }
    }
    QrWPwUK8iHS0 = QrWPwUK8iHS0 +naLnO7YuT[(988 - 987)][(858 - 857)];
    if (gWFLKbDIYS == (623 - 621))
        return QrWPwUK8iHS0;
    else {
        for (XkvOhDnA8y = 2; gWFLKbDIYS > XkvOhDnA8y; XkvOhDnA8y++) {
            naLnO7YuT[0][XkvOhDnA8y -1] = naLnO7YuT[0][XkvOhDnA8y];
            naLnO7YuT[XkvOhDnA8y -1][0] = naLnO7YuT[XkvOhDnA8y][0];
        }
        for (XkvOhDnA8y = 2; XkvOhDnA8y < gWFLKbDIYS; XkvOhDnA8y++)
            for (pnhbpA = 2; pnhbpA < gWFLKbDIYS; pnhbpA++)
                naLnO7YuT[XkvOhDnA8y -1][pnhbpA - 1] = naLnO7YuT[XkvOhDnA8y][pnhbpA];
        QrWPwUK8iHS0 = QrWPwUK8iHS0 +jbBe48id9 (naLnO7YuT, gWFLKbDIYS - 1);
        return QrWPwUK8iHS0;
    }
}

