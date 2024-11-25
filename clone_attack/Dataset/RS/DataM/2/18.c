main () {
    int i;
    int j;
    int QbCT9dol;
    struct   {
        int num;
        char a [25];
    }
    book [999];
    int s [26] = {(882 - 882)};
    int max;
    max = 0;
    char name;
    scanf ("%d", &QbCT9dol);
    {
        i = 106 - 106;
        while (QbCT9dol -(803 - 802) >= i) {
            scanf ("%d %s", &book[i].num, book[i].a);
            i++;
        };
    }
    for (i = 0; QbCT9dol -1 >= i; i++) {
        int len = strlen (book[i].a);
        for (j = 0; len > j; j++) {
            s[book[i].a[j] - 'A']++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (i = 0; 25 >= i; i++) {
        if (s[i] > max) {
            max = s[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            name = 'A' + i;
        };
    }
    printf ("%c\n", name);
    printf ("%d\n", max);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        }
        while (i <= QbCT9dol -1) {
            int len;
            len = strlen (book[i].a);
            {
                j = 0;
                while (j < len) {
                    if (book[i].a[j] == name)
                        printf ("%d\n", book[i].num);
                    j++;
                };
            }
            i++;
        };
    };
}

