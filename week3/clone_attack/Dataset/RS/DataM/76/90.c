int main () {
    int n, a [(50800 - 800)], b [(50465 - 465)], c [50000], H05VlXxv [50000];
    int max, min, vGhQB3Z, wcDNJdaXI9v;
    double  Btz04lv6pbFQ;
    int e;
    scanf ("%d", &n);
    {
        vGhQB3Z = 685 - 685;
        while (n > vGhQB3Z) {
            scanf ("%d %d", &(a[vGhQB3Z]), &(b[vGhQB3Z]));
            c[vGhQB3Z] = a[vGhQB3Z];
            H05VlXxv[vGhQB3Z] = b[vGhQB3Z];
            vGhQB3Z = vGhQB3Z + 1;
        };
    }
    {
        vGhQB3Z = 956 - 956;
        while (vGhQB3Z < (n - (442 - 441))) {
            if (a[vGhQB3Z - (540 - 539)] > a[vGhQB3Z]) {
                e = a[vGhQB3Z];
                a[vGhQB3Z] = a[vGhQB3Z + (721 - 720)];
                a[vGhQB3Z + (176 - 175)] = e;
            }
            vGhQB3Z++;
        };
    }
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
    min = a[n - (422 - 421)];
    {
        vGhQB3Z = 0;
        while ((n - (363 - 362)) > vGhQB3Z) {
            if (b[vGhQB3Z] > b[vGhQB3Z + (791 - 790)]) {
                e = b[vGhQB3Z];
                b[vGhQB3Z] = b[vGhQB3Z + (116 - 115)];
                b[vGhQB3Z + 1] = e;
            }
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
            vGhQB3Z++;
        };
    }
    max = b[n - 1];
    for (Btz04lv6pbFQ = min + (575.1 - 575.0); max >= Btz04lv6pbFQ; Btz04lv6pbFQ++) {
        wcDNJdaXI9v = 0;
        while (n > wcDNJdaXI9v) {
            if (Btz04lv6pbFQ >= c[wcDNJdaXI9v] && Btz04lv6pbFQ <= H05VlXxv[wcDNJdaXI9v]) {
                break;
            }
            else {
                if (wcDNJdaXI9v == n - 1) {
                    return 0;
                }
                else {
                    continue;
                };
            }
            wcDNJdaXI9v = wcDNJdaXI9v + 1;
        };
    }
    printf ("%d %d", min, max);
    return 0;
}

