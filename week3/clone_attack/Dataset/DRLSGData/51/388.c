main () {
    int k, p;
    char b [501] [5] = {'\0'};
    int i = 1, j;
    char a [500];
    gets (a);
    int QUEIr3p8wNLF;
    scanf ("%d\n", &QUEIr3p8wNLF);
    if (QUEIr3p8wNLF == 2) {
        int c [500];
        int GN0Mp7 = c[0];
        for (j = 0; j < strlen (a) - 1; j = j + 1) {
            b[j][0] = a[j];
            b[j][1] = a[j + 1];
        }
        for (j = 0; strlen (a) > j; j = j + 1) {
            c[j] = 1;
        }
        for (k = 0; k < strlen (a) - 1; k = k + 1) {
            for (p = k + 1; p < strlen (a); p = p + 1) {
                if (strcmp (b[k], b[p]) == 0)
                    c[k] = c[k] + 1;
            };
        }
        for (k = 1; k < strlen (a); k = k + 1) {
            if (c[k] > GN0Mp7)
                GN0Mp7 = c[k];
        }
        if (GN0Mp7 == 1)
            ;
        else {
            printf ("%d\n", GN0Mp7);
            for (j = 0; j < strlen (a); j = j + 1) {
                if (c[j] == GN0Mp7)
                    printf ("%s\n", b[j]);
            };
        };
    }
    else if (QUEIr3p8wNLF == 3) {
        int c [500];
        int GN0Mp7 = c[0];
        for (j = 0; strlen (a) - 2 > j; j = j + 1) {
            b[j][0] = a[j];
            b[j][1] = a[j + 1];
            b[j][2] = a[j + 2];
        }
        for (j = 0; j < strlen (a) - 1; j = j + 1) {
            c[j] = 1;
        }
        for (k = 0; k < strlen (a) - 2; k = k + 1) {
            for (p = k + 1; p < strlen (a) - 1; p = p + 1) {
                if (strcmp (b[k], b[p]) == 0)
                    c[k] = c[k] + 1;
            };
        }
        for (k = 1; k < strlen (a) - 1; k = k + 1) {
            if (c[k] > GN0Mp7)
                GN0Mp7 = c[k];
        }
        if (GN0Mp7 == 1)
            ;
        else {
            printf ("%d\n", GN0Mp7);
            for (j = 0; j < strlen (a) - 1; j = j + 1) {
                if (c[j] == GN0Mp7)
                    printf ("%s\n", b[j]);
            };
        };
    }
    else if (QUEIr3p8wNLF == 4) {
        int c [500];
        int GN0Mp7 = c[0];
        for (j = 0; j < strlen (a) - 3; j = j + 1) {
            b[j][0] = a[j];
            b[j][1] = a[j + 1];
            b[j][2] = a[j + 2];
            b[j][3] = a[j + 3];
        }
        for (j = 0; j < strlen (a) - 2; j = j + 1) {
            c[j] = 1;
        }
        for (k = 0; k < strlen (a) - 3; k = k + 1) {
            for (p = k + 1; p < strlen (a) - 2; p = p + 1) {
                if (strcmp (b[k], b[p]) == 0)
                    c[k] = c[k] + 1;
            };
        }
        for (k = 1; k < strlen (a) - 2; k = k + 1) {
            if (c[k] > GN0Mp7)
                GN0Mp7 = c[k];
        }
        if (GN0Mp7 == 1)
            ;
        else {
            printf ("%d\n", GN0Mp7);
            for (j = 0; j < strlen (a) - 1; j++) {
                if (c[j] == GN0Mp7)
                    printf ("%s\n", b[j]);
            };
        };
    };
}

