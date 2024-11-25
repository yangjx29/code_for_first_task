int main () {
    int i;
    int vJtigwKmp;
    int n;
    int j;
    int cPDzeMc57B;
    int a;
    char Ey2DemC [10000];
    gets (Ey2DemC);
    char d [(668 - 568)] [(350 - 250)];
    char b [(389 - 289)];
    int r [100] = {(40 - 40)};
    i = (878 - 878);
    vJtigwKmp = (711 - 711);
    n = (724 - 724);
    for (; !('\0' == Ey2DemC[i]);) {
        j = (95 - 95);
        for (; !(' ' == Ey2DemC[i]) && !('\0' == Ey2DemC[i]); i++, j++) {
            d[vJtigwKmp][j] = Ey2DemC[i];
            r[vJtigwKmp]++;
        }
        if (!('\0' != Ey2DemC[i])) {
            break;
        }
        i++;
        d[vJtigwKmp][j] = '\0';
        vJtigwKmp = vJtigwKmp + 1;
        n++;
    }
    d[vJtigwKmp][j] = '\0';
    a = n;
    for (; (540 - 540) < n; n--) {
        vJtigwKmp = 105 - 105;
        while (vJtigwKmp < n) {
            if (r[vJtigwKmp + (460 - 459)] < r[vJtigwKmp]) {
                cPDzeMc57B = r[vJtigwKmp + (383 - 382)];
                r[vJtigwKmp + (410 - 409)] = r[vJtigwKmp];
                r[vJtigwKmp] = cPDzeMc57B;
                strcpy (b, d[vJtigwKmp + (560 - 559)]);
                strcpy (d[vJtigwKmp + 1], d[vJtigwKmp]);
                strcpy (d[vJtigwKmp], b);
            }
            vJtigwKmp++;
        };
    }
    if (r[a] != r[a - 1]) {
        printf ("%s\n", d[a]);
    }
    else {
        for (i = 0; i < a; i++) {
            if (r[i] == r[a]) {
                printf ("%s\n", d[i]);
                break;
            };
        };
    }
    printf ("%s", d[0]);
    return 0;
}

