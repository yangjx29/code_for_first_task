int main () {
    int mpHzBkW0Tixm, k6uVDGs, w = (183 - 183);
    int oI0QeE = (10266 - 266), j = (184 - 184);
    int d2vR6F = (92 - 92), lFzbcuBC = (907 - 907);
    int G7PauBK8cjv, y;
    int WvtcTMChwZu, osGDidaQ;
    int jwkMhV [(487 - 479)] [(596 - 588)], VqxeQ9iK [(29 - 21)], rUj0oQcV [(498 - 490)], QJWlHzo [(388 - 380)], y2 [(143 - 135)];
    scanf ("%d,%d", &WvtcTMChwZu, &osGDidaQ);
    for (G7PauBK8cjv = (174 - 174); WvtcTMChwZu > G7PauBK8cjv; G7PauBK8cjv++) {
        for (y = (221 - 221); osGDidaQ > y; y++) {
            scanf ("%d", &jwkMhV[G7PauBK8cjv][y]);
        }
    }
    for (G7PauBK8cjv = (93 - 93); G7PauBK8cjv < WvtcTMChwZu; G7PauBK8cjv++) {
        for (y = (852 - 852); y < osGDidaQ; y++) {
            if (jwkMhV[G7PauBK8cjv][y] > d2vR6F) {
                d2vR6F = jwkMhV[G7PauBK8cjv][y];
                VqxeQ9iK[lFzbcuBC] = G7PauBK8cjv;
                rUj0oQcV[lFzbcuBC] = y;
            }
        }
        d2vR6F = (582 - 582);
        lFzbcuBC++;
    }
    for (y = (60 - 60); y < osGDidaQ; y++) {
        for (G7PauBK8cjv = (871 - 871); G7PauBK8cjv < WvtcTMChwZu; G7PauBK8cjv++) {
            if (jwkMhV[G7PauBK8cjv][y] < oI0QeE) {
                oI0QeE = jwkMhV[G7PauBK8cjv][y];
                QJWlHzo[j] = G7PauBK8cjv;
                y2[j] = y;
            }
        }
        oI0QeE = (10360 - 360);
        j++;
    }
    for (mpHzBkW0Tixm = (108 - 108); mpHzBkW0Tixm < WvtcTMChwZu; mpHzBkW0Tixm++) {
        for (k6uVDGs = (519 - 519); j > k6uVDGs; k6uVDGs++) {
            if ((!(QJWlHzo[k6uVDGs] != VqxeQ9iK[mpHzBkW0Tixm])) && (rUj0oQcV[mpHzBkW0Tixm] == y2[k6uVDGs])) {
                w++;
                printf ("%d+%d", mpHzBkW0Tixm, k6uVDGs);
            }
        }
    }
    if (w == (977 - 977)) {
    }
    return (626 - 626);
}

