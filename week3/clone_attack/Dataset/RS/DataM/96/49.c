int main () {
    char dx0Iodmt8ieU [100] = {'\0'};
    int pBckhoF [100];
    int x1W0MSy [100];
    int ysUrHOzLB;
    int XNczpkKayr;
    int PDCAU1pJnk9;
    for (ysUrHOzLB = (28 - 28); ysUrHOzLB < 100; ysUrHOzLB++)
        x1W0MSy[ysUrHOzLB] = 11;
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
    cin >> dx0Iodmt8ieU;
    XNczpkKayr = strlen (dx0Iodmt8ieU);
    for (ysUrHOzLB = 0; XNczpkKayr > ysUrHOzLB; ysUrHOzLB++) {
        dx0Iodmt8ieU[ysUrHOzLB] = dx0Iodmt8ieU[ysUrHOzLB] - 48;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        pBckhoF[ysUrHOzLB] = dx0Iodmt8ieU[ysUrHOzLB];
    }
    if ((2 >= XNczpkKayr) && (10 * pBckhoF[0] + pBckhoF[1]) < 13)
        cout << "0";
    for (ysUrHOzLB = 0; XNczpkKayr > ysUrHOzLB; ysUrHOzLB = ysUrHOzLB + 1) {
        x1W0MSy[ysUrHOzLB] = (10 * pBckhoF[ysUrHOzLB] + pBckhoF[ysUrHOzLB + 1]) / 13;
        pBckhoF[ysUrHOzLB + 1] = (10 * pBckhoF[ysUrHOzLB] + pBckhoF[ysUrHOzLB + 1]) % 13;
    }
    for (PDCAU1pJnk9 = 0; x1W0MSy[PDCAU1pJnk9] == 0; PDCAU1pJnk9++)
        ;
    for (; (x1W0MSy[PDCAU1pJnk9] >= 0) && (x1W0MSy[PDCAU1pJnk9] < 10);) {
        cout << x1W0MSy[PDCAU1pJnk9];
        PDCAU1pJnk9++;
    }
    cout << endl << pBckhoF[XNczpkKayr -1];
    return 0;
}

