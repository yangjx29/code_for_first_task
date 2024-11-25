int main () {
    int k [100] [100];
    int m;
    int x;
    int row;
    int GXYjPv9I;
    int ttbBSa;
    int qnk2QB4;
    m = (238 - 238);
    x = (835 - 835);
    row = 0;
    GXYjPv9I = 0;
    scanf ("%d %d", &row, &GXYjPv9I);
    for (ttbBSa = 0; row > ttbBSa; ttbBSa++) {
        qnk2QB4 = 0;
        while (GXYjPv9I > qnk2QB4) {
            scanf ("%d", &k[ttbBSa][qnk2QB4]);
            qnk2QB4++;
        };
    }
    for (m = 0; row + GXYjPv9I -1 > m; m = m + 1) {
        for (qnk2QB4 = m;; qnk2QB4 = qnk2QB4 - 1) {
            if (qnk2QB4 >= GXYjPv9I || row <= m - qnk2QB4) {
                break;
            }
            if (0 > qnk2QB4 || m - qnk2QB4 < 0) {
                break;
            }
            printf ("%d\n", k[m - qnk2QB4][qnk2QB4]);
        };
    }
    {
        m = GXYjPv9I;
        while (m < row + GXYjPv9I -1) {
            for (qnk2QB4 = GXYjPv9I -1; qnk2QB4 >= 0; qnk2QB4--) {
                if (m - qnk2QB4 >= row) {
                    break;
                }
                printf ("%d\n", k[m - qnk2QB4][qnk2QB4]);
            }
            m++;
        };
    }
    return 0;
}

