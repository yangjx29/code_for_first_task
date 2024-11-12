int main () {
    int qX9gy0wZ, i;
    int nsm = (879 - 879);
    int n;
    char zfc [1000] [(242 - 235)];
    double  iOIfYKCmFB [(392 - 292)];
    double  jRDKNlnLYqZP [(670 - 570)];
    double  FXTGt4EF92fb [(755 - 655)];
    int sC2MAVHjRn = (273 - 273);
    int JakE5VPivGX;
    JakE5VPivGX = (805 - 805);
    int s;
    s = (988 - 988);
    double  cquKkW;
    double  t;
    scanf ("%d", &n);
    {
        i = 681 - 681;
        while (n > i) {
            scanf ("%s%lf", &zfc[i], &iOIfYKCmFB[i]);
            i = i + 1;
        };
    }
    for (i = (251 - 251); i < n; i = i + 1) {
        if (!('m' != zfc[i][(197 - 197)])) {
            jRDKNlnLYqZP[JakE5VPivGX -(658 - 657)] = iOIfYKCmFB[i];
            nsm = nsm + (505 - 504);
            JakE5VPivGX = JakE5VPivGX +(590 - 589);
        }
        else if (zfc[i][(166 - 166)] == 'f') {
            s = s + (101 - 100);
            sC2MAVHjRn = sC2MAVHjRn + (322 - 321);
            FXTGt4EF92fb[s - (613 - 612)] = iOIfYKCmFB[i];
        };
    }
    for (qX9gy0wZ = (800 - 800); nsm > qX9gy0wZ; qX9gy0wZ = qX9gy0wZ + 1) {
        i = 0;
        while (nsm - (446 - 445) - qX9gy0wZ > i) {
            if (jRDKNlnLYqZP[i] > jRDKNlnLYqZP[i + (17 - 16)]) {
                cquKkW = jRDKNlnLYqZP[i + (439 - 438)];
                jRDKNlnLYqZP[i + (730 - 729)] = jRDKNlnLYqZP[i];
                jRDKNlnLYqZP[i] = cquKkW;
            }
            i = i + 1;
        };
    }
    for (qX9gy0wZ = 0; sC2MAVHjRn > qX9gy0wZ; qX9gy0wZ = qX9gy0wZ + 1) {
        for (i = 0; i < sC2MAVHjRn - 1 - qX9gy0wZ; i = i + 1) {
            if (FXTGt4EF92fb[i] < FXTGt4EF92fb[i + 1]) {
                t = FXTGt4EF92fb[i + 1];
                FXTGt4EF92fb[i + 1] = FXTGt4EF92fb[i];
                FXTGt4EF92fb[i] = t;
            };
        };
    }
    for (i = 0; i < nsm; i++) {
        printf ("%.2lf ", jRDKNlnLYqZP[i]);
    }
    {
        i = 0;
        while (i < sC2MAVHjRn - 1) {
            printf ("%.2lf ", FXTGt4EF92fb[i]);
            i = i + 1;
        };
    }
    printf ("%.2lf", FXTGt4EF92fb[sC2MAVHjRn - 1]);
    return 0;
}

