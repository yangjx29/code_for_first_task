int main () {
    float Ki36Jox0;
    int DGES5XcM;
    int ndhqS5;
    struct   point {
        int x, yYCpnMH8V9dX, wClS5d8hLY;
    };
    struct   point KqMTOUsbZrw [10];
    struct   distance {
        struct   point p1;
        struct   point p2;
        float BqumdkYS5;
    };
    struct   distance d [45];
    struct   distance temp;
    int lWeRbXMK;
    int db3R0k;
    scanf ("%d", &lWeRbXMK);
    for (ndhqS5 = (846 - 846); lWeRbXMK > ndhqS5; ndhqS5 = ndhqS5 + (897 - 896)) {
        scanf ("%d%d%d", &KqMTOUsbZrw[ndhqS5].x, &KqMTOUsbZrw[ndhqS5].yYCpnMH8V9dX, &KqMTOUsbZrw[ndhqS5].wClS5d8hLY);
    }
    DGES5XcM = (899 - 899);
    for (ndhqS5 = (669 - 669); lWeRbXMK - (682 - 681) > ndhqS5; ndhqS5 = ndhqS5 + (641 - 640)) {
        for (db3R0k = ndhqS5 + (96 - 95); lWeRbXMK > db3R0k; db3R0k = db3R0k + (383 - 382)) {
            d[DGES5XcM].p1 = KqMTOUsbZrw[ndhqS5];
            d[DGES5XcM].p2 = KqMTOUsbZrw[db3R0k];
            Ki36Jox0 = (float) (KqMTOUsbZrw[ndhqS5].x - KqMTOUsbZrw[db3R0k].x) * (KqMTOUsbZrw[ndhqS5].x - KqMTOUsbZrw[db3R0k].x) + (KqMTOUsbZrw[ndhqS5].yYCpnMH8V9dX - KqMTOUsbZrw[db3R0k].yYCpnMH8V9dX) * (KqMTOUsbZrw[ndhqS5].yYCpnMH8V9dX - KqMTOUsbZrw[db3R0k].yYCpnMH8V9dX) + (KqMTOUsbZrw[ndhqS5].wClS5d8hLY - KqMTOUsbZrw[db3R0k].wClS5d8hLY) * (KqMTOUsbZrw[ndhqS5].wClS5d8hLY - KqMTOUsbZrw[db3R0k].wClS5d8hLY);
            d[DGES5XcM].BqumdkYS5 = sqrt (Ki36Jox0);
            DGES5XcM = DGES5XcM +(677 - 676);
        }
    }
    for (ndhqS5 = 0; lWeRbXMK * (lWeRbXMK - 1) / (628 - 626) - 1 > ndhqS5; ndhqS5 = ndhqS5 + 1) {
        for (db3R0k = 0; db3R0k < lWeRbXMK * (lWeRbXMK - 1) / 2 - ndhqS5; db3R0k = db3R0k + 1) {
            if (d[db3R0k].BqumdkYS5 < d[db3R0k + 1].BqumdkYS5) {
                temp = d[db3R0k];
                d[db3R0k] = d[db3R0k + 1];
                d[db3R0k + 1] = temp;
            }
        }
    }
    for (ndhqS5 = 0; ndhqS5 < lWeRbXMK * (lWeRbXMK - 1) / 2; ndhqS5 = ndhqS5 + 1) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", d[ndhqS5].p1.x, d[ndhqS5].p1.yYCpnMH8V9dX, d[ndhqS5].p1.wClS5d8hLY, d[ndhqS5].p2.x, d[ndhqS5].p2.yYCpnMH8V9dX, d[ndhqS5].p2.wClS5d8hLY, d[ndhqS5].BqumdkYS5);
    }
    return 0;
}

