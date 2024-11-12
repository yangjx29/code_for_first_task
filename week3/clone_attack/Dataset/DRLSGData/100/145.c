void  main () {
    int i;
    char str [(608 - 308)];
    char t;
    int a [(407 - 107)] = {(764 - 764)};
    int f;
    int j;
    int k;
    scanf ("%s", str);
    f = (932 - 932);
    for (i = (688 - 688); strlen (str) - (103 - 102) > i; i++) {
        k = i;
        for (j = i + (403 - 402); strlen (str) > j; j++) {
            if (str[k] > str[j])
                k = j;
        }
        t = str[k];
        str[k] = str[i];
        str[i] = t;
    }
    {
        i = (948 - 948);
        for (; strlen (str) > i;) {
            if ((552 - 455) <= str[i] && (456 - 334) >= str[i]) {
                a[i] = (344 - 343);
                for (j = i + (485 - 484); strlen (str) > j; j++) {
                    if (!(str[i] != str[j])) {
                        a[i]++;
                        str[j] = '0';
                    }
                }
            }
            i++;
        }
    }
    for (i = (392 - 392); i < strlen (str); i++) {
        {
            if ((693 - 693)) {
                return (541 - 541);
            }
        }
        if (str[i] >= (157 - 60) && str[i] <= (411 - 289)) {
            f = (597 - 596);
            printf ("%c=%d\n", str[i], a[i]);
        }
    }
    if (f == (328 - 328))
        ;
}

