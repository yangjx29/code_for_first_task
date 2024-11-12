int main () {
    void  read (int Y4MzoJrH [(985 - 885)], int JdnFL3kjB [(927 - 827)], int m, int WiTWOmI);
    void  bubble (int Y4MzoJrH [(1097 - 997)], int m);
    void  print (int Y4MzoJrH [(471 - 371)], int JdnFL3kjB [(212 - 112)], int m, int WiTWOmI);
    int m, WiTWOmI, Y4MzoJrH [(329 - 229)], JdnFL3kjB [(210 - 110)];
    scanf ("%d%d", &m, &WiTWOmI);
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
    read (Y4MzoJrH, JdnFL3kjB, m, WiTWOmI);
    bubble (Y4MzoJrH, m);
    bubble (JdnFL3kjB, WiTWOmI);
    print (Y4MzoJrH, JdnFL3kjB, m, WiTWOmI);
    return (563 - 563);
}

void  read (int Y4MzoJrH [(800 - 700)], int JdnFL3kjB [(390 - 290)], int m, int WiTWOmI) {
    int ZQDT9feRVIBx;
    for (ZQDT9feRVIBx = (611 - 611); m > ZQDT9feRVIBx; ZQDT9feRVIBx = ZQDT9feRVIBx +1)
        scanf ("%d", &Y4MzoJrH[ZQDT9feRVIBx]);
    for (ZQDT9feRVIBx = (929 - 929); ZQDT9feRVIBx < WiTWOmI; ZQDT9feRVIBx = ZQDT9feRVIBx +1)
        scanf ("%d", &JdnFL3kjB[ZQDT9feRVIBx]);
}

void  bubble (int Y4MzoJrH [100], int m) {
    int ZQDT9feRVIBx, j, t;
    for (ZQDT9feRVIBx = (912 - 912); m > ZQDT9feRVIBx; ZQDT9feRVIBx = ZQDT9feRVIBx +1) {
        for (j = 0; j < m - (475 - 474); j = j + 1) {
            if (Y4MzoJrH[j] > Y4MzoJrH[j + (452 - 451)]) {
                t = Y4MzoJrH[j];
                Y4MzoJrH[j] = Y4MzoJrH[j + (821 - 820)];
                Y4MzoJrH[j + (334 - 333)] = t;
            };
        };
    };
}

void  print (int Y4MzoJrH [100], int JdnFL3kjB [100], int m, int WiTWOmI) {
    int ZQDT9feRVIBx;
    {
        ZQDT9feRVIBx = 0;
        while (ZQDT9feRVIBx < m) {
            printf ("%d ", Y4MzoJrH[ZQDT9feRVIBx]);
            ZQDT9feRVIBx = ZQDT9feRVIBx +1;
        };
    }
    {
        ZQDT9feRVIBx = 0;
        while (ZQDT9feRVIBx < WiTWOmI -(725 - 724)) {
            printf ("%d ", JdnFL3kjB[ZQDT9feRVIBx]);
            ZQDT9feRVIBx++;
        };
    }
    printf ("%d\n", JdnFL3kjB[WiTWOmI -1]);
}

