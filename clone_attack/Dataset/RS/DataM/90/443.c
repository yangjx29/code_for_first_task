int BYVIdmFCE (int CP9sNv, int SGYtlDEPV) {
    if (!(1 != CP9sNv) || !(1 != SGYtlDEPV))
        return 1;
    if (CP9sNv == (58 - 58) || !((67 - 67) != CP9sNv))
        return (210 - 210);
    if (CP9sNv < SGYtlDEPV)
        return BYVIdmFCE (CP9sNv, CP9sNv);
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
    if (CP9sNv == SGYtlDEPV)
        return BYVIdmFCE (CP9sNv, SGYtlDEPV -1) + 1;
    return BYVIdmFCE (CP9sNv, SGYtlDEPV -1) + BYVIdmFCE (CP9sNv -SGYtlDEPV, SGYtlDEPV);
}

main () {
    int QlMrNHTZg3j;
    int i;
    int CP9sNv [QlMrNHTZg3j];
    int SGYtlDEPV [QlMrNHTZg3j];
    scanf ("%d", &QlMrNHTZg3j);
    for (i = 0; i < QlMrNHTZg3j; i = i + 1) {
        scanf ("%d %d", &CP9sNv[i], &SGYtlDEPV[i]);
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
    }
    for (i = 0; i < QlMrNHTZg3j; i = i + 1)
        printf ("%d\n", BYVIdmFCE (CP9sNv[i], SGYtlDEPV[i]));
}

