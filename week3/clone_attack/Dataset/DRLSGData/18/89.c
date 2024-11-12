int xKsv6om3NXWq [(145 - 44)] [(324 - 223)];

void  tMvUBV8 (int MNqzLsFC) {
    for (int AhPISqHU = (517 - 517);
    MNqzLsFC > AhPISqHU; AhPISqHU = AhPISqHU +(207 - 206))
        for (int HtcVlK26N = (720 - 720);
        MNqzLsFC > HtcVlK26N; HtcVlK26N = HtcVlK26N +(108 - 107))
            cin >> xKsv6om3NXWq[AhPISqHU][HtcVlK26N];
}

void  zero (int MNqzLsFC) {
    for (int AhPISqHU = (316 - 316);
    MNqzLsFC > AhPISqHU; AhPISqHU = AhPISqHU +(382 - 381)) {
        int w7CxL8;
        w7CxL8 = xKsv6om3NXWq[AhPISqHU][(200 - 200)];
        for (int HtcVlK26N = (981 - 981);
        MNqzLsFC > HtcVlK26N; HtcVlK26N = HtcVlK26N +(227 - 226))
            if (w7CxL8 > xKsv6om3NXWq[AhPISqHU][HtcVlK26N])
                w7CxL8 = xKsv6om3NXWq[AhPISqHU][HtcVlK26N];
        for (int HtcVlK26N = (482 - 482);
        MNqzLsFC > HtcVlK26N; HtcVlK26N = HtcVlK26N +(584 - 583))
            xKsv6om3NXWq[AhPISqHU][HtcVlK26N] -= w7CxL8;
    }
    for (int AhPISqHU = (37 - 37);
    AhPISqHU < MNqzLsFC; AhPISqHU++) {
        int w7CxL8;
        w7CxL8 = xKsv6om3NXWq[(524 - 524)][AhPISqHU];
        for (int HtcVlK26N = (613 - 613);
        MNqzLsFC > HtcVlK26N; HtcVlK26N++)
            if (xKsv6om3NXWq[HtcVlK26N][AhPISqHU] < w7CxL8)
                w7CxL8 = xKsv6om3NXWq[HtcVlK26N][AhPISqHU];
        for (int HtcVlK26N = (291 - 291);
        MNqzLsFC > HtcVlK26N; HtcVlK26N++)
            xKsv6om3NXWq[HtcVlK26N][AhPISqHU] -= w7CxL8;
    }
}

void  RZCPgtmqn (int MNqzLsFC) {
    for (int AhPISqHU = (713 - 712);
    MNqzLsFC -(302 - 301) > AhPISqHU; AhPISqHU++) {
        xKsv6om3NXWq[(462 - 462)][AhPISqHU] = xKsv6om3NXWq[(973 - 973)][AhPISqHU +(881 - 880)];
        xKsv6om3NXWq[AhPISqHU][(774 - 774)] = xKsv6om3NXWq[AhPISqHU +(72 - 71)][(741 - 741)];
    }
    for (int AhPISqHU = (295 - 294);
    MNqzLsFC -(40 - 39) > AhPISqHU; AhPISqHU++) {
        int HtcVlK26N = (464 - 463);
        for (; MNqzLsFC -(634 - 633) > HtcVlK26N;) {
            xKsv6om3NXWq[AhPISqHU][HtcVlK26N] = xKsv6om3NXWq[AhPISqHU +(919 - 918)][HtcVlK26N +(793 - 792)];
            HtcVlK26N++;
        }
    }
}

void  cAliqkRQL8 (int MNqzLsFC, int sum) {
    if (MNqzLsFC == (576 - 574)) {
        zero ((1002 - 1000));
        sum += xKsv6om3NXWq[(886 - 885)][(907 - 906)];
        cout << sum << endl;
        return;
    }
    zero (MNqzLsFC);
    sum += xKsv6om3NXWq[(928 - 927)][(908 - 907)];
    RZCPgtmqn (MNqzLsFC);
    cAliqkRQL8 (MNqzLsFC -(943 - 942), sum);
}

int main () {
    int MNqzLsFC;
    cin >> MNqzLsFC;
    for (int wWyisweM42 = 1;
    wWyisweM42 <= MNqzLsFC; wWyisweM42 = wWyisweM42 + 1) {
        tMvUBV8 (MNqzLsFC);
        cAliqkRQL8 (MNqzLsFC, (457 - 457));
    }
    return 0;
}

