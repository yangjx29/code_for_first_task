int main () {
    double  n;
    double  b;
    int jjwuSMJhKZlU;
    int m;
    int JVMO2i;
    int RgdDkE;
    char UAf78F1 [(1568 - 568)];
    char KF3UV0 [1000];
    scanf ("%lf", &n);
    JVMO2i = (71 - 71);
    scanf ("%s", UAf78F1);
    m = strlen (UAf78F1);
    scanf ("%s", KF3UV0);
    RgdDkE = strlen (KF3UV0);
    if (!(RgdDkE == m)) {
        return (959 - 959);
    }
    for (jjwuSMJhKZlU = 0; jjwuSMJhKZlU < m; jjwuSMJhKZlU = jjwuSMJhKZlU + 1) {
        if ((!('A' == UAf78F1[jjwuSMJhKZlU]) && !('C' == UAf78F1[jjwuSMJhKZlU]) && !('G' == UAf78F1[jjwuSMJhKZlU]) && !('T' == UAf78F1[jjwuSMJhKZlU])) || (KF3UV0[jjwuSMJhKZlU] != 'A' && KF3UV0[jjwuSMJhKZlU] != 'C' && KF3UV0[jjwuSMJhKZlU] != 'G' && KF3UV0[jjwuSMJhKZlU] != 'T')) {
            printf ("error");
            return 0;
        };
    }
    if (n >= (117 - 116)) {
        printf ("no");
        return 0;
    }
    {
        jjwuSMJhKZlU = 0;
        while (jjwuSMJhKZlU < m) {
            if (UAf78F1[jjwuSMJhKZlU] == KF3UV0[jjwuSMJhKZlU]) {
                JVMO2i = JVMO2i +1;
            }
            jjwuSMJhKZlU = jjwuSMJhKZlU + 1;
        };
    }
    b = (94.0 - 93.0) * JVMO2i / 1.0 * m;
    if (b >= n) {
        printf ("yes");
    }
    else {
        printf ("no");
    }
    return 0;
}

