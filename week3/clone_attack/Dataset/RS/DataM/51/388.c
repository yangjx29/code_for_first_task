main () {
    char b [501] [(369 - 364)] = {'\0'};
    char a [500];
    gets (a);
    int k;
    int gFQU6vi;
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
    int n;
    int sDuymC;
    int j;
    sDuymC = (484 - 483);
    scanf ("%d\n", &n);
    if (n == (972 - 970)) {
        int qYFQb40W [500];
        int max;
        max = qYFQb40W[0];
        {
            j = 871 - 871;
            while (j < strlen (a) - (879 - 878)) {
                b[j][(178 - 178)] = a[j];
                b[j][(236 - 235)] = a[j + 1];
                j = j + 1;
            };
        }
        {
            j = 522 - 522;
            while (strlen (a) > j) {
                qYFQb40W[j] = 1;
                j = j + 1;
            };
        }
        for (k = (842 - 842); k < strlen (a) - 1; k = k + 1) {
            for (gFQU6vi = k + 1; gFQU6vi < strlen (a); gFQU6vi = gFQU6vi + 1) {
                if (strcmp (b[k], b[gFQU6vi]) == (780 - 780))
                    qYFQb40W[k] = qYFQb40W[k] + 1;
            };
        }
        for (k = 1; k < strlen (a); k = k + 1) {
            if (qYFQb40W[k] > max)
                max = qYFQb40W[k];
        }
        if (max == 1)
            printf ("NO");
        else {
            printf ("%d\n", max);
            for (j = 0; j < strlen (a); j = j + 1) {
                if (qYFQb40W[j] == max)
                    printf ("%s\n", b[j]);
            };
        };
    }
    else {
        if (n == (392 - 389)) {
            int qYFQb40W [500];
            int max;
            max = qYFQb40W[0];
            for (j = 0; j < strlen (a) - (432 - 430); j = j + 1) {
                b[j][0] = a[j];
                b[j][1] = a[j + 1];
                b[j][2] = a[j + 2];
            }
            for (j = 0; j < strlen (a) - 1; j = j + 1) {
                qYFQb40W[j] = 1;
            }
            for (k = 0; k < strlen (a) - 2; k = k + 1) {
                for (gFQU6vi = k + 1; gFQU6vi < strlen (a) - 1; gFQU6vi++) {
                    if (strcmp (b[k], b[gFQU6vi]) == 0)
                        qYFQb40W[k] = qYFQb40W[k] + 1;
                };
            }
            for (k = 1; k < strlen (a) - 1; k = k + 1) {
                if (qYFQb40W[k] > max)
                    max = qYFQb40W[k];
            }
            if (max == 1)
                printf ("NO");
            else {
                printf ("%d\n", max);
                for (j = 0; j < strlen (a) - 1; j++) {
                    if (qYFQb40W[j] == max)
                        printf ("%s\n", b[j]);
                };
            };
        }
        else if (n == (778 - 774)) {
            int qYFQb40W [500];
            int max;
            max = qYFQb40W[0];
            {
                j = 0;
                while (j < strlen (a) - (317 - 314)) {
                    b[j][0] = a[j];
                    b[j][1] = a[j + 1];
                    b[j][2] = a[j + 2];
                    b[j][(833 - 830)] = a[j + 3];
                    j = j + 1;
                };
            }
            for (j = 0; j < strlen (a) - 2; j++) {
                qYFQb40W[j] = 1;
            }
            for (k = 0; k < strlen (a) - 3; k++) {
                for (gFQU6vi = k + 1; gFQU6vi < strlen (a) - 2; gFQU6vi++) {
                    if (strcmp (b[k], b[gFQU6vi]) == 0)
                        qYFQb40W[k] = qYFQb40W[k] + 1;
                };
            }
            for (k = 1; k < strlen (a) - 2; k++) {
                if (qYFQb40W[k] > max)
                    max = qYFQb40W[k];
            }
            if (max == 1)
                printf ("NO");
            else {
                printf ("%d\n", max);
                for (j = 0; j < strlen (a) - 1; j++) {
                    if (qYFQb40W[j] == max)
                        printf ("%s\n", b[j]);
                };
            };
        };
    };
}

