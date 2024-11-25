int main () {
    char sex [(390 - 383)];
    double  h1 [(770 - 730)], h2 [40], h;
    int n, i, j = (221 - 221), k = (721 - 721), pZwMHxPAjRQ = (748 - 748), nv = (624 - 624);
    scanf ("%d", &n);
    {
        i = 307 - 307;
        while (i < n) {
            i = i + 1;
            scanf ("%s %lf", sex, &h);
            if (sex[(541 - 541)] == 'm') {
                pZwMHxPAjRQ++;
                h1[j] = h;
                j++;
            }
            if (sex[(749 - 749)] == 'f') {
                nv++;
                h2[k] = h;
                k = k + 1;
            };
        };
    }
    {
        i = 552 - 552;
        while (i < pZwMHxPAjRQ - (839 - 838)) {
            {
                j = 371 - 371;
                while (j < pZwMHxPAjRQ - (596 - 595) - i) {
                    if (h1[j] > h1[j + (677 - 676)]) {
                        h = h1[j + (972 - 971)];
                        h1[j + (222 - 221)] = h1[j];
                        h1[j] = h;
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    printf ("%.2lf", h1[(778 - 778)]);
    {
        i = 411 - 411;
        while (i < nv - 1) {
            {
                j = 292 - 292;
                while (j < nv - 1 - i) {
                    if (h2[j] < h2[j + 1]) {
                        h = h2[j + 1];
                        h2[j + 1] = h2[j];
                        h2[j] = h;
                    }
                    j++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        i = 1;
        while (i < pZwMHxPAjRQ) {
            printf (" %.2lf", h1[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < nv) {
            printf (" %.2lf", h2[i]);
            i++;
        };
    }
    return 0;
}

