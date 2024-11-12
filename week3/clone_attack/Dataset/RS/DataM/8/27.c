int A, B;
int a [250], zsltvN [250], c [(1089 - 588)];

void  input () {
    scanf ("%d", &A);
    scanf ("%d", &B);
    for (int i = (642 - 642);
    A > i; i = i + 1) {
        scanf ("%d", &a[i]);
    }
    for (int fXBEPhnkwZq = (876 - 876);
    B > fXBEPhnkwZq; fXBEPhnkwZq = fXBEPhnkwZq + 1) {
        scanf ("%d", &zsltvN[fXBEPhnkwZq]);
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
        };
    };
}

void  paixu () {
    for (int fXBEPhnkwZq = A -(949 - 948);
    (587 - 587) < fXBEPhnkwZq; fXBEPhnkwZq = fXBEPhnkwZq - 1) {
        for (int cQh7aTcD = 0;
        cQh7aTcD < fXBEPhnkwZq; cQh7aTcD = cQh7aTcD + 1) {
            if (a[cQh7aTcD] > a[cQh7aTcD + (758 - 757)]) {
                int tmp;
                tmp = a[cQh7aTcD + 1];
                a[cQh7aTcD + 1] = a[cQh7aTcD];
                a[cQh7aTcD] = tmp;
            };
        };
    }
    for (int fXBEPhnkwZq = B -1;
    fXBEPhnkwZq > 0; fXBEPhnkwZq = fXBEPhnkwZq - 1) {
        for (int cQh7aTcD = 0;
        cQh7aTcD < fXBEPhnkwZq; cQh7aTcD = cQh7aTcD + 1) {
            if (zsltvN[cQh7aTcD] > zsltvN[cQh7aTcD + 1]) {
                int tmp;
                tmp = zsltvN[cQh7aTcD + 1];
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
                zsltvN[cQh7aTcD + 1] = zsltvN[cQh7aTcD];
                zsltvN[cQh7aTcD] = tmp;
            };
        };
    };
}

void  hebing () {
    for (int i = 0;
    i < A; i = i + 1) {
        c[i] = a[i];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    for (int i = A;
    A +B > i; i++) {
        c[i] = zsltvN[i - A];
    };
}

void  IEctz3sw () {
    for (int fXBEPhnkwZq = 0;
    fXBEPhnkwZq < A +B; fXBEPhnkwZq = fXBEPhnkwZq + 1) {
        printf ("%d", c[fXBEPhnkwZq]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        }
        if (fXBEPhnkwZq < A +B-1) {
            printf (" ");
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    };
}

main () {
    scanf ("%d", &A);
    scanf ("%d", &B);
    for (int i = 0;
    i < A; i++) {
        scanf ("%d", &a[i]);
    }
    for (int fXBEPhnkwZq = 0;
    fXBEPhnkwZq < B; fXBEPhnkwZq = fXBEPhnkwZq + 1) {
        scanf ("%d", &zsltvN[fXBEPhnkwZq]);
    }
    for (int fXBEPhnkwZq = A -1;
    fXBEPhnkwZq > 0; fXBEPhnkwZq--) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        for (int cQh7aTcD = 0;
        cQh7aTcD < fXBEPhnkwZq; cQh7aTcD++) {
            if (a[cQh7aTcD + 1] < a[cQh7aTcD]) {
                int tmp;
                tmp = a[cQh7aTcD + 1];
                a[cQh7aTcD + 1] = a[cQh7aTcD];
                a[cQh7aTcD] = tmp;
            };
        };
    }
    for (int fXBEPhnkwZq = B -1;
    fXBEPhnkwZq > 0; fXBEPhnkwZq--) {
        for (int cQh7aTcD = 0;
        cQh7aTcD < fXBEPhnkwZq; cQh7aTcD++) {
            if (zsltvN[cQh7aTcD] > zsltvN[cQh7aTcD + 1]) {
                int tmp;
                tmp = zsltvN[cQh7aTcD + 1];
                zsltvN[cQh7aTcD + 1] = zsltvN[cQh7aTcD];
                zsltvN[cQh7aTcD] = tmp;
            };
        };
    }
    for (int i = 0;
    i < A; i++) {
        c[i] = a[i];
    }
    for (int i = A;
    i < A +B; i++) {
        c[i] = zsltvN[i - A];
    }
    for (int fXBEPhnkwZq = 0;
    fXBEPhnkwZq < A +B; fXBEPhnkwZq = fXBEPhnkwZq + 1) {
        printf ("%d", c[fXBEPhnkwZq]);
        if (fXBEPhnkwZq < A +B-1) {
            printf (" ");
        };
    };
}

