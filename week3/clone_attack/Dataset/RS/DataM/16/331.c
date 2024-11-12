int main () {
    int MOhD4A1Jcqko, oA3oHEK27BT, FTEZmH5Kof, xS0cGKzUB, LSaiyltR1L24, QEzWe4DFMVm, EhAjCrB;
    scanf ("%d", &MOhD4A1Jcqko);
    oA3oHEK27BT = MOhD4A1Jcqko / 10000;
    FTEZmH5Kof = MOhD4A1Jcqko / 1000 - oA3oHEK27BT * 10;
    xS0cGKzUB = MOhD4A1Jcqko / 100 - FTEZmH5Kof *10 - oA3oHEK27BT * 100;
    LSaiyltR1L24 = MOhD4A1Jcqko / 10 - xS0cGKzUB * 10 - FTEZmH5Kof *100 - oA3oHEK27BT * 1000;
    QEzWe4DFMVm = MOhD4A1Jcqko -LSaiyltR1L24*10 - xS0cGKzUB * 100 - FTEZmH5Kof *1000 - oA3oHEK27BT * 10000;
    EhAjCrB = oA3oHEK27BT + FTEZmH5Kof *10 + xS0cGKzUB * 100 + LSaiyltR1L24 *1000 + QEzWe4DFMVm *10000;
    if (!(0 != oA3oHEK27BT)) {
        if (!(0 != FTEZmH5Kof)) {
            if (xS0cGKzUB == 0) {
                if (LSaiyltR1L24 == 0)
                    printf ("%01d", EhAjCrB / 10000);
                else
                    printf ("%02d", EhAjCrB / 1000);
            }
            else
                printf ("%03d", EhAjCrB / 100);
        }
        else
            printf ("%04d", EhAjCrB / 10);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else
        printf ("%05d", EhAjCrB);
    return 0;
}

