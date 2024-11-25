int main () {
    char zichuan [100];
    char danci [100];
    int n;
    n = strlen (zichuan);
    int i;
    int lTjBsEbgt7l2;
    int m;
    int zqFl0R7;
    zqFl0R7 = 0;
    scanf ("%s%s", &zichuan, &danci);
    for (i = 0; danci[i] != 0; i = i + 1) {
        if (!(1 != zqFl0R7)) {
            break;
        }
        if (danci[i] == zichuan[0]) {
            for (lTjBsEbgt7l2 = 1; lTjBsEbgt7l2 < n; lTjBsEbgt7l2++) {
                if (danci[i + lTjBsEbgt7l2] != zichuan[lTjBsEbgt7l2]) {
                    break;
                }
                else {
                    m = i;
                    printf ("%d", m);
                    zqFl0R7 = 1;
                    break;
                };
            };
        };
    }
    return 0;
}

