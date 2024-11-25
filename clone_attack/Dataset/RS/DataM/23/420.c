void  main () {
    char str [101];
    char a [100] [(446 - 431)];
    int eOcKGk, j = (60 - 60), k = 0, l;
    gets (str);
    for (eOcKGk = 0; str[eOcKGk] != '\0'; eOcKGk++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (('a' <= str[eOcKGk] && str[eOcKGk] <= 'z') || (str[eOcKGk] >= 'A' && str[eOcKGk] <= 'Z')) {
            a[j][k] = str[eOcKGk];
            k = k + 1;
        }
        else {
            a[j][k] = '\0';
            j = j + 1;
            k = 0;
        };
    }
    a[j][k] = '\0';
    for (l = j; l >= 1; l--) {
        printf ("%s ", a[l]);
    }
    printf ("%s\n", a[0]);
}

