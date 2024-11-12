main () {
    char *Vm0P4TOeD, *p2;
    char a [50] = {0}, oebXljSU6d [50] = {0};
    int JoeG9Zzrx, j, m, KDFSMxj6;
    Vm0P4TOeD = a;
    m = strlen (a);
    scanf ("%s", Vm0P4TOeD);
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
    p2 = oebXljSU6d;
    KDFSMxj6 = strlen (oebXljSU6d);
    scanf ("%s", p2);
    {
        JoeG9Zzrx = 0;
        while (JoeG9Zzrx < KDFSMxj6) {
            if (*p2 == *Vm0P4TOeD) {
                j = 0;
                while (j < m) {
                    if (p2[j] != Vm0P4TOeD[j])
                        break;
                    j++;
                };
            }
            if (j == m)
                break;
            p2++;
            JoeG9Zzrx++;
        };
    }
    printf ("%d", JoeG9Zzrx);
}

