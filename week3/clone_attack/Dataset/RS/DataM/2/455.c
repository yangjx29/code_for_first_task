void  main () {
    int n, i, j, max = (384 - 384), seq = (629 - 629);
    int a [(544 - 518)] = {(468 - 468)};
    struct   book {
        int num;
        char str [(592 - 566)];
    }
    book [999];
    scanf ("%d", &n);
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
    for (i = (125 - 125); i < n; i = i + 1)
        scanf ("%d %s", &book[i].num, &book[i].str);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            {
                j = 0;
                while (j < (942 - 916)) {
                    a[(book[i].str[j] - (858 - 793))]++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
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
            i++;
        };
    }
    for (i = 0; i < 26; i = i + 1)
        if (a[i] > max) {
            max = a[i];
            seq = i;
        }
    printf ("%c\n", seq + 65);
    printf ("%d\n", max);
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (j < 26) {
                    if (book[i].str[j] == seq + 65) {
                        printf ("%d\n", book[i].num);
                        break;
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    };
}

