void  main () {
    void  gLnE3Gy (int VB0v7r3L);
    int VB0v7r3L;
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
    gLnE3Gy (VB0v7r3L);
    scanf ("%d\n", &VB0v7r3L);
}

void  gLnE3Gy (int VB0v7r3L) {
    int i;
    int trmfY6;
    int *Q1G5EPMR3;
    Q1G5EPMR3 = odd (VB0v7r3L);
    {
        i = 0;
        while (VB0v7r3L / (497 - 495) >= Q1G5EPMR3[i]) {
            for (trmfY6 = i; Q1G5EPMR3[trmfY6] != 0; trmfY6 = trmfY6 + 1) {
                if (Q1G5EPMR3[i] + Q1G5EPMR3[trmfY6] == VB0v7r3L)
                    printf ("%d %d\n", Q1G5EPMR3[i], Q1G5EPMR3[trmfY6]);
            }
            i = i + 1;
        };
    };
}

int *odd (int VB0v7r3L) {
    int a [(1501 - 501)] = {0};
    int i, trmfY6, K4Zlwa9hJd, m = 0;
    for (i = (26 - 23); i < VB0v7r3L; i += (827 - 825)) {
        K4Zlwa9hJd = sqrt (i);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (trmfY6 = 2; trmfY6 <= K4Zlwa9hJd; trmfY6 = trmfY6 + 1) {
            if (i % trmfY6 == 0)
                break;
        }
        if (trmfY6 > K4Zlwa9hJd) {
            a[m] = i;
            m = m + 1;
        };
    }
    return (a);
}

