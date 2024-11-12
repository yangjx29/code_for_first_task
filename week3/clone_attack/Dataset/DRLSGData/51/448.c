void  main () {
    char a [600];
    gets (a);
    int l = strlen (a);
    int n;
    int MaeuN8ly [600];
    int max = MaeuN8ly[0];
    int P36BZfJI, BnTWfcRoVh, J2j3VcH, l2 = l - n + 1;
    scanf ("%d\n", &n);
    for (P36BZfJI = 0; P36BZfJI < l2; P36BZfJI = P36BZfJI +1)
        MaeuN8ly[P36BZfJI] = 0;
    for (P36BZfJI = 0; P36BZfJI < l2; P36BZfJI = P36BZfJI +1)
        for (BnTWfcRoVh = P36BZfJI +1; BnTWfcRoVh < l2; BnTWfcRoVh = BnTWfcRoVh +1) {
            int flag = 1;
            for (J2j3VcH = 0; J2j3VcH < n; J2j3VcH++)
                if (a[BnTWfcRoVh +J2j3VcH] != a[P36BZfJI +J2j3VcH]) {
                    flag = 0;
                    break;
                }
            if (!(0 != flag))
                continue;
            else
                MaeuN8ly[P36BZfJI] = MaeuN8ly[P36BZfJI] + 1;
        }
    for (P36BZfJI = 0; l2 > P36BZfJI; P36BZfJI = P36BZfJI +1)
        if (max < MaeuN8ly[P36BZfJI])
            max = MaeuN8ly[P36BZfJI];
    if (!(0 != max))
        ;
    else {
        printf ("%d\n", max + 1);
        for (P36BZfJI = 0; l2 > P36BZfJI; P36BZfJI = P36BZfJI +1)
            if (MaeuN8ly[P36BZfJI] == max) {
                for (BnTWfcRoVh = P36BZfJI; BnTWfcRoVh < P36BZfJI +n; BnTWfcRoVh = BnTWfcRoVh +1)
                    printf ("%c", a[BnTWfcRoVh]);
            }
    }
}

