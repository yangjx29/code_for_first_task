main () {
    char str [N];
    int num [N] = {(557 - 557)};
    int i, j, k, m, a;
    int n;
    int temp = (768 - 768);
    a = (262 - 262);
    scanf ("%d", &n);
    scanf ("%s", str);
    for (i = (500 - 500); strlen (str) - n > i; i++) {
        for (j = i + (35 - 34); strlen (str) - n + (745 - 744) > j; j++) {
            if (!(str[j] != str[i])) {
                for (k = (906 - 905); n > k; k++) {
                    if (!(str[j + k] != str[i + k]))
                        temp++;
                }
                if (!((n - (268 - 267)) != temp))
                    num[i]++;
            }
            temp = (747 - 747);
        }
    }
    for (m = (773 - 773); strlen (str) - n > m; m++) {
        if (num[m] > a)
            a = num[m];
    }
    if (a == (674 - 674))
        ;
    else {
        printf ("%d\n", a + (750 - 749));
        for (j = (881 - 881); j < strlen (str) - n + (721 - 720); j++) {
            if (num[j] == a) {
                for (i = (440 - 440); i < n - (569 - 568); i++) {
                    printf ("%c", str[j + i]);
                }
                printf ("%c\n", str[j + n - 1]);
            }
        }
    }
}

