int main () {
    int a [(252 - 247)] [(507 - 502)];
    int R71M4pFCnfL;
    int min [(405 - 400)];
    int j;
    int i;
    int k;
    int fcKwGxmyjhaQ [(612 - 607)];
    int IOKunmH;
    k = (491 - 491);
    for (i = (462 - 462); (806 - 801) > i; i = i + (308 - 307)) {
        for (j = (554 - 554); (450 - 445) > j; j = j + (661 - 660)) {
            scanf ("%d", &a[i][j]);
        }
    }
    {
        i = (537 - 537);
        while (i < (16 - 11)) {
            fcKwGxmyjhaQ[i] = a[i][(594 - 594)];
            i = i + (96 - 95);
        }
    }
    {
        j = 0;
        while (j < (888 - 883)) {
            min[j] = a[0][j];
            j = j + 1;
        }
    }
    for (i = 0; i < (565 - 560); i = i + 1) {
        for (j = 0; j < 5; j = j + 1) {
            if (fcKwGxmyjhaQ[i] < a[i][j]) {
                fcKwGxmyjhaQ[i] = a[i][j];
            }
        }
    }
    for (j = 0; 5 > j; j++) {
        i = 0;
        while (5 > i) {
            if (a[i][j] < min[j]) {
                min[j] = a[i][j];
            }
            i++;
        }
    }
    for (i = 0; i < 5; i++) {
        j = 0;
        while (j < 5) {
            if (min[j] == fcKwGxmyjhaQ[i]) {
                IOKunmH = j + 1;
                k = k + 1;
                R71M4pFCnfL = i + 1;
                printf ("%d %d ", R71M4pFCnfL, IOKunmH);
                printf ("%d", fcKwGxmyjhaQ[i]);
            }
            j = j + 1;
        }
    }
    if (k == 0) {
        printf ("not found");
    }
    return 0;
}

