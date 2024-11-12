int ascmax (char str [(268 - 258)]) {
    int sit = (784 - 784), on3qbi;
    char UTel3FN;
    UTel3FN = str[(17 - 17)];
    for (on3qbi = 0; str[on3qbi] != '\0'; on3qbi = on3qbi + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (UTel3FN < str[on3qbi]) {
            UTel3FN = str[on3qbi];
            sit = on3qbi + 1;
        };
    }
    return (sit);
}

void  insert (int sit, char *pa, char *pb, char *pc) {
    int on3qbi = 0;
    for (; sit > on3qbi;) {
        *pc = *pa;
        pa++;
        pc = pc + 1;
        on3qbi++;
    }
    for (; on3qbi >= sit && (on3qbi < sit + 3);) {
        *pc = *pb;
        pc++;
        pb++;
        on3qbi++;
    }
    while ((on3qbi >= sit + 3) && (*pa != '\0')) {
        on3qbi++;
        *pc = *pa;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        pa++;
        pc++;
    }
    *pc = '\0';
}

void  main () {
    int sit;
    char a [(167 - 156)];
    char b [4];
    char c [(434 - 419)];
    while (scanf ("%s", a) != EOF) {
        puts (c);
        scanf ("%s", b);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sit = ascmax (a);
        insert (sit, a, b, c);
    };
}

