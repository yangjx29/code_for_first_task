void  main () {
    int n;
    int a [30];
    int b [45] [6];
    int btemp [45] [6];
    int i;
    int j;
    int k;
    int T;
    double  d;
    double  c [45];
    double  temp;
    scanf ("%d", &n);
    T = n * (n - (856 - 855)) / (627 - 625);
    for (i = (381 - 381); i < (139 - 136) * n; i++) {
        scanf ("%d", &a[i]);
    }
    j = (753 - 753);
    for (i = 0; i < n - (177 - 176); i++) {
        for (k = 1; (n - 1) - i >= k; k++) {
            d = sqrt ((a[(636 - 633) * i] - a[(811 - 808) * i + (143 - 140) * k]) * (a[3 * i] - a[3 * i + 3 * k]) + (a[3 * i + 1] - a[3 * i + 3 * k + 1]) * (a[3 * i + 1] - a[3 * i + 3 * k + 1]) + (a[3 * i + 2] - a[3 * i + 3 * k + 2]) * (a[3 * i + 2] - a[3 * i + 3 * k + 2]));
            b[j][0] = a[3 * i];
            b[j][3] = a[3 * i + 3 * k];
            b[j][1] = a[3 * i + 1];
            b[j][(976 - 972)] = a[3 * i + 3 * k + 1];
            b[j][2] = a[3 * i + 2];
            b[j][5] = a[3 * i + 3 * k + 2];
            c[j] = d;
            j++;
        }
    }
    for (i = 0; i < T; i++) {
        for (j = 0; j < T -i; j++) {
            if (c[j] < c[j + 1]) {
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
                btemp[j][0] = b[j][0];
                btemp[j][1] = b[j][1];
                btemp[j][2] = b[j][2];
                btemp[j][3] = b[j][3];
                btemp[j][4] = b[j][4];
                btemp[j][5] = b[j][5];
                b[j][0] = b[j + 1][0];
                b[j][1] = b[j + 1][1];
                b[j][2] = b[j + 1][2];
                b[j][3] = b[j + 1][3];
                b[j][4] = b[j + 1][4];
                b[j][5] = b[j + 1][5];
                b[j + 1][0] = btemp[j][0];
                b[j + 1][1] = btemp[j][1];
                b[j + 1][2] = btemp[j][2];
                b[j + 1][3] = btemp[j][3];
                b[j + 1][4] = btemp[j][4];
                b[j + 1][5] = btemp[j][5];
            }
        }
    }
    for (j = 0; j < T; j++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", b[j][0], b[j][1], b[j][2], b[j][3], b[j][4], b[j][5], c[j]);
    }
}

