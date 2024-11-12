void  main () {
    int n;
    int s1YaWIkNoM;
    int jgkoG2FSC1vM;
    int zHTg6ErRb;
    int length2;
    int NILtrZ;
    char OWcRbGl1H [101];
    char yoiYjzwKdLE [101];
    scanf ("%d", &n);
    for (s1YaWIkNoM = 0; s1YaWIkNoM < n; s1YaWIkNoM = s1YaWIkNoM + 1) {
        scanf ("%s", OWcRbGl1H);
        scanf ("%s", yoiYjzwKdLE);
        zHTg6ErRb = strlen (OWcRbGl1H);
        length2 = strlen (yoiYjzwKdLE);
        for (jgkoG2FSC1vM = 1; jgkoG2FSC1vM <= length2; jgkoG2FSC1vM = jgkoG2FSC1vM + 1) {
            NILtrZ = OWcRbGl1H[zHTg6ErRb - jgkoG2FSC1vM] - yoiYjzwKdLE[length2 - jgkoG2FSC1vM];
            if (NILtrZ >= 0)
                OWcRbGl1H[zHTg6ErRb - jgkoG2FSC1vM] = NILtrZ +'0';
            else {
                OWcRbGl1H[zHTg6ErRb - jgkoG2FSC1vM - 1]--;
                OWcRbGl1H[zHTg6ErRb - jgkoG2FSC1vM] = 10 + NILtrZ +'0';
            };
        }
        while (OWcRbGl1H[zHTg6ErRb - jgkoG2FSC1vM] < '0') {
            OWcRbGl1H[zHTg6ErRb - jgkoG2FSC1vM] = OWcRbGl1H[zHTg6ErRb - jgkoG2FSC1vM] + 10;
            jgkoG2FSC1vM = jgkoG2FSC1vM + 1;
            OWcRbGl1H[zHTg6ErRb - jgkoG2FSC1vM] = OWcRbGl1H[zHTg6ErRb - jgkoG2FSC1vM] - 1;
        }
        printf ("%s\n", OWcRbGl1H);
    };
}

