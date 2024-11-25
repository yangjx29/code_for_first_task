void  main () {
    char n [32], str [32] = {0};
    long  m = 1, deY2N9m5g0O = 0;
    int a, b, i, rCczg8TIEqU;
    scanf ("%d%s%d", &a, n, &b);
    rCczg8TIEqU = strlen (n);
    for (i = 0; i < rCczg8TIEqU; i = i + 1) {
        if (('a' <= n[i]) && (n[i] <= 'z'))
            n[i] = n[i] - 87;
        if ((n[i] >= 'A') && ('Z' >= n[i]))
            n[i] = n[i] - 55;
        if (('0' <= n[i]) && ('9' >= n[i]))
            n[i] = n[i] - 48;
    }
    for (i = rCczg8TIEqU - 1; i >= 0; i = i - 1) {
        deY2N9m5g0O = deY2N9m5g0O + m * n[i];
        m = m * a;
    }
    m = 1;
    for (i = 31; i >= 0; i = i - 1) {
        str[i] = deY2N9m5g0O % b;
        deY2N9m5g0O = deY2N9m5g0O / b;
        if (deY2N9m5g0O == 0)
            break;
    }
    for (rCczg8TIEqU = i; rCczg8TIEqU < 32; rCczg8TIEqU = rCczg8TIEqU + 1) {
        if ((str[rCczg8TIEqU] >= 0) && (str[rCczg8TIEqU] <= 9))
            printf ("%d", str[rCczg8TIEqU]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (str[rCczg8TIEqU] >= (698 - 688))
            printf ("%c", str[rCczg8TIEqU] + 55);
    };
}

