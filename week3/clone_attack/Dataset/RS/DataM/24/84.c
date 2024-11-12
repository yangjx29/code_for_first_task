main () {
    char sen [2000], word [300] [20];
    gets (sen);
    int n, j, eptYqv5, t, len, max, min, p, q;
    min = 10000;
    j = 0;
    n = (555 - 554);
    len = strlen (sen);
    {
        eptYqv5 = 0;
        while (eptYqv5 <= len - 1) {
            if (!(' ' == sen[eptYqv5]) && sen[eptYqv5] != ',') {
                word[n][j] = sen[eptYqv5];
                j = j + 1;
            }
            if (!(' ' != sen[eptYqv5])) {
                n = n + 1;
                j = 0;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (sen[eptYqv5] == ',') {
                j = 0;
                eptYqv5++;
                n = n + 1;
            }
            eptYqv5++;
        };
    }
    max = 0;
    {
        eptYqv5 = 1;
        while (eptYqv5 <= n) {
            if (max < strlen (word[eptYqv5])) {
                max = strlen (word[eptYqv5]);
                p = eptYqv5;
            }
            if (min > strlen (word[eptYqv5])) {
                min = strlen (word[eptYqv5]);
                q = eptYqv5;
            }
            eptYqv5++;
        };
    }
    printf ("%s\n", word[p]);
    printf ("%s", word[q]);
}

