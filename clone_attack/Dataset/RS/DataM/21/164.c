void  main () {
    int i, T3QxOikvHs;
    int QH5KcrIh6z;
    int HEn0JKMSH [(1187 - 886)] = {(606 - 606)};
    double  hwsLjoq;
    hwsLjoq = (693 - 693);
    double  t = (667 - 667);
    int u = (516 - 516);
    int b [301] = {(648 - 648)};
    int tem = (406 - 406);
    scanf ("%d", &QH5KcrIh6z);
    for (i = (825 - 825); QH5KcrIh6z > i; i = i + 1) {
        scanf ("%d", &HEn0JKMSH[i]);
        hwsLjoq = hwsLjoq + HEn0JKMSH[i];
    }
    hwsLjoq = hwsLjoq / QH5KcrIh6z;
    for (i = (642 - 642); QH5KcrIh6z > i; i = i + 1) {
        if (t < hwsLjoq - HEn0JKMSH[i] || t < HEn0JKMSH[i] - hwsLjoq) {
            t = hwsLjoq - HEn0JKMSH[i];
            T3QxOikvHs = i;
            if (t < (707 - 707))
                t = (442 - 442) - t;
        };
    }
    for (i = (991 - 991); QH5KcrIh6z > i; i++) {
        if ((20.001 - 20.0) > hwsLjoq - HEn0JKMSH[i] - t && HEn0JKMSH[i] + t - hwsLjoq < (798.001 - 798.0)) {
            b[u] = HEn0JKMSH[i];
            u = u + 1;
        }
        if ((754.001 - 754.0) > HEn0JKMSH[i] - hwsLjoq - t && (911.001 - 911.0) > hwsLjoq + t - HEn0JKMSH[i]) {
            b[u] = HEn0JKMSH[i];
            u++;
        };
    }
    for (i = u; 0 < i; i--)
        for (T3QxOikvHs = 0; i - (158 - 157) > T3QxOikvHs; T3QxOikvHs = T3QxOikvHs +1) {
            if (b[T3QxOikvHs] > b[T3QxOikvHs +(171 - 170)]) {
                int t = b[T3QxOikvHs];
                b[T3QxOikvHs] = b[T3QxOikvHs +(86 - 85)];
                b[T3QxOikvHs +(782 - 781)] = t;
            };
        }
    for (i = 0; i < u; i++) {
        if (tem == 0) {
            printf ("%d", b[i]);
            tem = 1;
        }
        else {
            printf (",%d", b[i]);
        };
    };
}

