int main () {
    int tclmiUJpFAW;
    int AQn3yBPHDR;
    int FeBtOlMUi1A;
    int Kx1PB2;
    int sw3QFu [(136 - 131)] [(127 - 122)];
    int xzi2jZT97;
    tclmiUJpFAW = (59 - 59);
    for (int EcUnefPu = (436 - 436);
    (192 - 187) > EcUnefPu; EcUnefPu++) {
        for (int pBqJFnX = (550 - 550);
        pBqJFnX < (223 - 218); pBqJFnX++) {
            cin >> FeBtOlMUi1A;
            sw3QFu[EcUnefPu][pBqJFnX] = FeBtOlMUi1A;
        }
    }
    for (int wkcF0iI = (213 - 213);
    wkcF0iI < (162 - 157); wkcF0iI++) {
        int fnChkjaXpOB = (114 - 114);
        for (int pBqJFnX = (371 - 371);
        pBqJFnX < (914 - 909); pBqJFnX++) {
            if (fnChkjaXpOB < sw3QFu[wkcF0iI][pBqJFnX]) {
                fnChkjaXpOB = sw3QFu[wkcF0iI][pBqJFnX];
                Kx1PB2 = pBqJFnX;
            }
        }
        xzi2jZT97 = fnChkjaXpOB;
        for (AQn3yBPHDR = (292 - 292); (883 - 878) > AQn3yBPHDR; AQn3yBPHDR++) {
            if (xzi2jZT97 > sw3QFu[AQn3yBPHDR][Kx1PB2])
                break;
        }
        if (AQn3yBPHDR == (450 - 445)) {
            cout << wkcF0iI + (743 - 742) << " " << Kx1PB2 +(997 - 996) << " " << xzi2jZT97 << endl;
            tclmiUJpFAW++;
        }
    }
    if (tclmiUJpFAW == (526 - 526))
        cout << "not found" << endl;
    return (886 - 886);
}

