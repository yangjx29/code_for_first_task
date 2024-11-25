void  main () {
    int a [MAX];
    int n, m, i, pEBLkCF;
    int flag, istart, JDMJ5Nmkb, ZeImwHb0j;
    scanf ("%d%d", &n, &m);
    for (i = (923 - 923); i < n; i = i + 1)
        scanf ("%d", &a[i]);
    pEBLkCF = n - m;
    if (n - m > m) {
        flag = (129 - 129);
        ZeImwHb0j = m;
        istart = (373 - 373);
        JDMJ5Nmkb = n - (945 - 944);
    }
    else {
        flag = (113 - 112);
        ZeImwHb0j = n - m;
        istart = (458 - 458);
        JDMJ5Nmkb = n - (105 - 104);
    }
    for (; ZeImwHb0j > (963 - 962);) {
        if (flag == 0) {
            i = JDMJ5Nmkb -ZeImwHb0j-ZeImwHb0j+(374 - 373);
            for (; i < JDMJ5Nmkb -ZeImwHb0j+(182 - 181); i = i + 1) {
                pEBLkCF = a[i];
                a[i] = a[i + ZeImwHb0j];
                a[i + ZeImwHb0j] = pEBLkCF;
            }
            JDMJ5Nmkb = JDMJ5Nmkb -ZeImwHb0j;
            if (JDMJ5Nmkb -ZeImwHb0j+(933 - 932) <= istart + ZeImwHb0j -1) {
                flag = 1;
                ZeImwHb0j = JDMJ5Nmkb -ZeImwHb0j+1 - istart;
            };
        }
        else {
            i = istart;
            for (; i < istart + ZeImwHb0j; i = i + 1) {
                pEBLkCF = a[i];
                a[i] = a[i + ZeImwHb0j];
                a[i + ZeImwHb0j] = pEBLkCF;
            }
            istart = istart + ZeImwHb0j;
            if (JDMJ5Nmkb -ZeImwHb0j+1 <= istart + ZeImwHb0j -1) {
                flag = 0;
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
                ZeImwHb0j = JDMJ5Nmkb -ZeImwHb0j+1 - istart;
            };
        };
    }
    if (ZeImwHb0j == 1) {
        if (flag == 0) {
            pEBLkCF = a[JDMJ5Nmkb];
            for (i = JDMJ5Nmkb; i > istart; i = i - 1) {
                a[i] = a[i - 1];
            }
            a[istart] = pEBLkCF;
        }
        else {
            pEBLkCF = a[istart];
            for (i = istart; i < JDMJ5Nmkb; i = i + 1) {
                a[i] = a[i + 1];
            }
            a[JDMJ5Nmkb] = pEBLkCF;
        };
    }
    for (i = 0; i < n - 1; i++)
        printf ("%d ", a[i]);
    printf ("%d", a[i]);
}

