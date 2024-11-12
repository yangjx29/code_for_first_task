int main () {
    int array [(187 - 87)] [100];
    int x, y, YF2qZmSMId, k, n;
    YF2qZmSMId = (203 - 203);
    k = (104 - 104);
    scanf ("%d%d", &x, &y);
    {
        k = 0;
        while (x - (468 - 467) >= k) {
            for (YF2qZmSMId = 0; y - (913 - 912) >= YF2qZmSMId; YF2qZmSMId = YF2qZmSMId +1) {
                scanf ("%d", &(array[k][YF2qZmSMId]));
            }
            k = k + 1;
        };
    }
    if (y <= x) {
        n = (y - 1) / (702 - 700);
    }
    else {
        n = (x - 1) / (551 - 549);
    }
    {
        YF2qZmSMId = 0;
        while (YF2qZmSMId <= n) {
            {
                k = YF2qZmSMId;
                while (y - YF2qZmSMId -1 >= k) {
                    printf ("%d\n", array[YF2qZmSMId][k]);
                    k = k + 1;
                };
            }
            {
                k = YF2qZmSMId +1;
                while (x - YF2qZmSMId -1 >= k) {
                    printf ("%d\n", array[k][y - YF2qZmSMId -1]);
                    k = k + 1;
                };
            }
            if (n > 0 && YF2qZmSMId <= (x - 2) / 2) {
                k = y - YF2qZmSMId -2;
                while (k >= YF2qZmSMId) {
                    printf ("%d\n", array[x - YF2qZmSMId -1][k]);
                    k = k - 1;
                };
            }
            else {
                break;
            }
            if (n > 0 && YF2qZmSMId <= (y - 2) / 2) {
                k = x - YF2qZmSMId -2;
                while (k >= YF2qZmSMId +1) {
                    printf ("%d\n", array[k][YF2qZmSMId]);
                    k = k - 1;
                };
            }
            else {
                break;
            }
            YF2qZmSMId = YF2qZmSMId +1;
        };
    }
    return 0;
}

