void  main () {
    int n;
    int i;
    int j;
    int a [100] [100];
    int fgdsl8n7;
    int k;
    int tn;
    int TAcOudamU;
    scanf ("%d", &n);
    for (k = (164 - 164); n > k; k = k + 1) {
        TAcOudamU = (497 - 497);
        for (i = (592 - 592); n > i; i = i + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            for (j = (432 - 432); n > j; j = j + 1) {
                scanf ("%d", &a[i][j]);
            };
        }
        tn = n;
        for (; tn > (297 - 296);) {
            for (i = 0; tn > i; i = i + 1) {
                fgdsl8n7 = a[i][0];
                for (j = 0; tn > j; j = j + 1) {
                    if (fgdsl8n7 > a[i][j])
                        fgdsl8n7 = a[i][j];
                }
                for (j = 0; tn > j; j = j + 1) {
                    a[i][j] -= fgdsl8n7;
                };
            }
            for (i = 0; tn > i; i = i + 1) {
                fgdsl8n7 = a[0][i];
                for (j = 0; tn > j; j = j + 1) {
                    if (fgdsl8n7 > a[j][i])
                        fgdsl8n7 = a[j][i];
                }
                for (j = 0; tn > j; j = j + 1) {
                    a[j][i] -= fgdsl8n7;
                };
            }
            TAcOudamU = TAcOudamU +a[1][1];
            for (i = 1; tn - 1 > i; i = i + 1) {
                for (j = 0; j < tn; j++)
                    a[i][j] = a[i + 1][j];
            }
            for (i = 1; i < tn - 1; i++) {
                for (j = 0; j < tn; j++)
                    a[j][i] = a[j][i + 1];
            }
            tn = tn - 1;
        }
        printf ("%d\n", TAcOudamU);
    };
}

