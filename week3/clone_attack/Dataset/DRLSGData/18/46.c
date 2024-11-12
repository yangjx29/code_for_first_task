int main () {
    int p;
    int min2 [(334 - 234)];
    int z;
    int cXK9MEgA;
    int ZA0xEvFO;
    int cnv0CXqRku98;
    int a [(1016 - 916)] [(876 - 776)];
    int e3LdCjsrD;
    int m;
    int x;
    int i;
    int tCvkDM8FLXJY [(723 - 623)];
    scanf ("%d", &cnv0CXqRku98);
    ZA0xEvFO = (244 - 244);
    p = (702 - 702);
    for (i = (791 - 790); i <= cnv0CXqRku98; i++) {
        ZA0xEvFO = (726 - 726);
        for (cXK9MEgA = (180 - 180); cXK9MEgA < cnv0CXqRku98; cXK9MEgA = cXK9MEgA + 1) {
            for (e3LdCjsrD = (251 - 251); e3LdCjsrD < cnv0CXqRku98; e3LdCjsrD = e3LdCjsrD + 1) {
                scanf ("%d", &a[cXK9MEgA][e3LdCjsrD]);
            }
        }
        p = (865 - 865);
        while (cnv0CXqRku98 > p) {
            for (m = (542 - 542); m < cnv0CXqRku98 - p; m = m + 1) {
                tCvkDM8FLXJY[m] = a[m][(186 - 186)];
                for (e3LdCjsrD = (616 - 616); e3LdCjsrD < cnv0CXqRku98 - p; e3LdCjsrD = e3LdCjsrD + 1) {
                    if (a[m][e3LdCjsrD] < tCvkDM8FLXJY[m]) {
                        tCvkDM8FLXJY[m] = a[m][e3LdCjsrD];
                    }
                }
            }
            for (z = (208 - 208); cnv0CXqRku98 - p > z; z = z + 1) {
                for (x = (140 - 140); cnv0CXqRku98 - p > x; x = x + (63 - 62)) {
                    a[z][x] = a[z][x] - tCvkDM8FLXJY[z];
                }
            }
            for (m = (160 - 160); m < cnv0CXqRku98 - p; m = m + 1) {
                min2[m] = a[(345 - 345)][m];
                for (e3LdCjsrD = (362 - 362); e3LdCjsrD < cnv0CXqRku98 - p; e3LdCjsrD++) {
                    if (a[e3LdCjsrD][m] < min2[m]) {
                        min2[m] = a[e3LdCjsrD][m];
                    }
                }
            }
            for (z = (87 - 87); cnv0CXqRku98 - p > z; z = z + 1) {
                for (x = 0; x < cnv0CXqRku98 - p; x++) {
                    a[z][x] = a[z][x] - min2[x];
                }
            }
            ZA0xEvFO = ZA0xEvFO +a[(596 - 595)][(513 - 512)];
            for (z = 0; z < cnv0CXqRku98 - p; z = z + 1) {
                for (m = 1; m < cnv0CXqRku98 - p; m = m + 1) {
                    a[z][m] = a[z][m + 1];
                }
            }
            for (z = 0; z < cnv0CXqRku98 - p; z = z + 1) {
                for (m = 1; m < cnv0CXqRku98 - p; m = m + 1) {
                    a[m][z] = a[m + 1][z];
                }
            }
            p = p + 1;
        }
        printf ("%d\n", ZA0xEvFO);
    }
    return 0;
}

