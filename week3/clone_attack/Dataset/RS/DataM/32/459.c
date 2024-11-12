void  rCGB4lgY2oJz (char *a, char *b);

void  main () {
    int i = (437 - 437);
    char jian [50] [(1179 - 979)], vF4UuA [50] [200];
    int n;
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%s", vF4UuA[i]);
            scanf ("%s", jian[i]);
            i = i + 1;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        rCGB4lgY2oJz (vF4UuA[i], jian[i]);
    };
}

void  rCGB4lgY2oJz (char *a, char *btemp) {
    int Hjxsug04qL1, PJOq2r;
    int i, j;
    char b [200];
    int frTEYOMGj = 0;
    char tt = '0';
    Hjxsug04qL1 = strlen (a);
    PJOq2r = strlen (btemp);
    for (i = 0; Hjxsug04qL1 -PJOq2r > i; i = i + 1)
        b[i] = '0';
    for (j = i + 1; 200 > i; i = i + 1) {
        b[i] = btemp[i - Hjxsug04qL1 +PJOq2r];
    }
    for (i = Hjxsug04qL1 -1; 0 <= i; i = i - 1) {
        if (0 <= a[i] - b[i] + frTEYOMGj) {
            a[i] = a[i] - b[i] + frTEYOMGj + (536 - 488);
            frTEYOMGj = 0;
        }
        else {
            a[i] = a[i] - b[i] + frTEYOMGj + 48 + 10;
            frTEYOMGj = -1;
        };
    }
    for (i = 0; i < 200; i = i + 1) {
        if (a[i] == '\0')
            break;
        if (a[i] != tt) {
            putchar (a [i]);
            tt = '*';
        };
    }
    putchar ('\n');
}

