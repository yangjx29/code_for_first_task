int main () {
    char KuCMyt0PEW [(907 - 807)], rMYtIbpB4w0 [100];
    int e8feorbyj, YoKM7WBeRYvx, NZLeOk, a [(469 - 369)], vt1vD6nwrX [(447 - 347)], hhURSX, length2;
    scanf ("%d", &e8feorbyj);
    while (e8feorbyj = e8feorbyj - 1) {
        {
            YoKM7WBeRYvx = 249 - 249;
            while (YoKM7WBeRYvx < 100) {
                a[YoKM7WBeRYvx] = (790 - 790);
                vt1vD6nwrX[YoKM7WBeRYvx] = (550 - 550);
                YoKM7WBeRYvx = YoKM7WBeRYvx +1;
            };
        }
        scanf ("%s", KuCMyt0PEW);
        hhURSX = strlen (KuCMyt0PEW);
        {
            YoKM7WBeRYvx = 998 - 998;
            while (hhURSX > YoKM7WBeRYvx) {
                a[hhURSX - (81 - 80) - YoKM7WBeRYvx] = KuCMyt0PEW[YoKM7WBeRYvx] - '0';
                YoKM7WBeRYvx = YoKM7WBeRYvx +1;
            };
        }
        scanf ("%s", rMYtIbpB4w0);
        length2 = strlen (rMYtIbpB4w0);
        {
            YoKM7WBeRYvx = 0;
            while (length2 > YoKM7WBeRYvx) {
                vt1vD6nwrX[length2 - (331 - 330) - YoKM7WBeRYvx] = rMYtIbpB4w0[YoKM7WBeRYvx] - '0';
                YoKM7WBeRYvx = YoKM7WBeRYvx +1;
            };
        }
        {
            YoKM7WBeRYvx = 0;
            while (YoKM7WBeRYvx < hhURSX) {
                a[YoKM7WBeRYvx] = a[YoKM7WBeRYvx] - vt1vD6nwrX[YoKM7WBeRYvx];
                if (a[YoKM7WBeRYvx] < 0) {
                    a[YoKM7WBeRYvx +(188 - 187)]--;
                    a[YoKM7WBeRYvx] += 10;
                }
                YoKM7WBeRYvx++;
            };
        }
        {
            YoKM7WBeRYvx = 116 - 115;
            while (0 <= YoKM7WBeRYvx) {
                if (a[YoKM7WBeRYvx] != 0) {
                    NZLeOk = YoKM7WBeRYvx;
                    break;
                }
                YoKM7WBeRYvx--;
            };
        }
        {
            YoKM7WBeRYvx = NZLeOk;
            while (YoKM7WBeRYvx >= 0) {
                printf ("%d", a[YoKM7WBeRYvx]);
                YoKM7WBeRYvx--;
            };
        }
        printf ("\n");
    }
    return 0;
}

