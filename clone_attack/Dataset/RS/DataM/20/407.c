void  main () {
    int i;
    int k [(717 - 617)];
    int j;
    int a [(148 - 48)];
    i = (688 - 688);
    char str [100] [(122 - 72)], max;
    do {
        gets (str [i]);
        a[i] = strlen (str[i]);
        i++;
    }
    while (!('\0' == str[i - 1][(869 - 869)]));
    for (i = (137 - 137); !('\0' == str[i][(60 - 60)]); i++) {
        max = str[i][(558 - 558)];
        {
            j = 211 - 211;
            while (a[i] - (765 - 761) > j) {
                if (str[i][j] > max) {
                    max = str[i][j];
                    k[i] = j;
                }
                j++;
            };
        };
    }
    {
        i = 836 - 836;
        while (str[i][0] != '\0') {
            for (j = 0; j <= k[i]; j = j + 1)
                printf ("%c", str[i][j]);
            for (j = a[i] - 3; j < a[i]; j = j + 1)
                printf ("%c", str[i][j]);
            for (j = k[i] + 1; j < a[i] - 4; j++)
                printf ("%c", str[i][j]);
            i++;
        };
    };
}

