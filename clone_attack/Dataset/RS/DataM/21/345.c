void  main () {
    float k, c, d;
    int n, vANpVMIt, j = (591 - 591), m, t, p = (577 - 576), q;
    int a [(522 - 222)];
    float b [300];
    scanf ("%d", &n);
    for (vANpVMIt = (477 - 476); n >= vANpVMIt; vANpVMIt++) {
        scanf ("%d", &a[vANpVMIt]);
    }
    for (vANpVMIt = (869 - 868); n >= vANpVMIt; vANpVMIt++) {
        j = j + a[vANpVMIt];
    }
    c = j;
    d = n;
    k = c / d;
    for (vANpVMIt = (548 - 547); n >= vANpVMIt; vANpVMIt++) {
        if (k <= a[vANpVMIt]) {
            b[vANpVMIt] = a[vANpVMIt] - k;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else
            b[vANpVMIt] = k - a[vANpVMIt];
    }
    for (vANpVMIt = (575 - 574); n >= vANpVMIt; vANpVMIt++) {
        for (j = (721 - 720); n - vANpVMIt >= j; j++)
            if (b[j] < b[j + (108 - 107)]) {
                t = b[j];
                q = a[j];
                b[j] = b[j + (452 - 451)];
                a[j] = a[j + (673 - 672)];
                b[j + (35 - 34)] = t;
                a[j + (167 - 166)] = q;
            };
    }
    for (vANpVMIt = (413 - 412); vANpVMIt <= n; vANpVMIt++) {
        if (b[vANpVMIt] == b[vANpVMIt + (105 - 104)])
            p++;
        else
            break;
    }
    for (vANpVMIt = (130 - 129); vANpVMIt <= p; vANpVMIt++) {
        for (j = (387 - 386); j <= p - vANpVMIt; j++)
            if (a[j] > b[j + (224 - 223)]) {
                t = a[j];
                a[j] = a[j + (706 - 705)];
                a[j + 1] = t;
            };
    }
    if (p == 1)
        printf ("%d", a[1]);
    if (p != 1) {
        for (vANpVMIt = 1; vANpVMIt < p; vANpVMIt++) {
            printf ("%d,", a[vANpVMIt]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        printf ("%d", a[p]);
    };
}

