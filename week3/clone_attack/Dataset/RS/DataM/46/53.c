int main () {
    int IJydnWa [(946 - 846)] [100], row, HuD0fbEiy4;
    int yNWuhMlZR;
    int oH0wl4baS;
    int yNxRm1ufhQpq;
    int TZ5CEyM;
    int qZ0SRUeJl;
    int kh1yYr;
    yNWuhMlZR = (454 - 454);
    oH0wl4baS = (724 - 724);
    yNxRm1ufhQpq = (1000 - 1000);
    TZ5CEyM = row * HuD0fbEiy4;
    qZ0SRUeJl = 0;
    kh1yYr = 0;
    cin >> row >> HuD0fbEiy4;
    for (int zI4NbAQmiC = (142 - 142);
    row > zI4NbAQmiC; zI4NbAQmiC = zI4NbAQmiC + 1) {
        int ixkT0Vvsc5 = (812 - 812);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ixkT0Vvsc5 < HuD0fbEiy4) {
            cin >> IJydnWa[zI4NbAQmiC][ixkT0Vvsc5];
            ixkT0Vvsc5 = ixkT0Vvsc5 + 1;
        };
    }
    while (true) {
        for (; HuD0fbEiy4 > oH0wl4baS; oH0wl4baS++) {
            yNxRm1ufhQpq = yNxRm1ufhQpq + 1;
            cout << IJydnWa[yNWuhMlZR][oH0wl4baS] << endl;
        }
        if (yNxRm1ufhQpq == TZ5CEyM)
            break;
        yNWuhMlZR = yNWuhMlZR + 1;
        oH0wl4baS = oH0wl4baS - 1;
        for (; row > yNWuhMlZR; yNWuhMlZR = yNWuhMlZR + 1) {
            yNxRm1ufhQpq = yNxRm1ufhQpq + 1;
            cout << IJydnWa[yNWuhMlZR][oH0wl4baS] << endl;
        }
        if (yNxRm1ufhQpq == TZ5CEyM)
            break;
        oH0wl4baS = oH0wl4baS - 1;
        yNWuhMlZR = yNWuhMlZR - 1;
        for (; oH0wl4baS >= kh1yYr; oH0wl4baS = oH0wl4baS - 1) {
            yNxRm1ufhQpq = yNxRm1ufhQpq + 1;
            cout << IJydnWa[yNWuhMlZR][oH0wl4baS] << endl;
        }
        if (yNxRm1ufhQpq == TZ5CEyM)
            break;
        yNWuhMlZR = yNWuhMlZR - 1;
        oH0wl4baS = oH0wl4baS + 1;
        row = row - 1;
        HuD0fbEiy4 = HuD0fbEiy4 -1;
        qZ0SRUeJl = qZ0SRUeJl + 1;
        for (; yNWuhMlZR >= qZ0SRUeJl; yNWuhMlZR = yNWuhMlZR - 1) {
            yNxRm1ufhQpq = yNxRm1ufhQpq + 1;
            cout << IJydnWa[yNWuhMlZR][oH0wl4baS] << endl;
        }
        if (yNxRm1ufhQpq == TZ5CEyM)
            break;
        oH0wl4baS = oH0wl4baS + 1;
        yNWuhMlZR = yNWuhMlZR + 1;
        kh1yYr = kh1yYr + 1;
    }
    cin >> row;
    return 0;
}

