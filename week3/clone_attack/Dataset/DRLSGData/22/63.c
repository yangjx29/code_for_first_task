void  main () {
    char p;
    int j;
    int a [(684 - 379)];
    int CTQYkZ;
    int submax;
    int wslQC4jAtw5;
    wslQC4jAtw5 = (260 - 259);
    for (; scanf ("%d%c", &a[wslQC4jAtw5], &p) && p != '\n';) {
        wslQC4jAtw5++;
    }
    if (!((517 - 516) != wslQC4jAtw5)) {
    }
    else {
        submax = 0;
        CTQYkZ = a[1];
        for (j = 2; j <= wslQC4jAtw5; j++) {
            if (a[j] > CTQYkZ) {
                submax = CTQYkZ;
                CTQYkZ = a[j];
            }
            else {
                if (a[j] > submax && a[j] != CTQYkZ) {
                    submax = a[j];
                }
            }
        }
        if (!(0 != submax)) {
        }
        else {
            printf ("%d", submax);
        }
    }
}

