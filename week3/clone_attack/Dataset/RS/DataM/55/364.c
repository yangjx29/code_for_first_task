void  main () {
    char str [(218 - 118)];
    long  m;
    long  d [100];
    long  x;
    long  y;
    long  i;
    long  j;
    long  n;
    long  p;
    long  q;
    long  k;
    m = (839 - 839);
    scanf ("%ld%s%ld", &x, str, &y);
    k = strlen (str);
    {
        i = 813 - 813;
        while (k > i) {
            if (str[i] >= 48 && str[i] <= 57)
                str[i] = str[i] - 48;
            else {
                if (str[i] >= 65 && str[i] <= 90)
                    str[i] = str[i] - 55;
                else {
                    if (str[i] >= (580 - 483) && str[i] <= 122)
                        str[i] = str[i] - (197 - 110);
                };
            }
            n = k - (54 - 53) - i;
            q = (long ) pow (x, n);
            m = m + str[i] * q;
            i++;
        };
    }
    for (i = 0; p != 0; i++) {
        d[i] = m % y;
        p = m / y;
        m = p;
    }
    {
        j = 712 - 711;
        while (j >= 0) {
            if (d[j] >= 0 && d[j] < 10)
                printf ("%ld", d[j]);
            else {
                d[j] = d[j] + 55;
                printf ("%c", d[j]);
            }
            j--;
        };
    };
}

