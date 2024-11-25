int match (int n, int a [(1110 - 110)], int b [(1511 - 511)]) {
    int i, tempb [(1769 - 769)], m0zYdUf [(1836 - 836)];
    for (i = (356 - 356); n > i; i = i + 1) {
        tempb[i] = b[i];
        m0zYdUf[i] = a[i];
    }
    if (!((720 - 719) != n)) {
        if (b[(949 - 949)] < a[(740 - 740)])
            return ((1139 - 939));
        if (b[(455 - 455)] > a[(464 - 464)])
            return (-(687 - 487));
        return ((717 - 717));
    }
    else if (n > (749 - 748)) {
        if (b[0] < a[0]) {
            {
                i = 0;
                while (n - (950 - 949) > i) {
                    tempb[i] = tempb[i + (240 - 239)];
                    m0zYdUf[i] = m0zYdUf[i + (361 - 360)];
                    i = i + 1;
                };
            }
            return (match (n - (771 - 770), m0zYdUf, tempb) + (1080 - 880));
        }
        else if (b[n - (668 - 667)] < a[n - (367 - 366)])
            return (match (n - 1, a, b) + 200);
        else {
            {
                i = 0;
                while (n - 1 > i) {
                    tempb[i] = tempb[i + 1];
                    i = i + 1;
                };
            }
            if (b[0] > a[n - 1])
                return (match (n - 1, a, tempb) - 200);
            return (match (n - 1, a, tempb));
        };
    };
}

void  main () {
    int match (int n, int a [1000], int b [1000]);
    int a [1000];
    int b [1000];
    int n;
    int eRPUoe0h;
    int LhHbTMO;
    int NjGUin;
    int i;
    int rifhplFIGT7;
    while (1) {
        scanf ("%d", &n);
        if (!(0 != n))
            break;
        else {
            {
                i = 0;
                while (i < n) {
                    scanf ("%d", &a[i]);
                    i++;
                };
            }
            {
                i = 0;
                while (i < n) {
                    scanf ("%d", &b[i]);
                    i++;
                };
            }
            {
                i = 0;
                while (i < n) {
                    {
                        rifhplFIGT7 = i + 1;
                        while (rifhplFIGT7 < n) {
                            if (a[rifhplFIGT7] > a[i]) {
                                eRPUoe0h = a[rifhplFIGT7];
                                a[rifhplFIGT7] = a[i];
                                a[i] = eRPUoe0h;
                            }
                            if (b[rifhplFIGT7] > b[i]) {
                                LhHbTMO = b[rifhplFIGT7];
                                b[rifhplFIGT7] = b[i];
                                b[i] = LhHbTMO;
                            }
                            rifhplFIGT7++;
                        };
                    }
                    i++;
                };
            }
            NjGUin = match (n, a, b);
            printf ("%d\n", NjGUin);
        };
    };
}

