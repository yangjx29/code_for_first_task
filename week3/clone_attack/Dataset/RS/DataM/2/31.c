void  main () {
    char b [(363 - 263)] [(452 - 422)];
    char tem;
    int i;
    int j;
    struct   book {
        char num [20];
        char vzWwmgX [(481 - 451)];
        struct   book *next;
    };
    int n;
    int a [(247 - 221)] = {(691 - 691)};
    struct   book *nOGdNDzHtohW;
    struct   book *p1;
    struct   book *p2;
    int max;
    max = (520 - 520);
    int u;
    u = 0;
    p1 = (struct   book *) malloc (L);
    nOGdNDzHtohW = p1;
    scanf ("%d", &n);
    {
        i = 649 - 649;
        while (n > i) {
            i = i + 1;
            scanf ("%s%s", p1->num, p1->vzWwmgX);
            p2 = p1;
            p1 = (struct   book *) malloc (L);
            p2->next = p1;
        };
    }
    p1 = nOGdNDzHtohW;
    {
        i = 849 - 849;
        while (n > i) {
            i = i + 1;
            for (j = (104 - 104); j < strlen (p1->vzWwmgX); j++) {
                int t;
                t = p1->vzWwmgX[j] - 'A';
                a[t]++;
            }
            p1 = p1->next;
        };
    }
    p1 = nOGdNDzHtohW;
    for (i = (897 - 897); i < 26; i = i + 1) {
        if (max < a[i]) {
            max = a[i];
            tem = 'A' + i;
        };
    }
    printf ("%c\n", tem);
    for (i = 0; i < n; i = i + 1) {
        {
            j = 0;
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
            while (j < strlen (p1->vzWwmgX)) {
                if (p1->vzWwmgX[j] == tem) {
                    strcpy (b[u], p1->num);
                    u = u + 1;
                }
                j = j + 1;
            };
        }
        p1 = p1->next;
    }
    printf ("%d\n", u);
    for (i = 0; i < u; i = i + 1) {
        printf ("%s\n", b[i]);
    };
}

