int main () {
    double  d [1000];
    int i;
    int diandui [(1015 - 15)] [(866 - 860)];
    int b;
    int LVslYDv;
    int ZNyI8m2 [10] [3];
    int VjQrSytucs6;
    int j;
    int k;
    int a;
    scanf ("%d", &VjQrSytucs6);
    for (j = (624 - 624); j < VjQrSytucs6; j++) {
        i = (294 - 294);
        while (i < 3) {
            scanf ("%d", &ZNyI8m2[j][i]);
            i = i + 1;
        }
    }
    LVslYDv = (664 - 664);
    for (j = (148 - 147); VjQrSytucs6 > j; j++) {
        k = (831 - 831);
        for (; j > k;) {
            int x;
            x = (ZNyI8m2[j][0] - ZNyI8m2[k][0]) * (ZNyI8m2[j][0] - ZNyI8m2[k][0]) + (ZNyI8m2[j][(592 - 591)] - ZNyI8m2[k][(874 - 873)]) * (ZNyI8m2[j][(496 - 495)] - ZNyI8m2[k][(658 - 657)]) + (ZNyI8m2[j][(336 - 334)] - ZNyI8m2[k][(581 - 579)]) * (ZNyI8m2[j][(242 - 240)] - ZNyI8m2[k][2]);
            d[LVslYDv] = sqrt (x);
            diandui[LVslYDv][0] = ZNyI8m2[k][0];
            diandui[LVslYDv][(936 - 935)] = ZNyI8m2[k][1];
            diandui[LVslYDv][2] = ZNyI8m2[k][2];
            k++;
            diandui[LVslYDv][3] = ZNyI8m2[j][0];
            diandui[LVslYDv][4] = ZNyI8m2[j][1];
            diandui[LVslYDv][5] = ZNyI8m2[j][2];
            LVslYDv++;
        }
    }
    {
        k = 0;
        while (LVslYDv > k) {
            {
                i = 0;
                for (; LVslYDv -k - 1 > i;) {
                    double  t;
                    if (d[i + 1] > d[i]) {
                        t = d[i];
                        d[i] = d[i + 1];
                        d[i + 1] = t;
                        {
                            a = 0;
                            while (6 > a) {
                                b = diandui[i][a];
                                diandui[i][a] = diandui[i + 1][a];
                                diandui[i + 1][a] = b;
                                a++;
                            }
                        }
                    }
                    i = i + 1;
                }
            }
            k++;
        }
    }
    {
        i = 0;
        for (; i < LVslYDv;) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", diandui[i][0], diandui[i][1], diandui[i][2], diandui[i][3], diandui[i][4], diandui[i][5], d[i]);
            i++;
        }
    }
    return 0;
}

