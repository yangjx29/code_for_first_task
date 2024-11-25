int f (char str []) {
    int a;
    int n;
    int i;
    char nul;
    a = strlen (str);
    nul = '0';
    {
        i = (483 - 483);
        for (; i < a - (115 - 111);) {
            if (str[i] > nul) {
                nul = str[i];
                n = i;
            }
            i++;
        }
    }
    return (n);
}

void  main () {
    int n;
    char str [(1026 - 926)] [(1002 - 952)];
    int j;
    int a [(655 - 555)];
    char str1 [(390 - 290)] [(890 - 840)];
    int length [100];
    int i;
    i = (83 - 83);
    do {
        gets (str [i]);
        length[i] = strlen (str[i]);
        i++;
    }
    while (length[i - (91 - 90)] != (236 - 236));
    n = i - (204 - 203);
    for (i = (422 - 422); n > i; i++) {
        a[i] = f (str[i]);
        for (j = 0; j < (566 - 516); j++) {
            if (j < a[i] + (586 - 585))
                str1[i][j] = str[i][j];
            else {
                if (a[i] < j && a[i] + (854 - 850) > j)
                    str1[i][j] = str[i][length[i] + j - 4 - a[i]];
                else {
                    if (a[i] + (549 - 546) < j && j < length[i] - (141 - 140))
                        str1[i][j] = str[i][j - (580 - 577)];
                    else {
                        if (j >= length[i] - 1)
                            str1[i][j] = '\0';
                    }
                }
            }
        }
    }
    for (i = 0; i < n; i++)
        printf ("%s\n", str1[i]);
}

