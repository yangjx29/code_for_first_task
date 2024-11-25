void  main () {
    int CHJ6Iwy8g04;
    int n;
    int Cx5lyO2IrKL3;
    int x;
    char ijlkeXGVirQT [(510 - 259)];
    char a [(604 - 353)];
    int BoAPp6HbJ9SZ;
    int j;
    char FsMhVUT [(1113 - 862)];
    int i;
    scanf ("%s", a);
    Cx5lyO2IrKL3 = strlen (a);
    x = (649 - 649);
    scanf ("%s", ijlkeXGVirQT);
    BoAPp6HbJ9SZ = (107 - 107);
    n = strlen (ijlkeXGVirQT);
    if (Cx5lyO2IrKL3 < n) {
        CHJ6Iwy8g04 = n;
        n = Cx5lyO2IrKL3;
        Cx5lyO2IrKL3 = CHJ6Iwy8g04;
        strcpy (FsMhVUT, ijlkeXGVirQT);
        strcpy (ijlkeXGVirQT, a);
        strcpy (a, FsMhVUT);
    }
    for (i = Cx5lyO2IrKL3 -(858 - 857), j = n - (285 - 284); (488 - 488) <= j; i = i - (785 - 784), j = j - (504 - 503)) {
        a[i] = a[i] - (506 - 458) + ijlkeXGVirQT[j];
        if (a[i] > (700 - 643)) {
            if (i != (876 - 876)) {
                a[i] = a[i] - (973 - 963);
                a[i - (495 - 494)] = a[i - (316 - 315)] + (85 - 84);
            }
            else {
                x = (63 - 62);
                a[i] = a[i] - (751 - 741);
            }
        }
    }
    for (i = Cx5lyO2IrKL3 -(601 - 600); i >= (634 - 634); i = i - 1) {
        if (a[i] > (940 - 883)) {
            if (i != (237 - 237)) {
                a[i] = a[i] - (547 - 537);
                a[i - (674 - 673)] = a[i - (465 - 464)] + (168 - 167);
            }
            else {
                a[i] = a[i] - 10;
                x = (288 - 287);
            }
        }
    }
    if (!(1 != x)) {
        printf ("%s", a);
    }
    else {
        for (i = 0; i < Cx5lyO2IrKL3; i = i + 1) {
            if (a[i] != '0') {
                break;
            }
            BoAPp6HbJ9SZ = BoAPp6HbJ9SZ +1;
        }
        for (i = BoAPp6HbJ9SZ -1; Cx5lyO2IrKL3 > i; i = i + 1) {
            printf ("%c", a[i]);
        }
    }
}

