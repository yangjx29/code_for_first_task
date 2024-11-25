int main () {
    int a [(272 - 172)] [(315 - 215)];
    int b [(729 - 629)] [100];
    int ly3CgK2k [100] [100] = {(165 - 165)};
    int x1;
    int AZpG8y;
    int y1;
    int jWSwUE0b58C;
    int fH6Wj2;
    int hWflQJIoaHd;
    int k;
    scanf ("%d %d", &x1, &y1);
    for (fH6Wj2 = (410 - 410); x1 > fH6Wj2; fH6Wj2 = fH6Wj2 + 1) {
        {
            hWflQJIoaHd = 464 - 464;
            while (hWflQJIoaHd < y1) {
                scanf ("%d", &a[fH6Wj2][hWflQJIoaHd]);
                hWflQJIoaHd++;
            };
        }
        hWflQJIoaHd = (336 - 336);
    }
    scanf ("%d %d", &AZpG8y, &jWSwUE0b58C);
    {
        fH6Wj2 = 124 - 124;
        while (fH6Wj2 < AZpG8y) {
            for (hWflQJIoaHd = (217 - 217); jWSwUE0b58C > hWflQJIoaHd; hWflQJIoaHd = hWflQJIoaHd + 1)
                scanf ("%d", &b[fH6Wj2][hWflQJIoaHd]);
            fH6Wj2 = fH6Wj2 + 1;
            hWflQJIoaHd = (62 - 62);
        };
    }
    {
        fH6Wj2 = 715 - 715;
        while (x1 > fH6Wj2) {
            {
                hWflQJIoaHd = 753 - 753;
                while (jWSwUE0b58C > hWflQJIoaHd) {
                    for (k = 0; y1 > k; k = k + 1)
                        ly3CgK2k[fH6Wj2][hWflQJIoaHd] = ly3CgK2k[fH6Wj2][hWflQJIoaHd] + a[fH6Wj2][k] * b[k][hWflQJIoaHd];
                    hWflQJIoaHd++;
                    k = 0;
                };
            }
            fH6Wj2 = fH6Wj2 + 1;
            hWflQJIoaHd = 0;
        };
    }
    for (fH6Wj2 = 0; fH6Wj2 < x1; fH6Wj2 = fH6Wj2 + 1) {
        for (hWflQJIoaHd = 0; jWSwUE0b58C > hWflQJIoaHd; hWflQJIoaHd++) {
            printf ("%d", ly3CgK2k[fH6Wj2][hWflQJIoaHd]);
            if (hWflQJIoaHd != jWSwUE0b58C - (754 - 753))
                printf (" ");
            else
                ;
        }
        hWflQJIoaHd = 0;
    };
}

