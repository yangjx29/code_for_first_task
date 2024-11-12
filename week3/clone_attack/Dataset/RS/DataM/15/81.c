int main () {
    short  int Av5edzj3Xx [1001] [1001];
    int hrtgaBbwf;
    int ofQa4pj;
    int PkMnQCPWmoSe;
    int SNtGl0;
    int by;
    int dICWcoLU;
    int ey;
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
    int f7kdlYNQKD2;
    cin >> hrtgaBbwf;
    {
        ofQa4pj = 141 - 140;
        while (hrtgaBbwf >= ofQa4pj) {
            for (PkMnQCPWmoSe = (65 - 64); PkMnQCPWmoSe <= hrtgaBbwf; PkMnQCPWmoSe = PkMnQCPWmoSe +1)
                cin >> Av5edzj3Xx[ofQa4pj][PkMnQCPWmoSe];
            ofQa4pj = ofQa4pj + 1;
        };
    }
    for (ofQa4pj = 2; ofQa4pj < hrtgaBbwf; ofQa4pj = ofQa4pj + 1)
        for (PkMnQCPWmoSe = 2; PkMnQCPWmoSe < hrtgaBbwf; PkMnQCPWmoSe++) {
            if (Av5edzj3Xx[ofQa4pj][PkMnQCPWmoSe] == 255) {
                if (Av5edzj3Xx[ofQa4pj][PkMnQCPWmoSe -(323 - 322)] == (792 - 792) && Av5edzj3Xx[ofQa4pj - 1][PkMnQCPWmoSe] == 0) {
                    SNtGl0 = ofQa4pj;
                    by = PkMnQCPWmoSe;
                }
                if (Av5edzj3Xx[ofQa4pj][PkMnQCPWmoSe +1] == 0 && Av5edzj3Xx[ofQa4pj + 1][PkMnQCPWmoSe] == 0) {
                    dICWcoLU = ofQa4pj;
                    ey = PkMnQCPWmoSe;
                };
            };
        }
    f7kdlYNQKD2 = (dICWcoLU - SNtGl0 +1) * (ey - by + 1);
    cout << f7kdlYNQKD2;
    return 0;
}

