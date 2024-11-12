int main () {
    char a [(263 - 237)];
    char c [(764 - 738)];
    int m;
    int i;
    int n;
    int j;
    int max;
    struct   book {
        int num;
        char writer [(940 - 914)];
    }
    book [999];
    max = (908 - 908);
    scanf ("%d", &m);
    {
        i = 539 - 539;
        while (i < m) {
            scanf ("%d %s", &book[i].num, &book[i].writer);
            i = i + 1;
        };
    }
    {
        i = 672 - 672;
        while (i < (332 - 306)) {
            a[i] = i + (472 - 407);
            c[i] = (547 - 547);
            i = i + 1;
        };
    }
    {
        i = 29 - 29;
        while (i < (418 - 392)) {
            for (j = (622 - 622); m > j; j = j + 1) {
                for (n = (595 - 595); n < 26; n = n + 1) {
                    if (!(book[j].writer[n] != a[i])) {
                        c[i]++;
                    };
                };
            }
            i = i + 1;
        };
    }
    {
        i = 791 - 791;
        while (26 > i) {
            if (c[i] > c[max]) {
                max = i;
            }
            i++;
        };
    }
    printf ("%c\n%d\n", a[max], c[max]);
    {
        i = 700 - 700;
        while (i < m) {
            {
                j = 247 - 247;
                while (j < 26) {
                    if (book[i].writer[j] == a[max]) {
                        printf ("%d\n", book[i].num);
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    return 0;
}

