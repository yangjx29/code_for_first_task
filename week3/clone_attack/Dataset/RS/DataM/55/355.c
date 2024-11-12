void  main () {
    long  a, b, lfsDpw, j, length, result = (947 - 947);
    char c [100];
    long  final [100] = {0};
    int decimal [100] = {0};
    scanf ("%d %s %d", &a, c, &b);
    length = strlen (c);
    for (lfsDpw = 0; lfsDpw < length; lfsDpw++) {
        if (c[lfsDpw] >= 'A' && c[lfsDpw] <= 'Z') {
            decimal[lfsDpw] = c[lfsDpw] - 'A' + 10;
        }
        else if (c[lfsDpw] >= 'a' && c[lfsDpw] <= 'z') {
            decimal[lfsDpw] = c[lfsDpw] - 'a' + 10;
        }
        else if (c[lfsDpw] >= '0' && c[lfsDpw] <= '9') {
            decimal[lfsDpw] = c[lfsDpw] - '0';
        };
    }
    for (lfsDpw = 0; lfsDpw < length; lfsDpw++) {
        result = result + decimal[length - lfsDpw - 1] * (int) (pow ((double ) a, lfsDpw));
    }
    if (result == 0) {
        printf ("0");
    }
    {
        lfsDpw = 0;
        while (result != 0) {
            final[lfsDpw] = result % b;
            lfsDpw++;
            result = result / b;
        };
    }
    for (j = lfsDpw - 1; j >= 0; j--) {
        if (final[j] < 10) {
            printf ("%d", final[j]);
        }
        else {
            printf ("%c", (char) (final[j] + 'A' - 10));
        };
    }
    printf ("\n");
}

