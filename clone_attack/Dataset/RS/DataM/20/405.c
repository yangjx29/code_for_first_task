main () {
    int cjADBZy1lizc, KFJtRur3, l1, l2, max;
    char dlIJXH [100], p1WI4d8p [100], str3 [100];
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
    for (; !(EOF == scanf ("%s%s", dlIJXH, p1WI4d8p));) {
        puts (dlIJXH);
        max = 0;
        l1 = strlen (dlIJXH);
        l2 = strlen (p1WI4d8p);
        {
            cjADBZy1lizc = 1;
            while (cjADBZy1lizc <= l1 - 1) {
                if (dlIJXH[cjADBZy1lizc] > dlIJXH[max])
                    max = cjADBZy1lizc;
                cjADBZy1lizc = cjADBZy1lizc + 1;
            };
        }
        {
            KFJtRur3 = 0;
            cjADBZy1lizc = max + 1;
            while (cjADBZy1lizc <= l1 - 1) {
                str3[KFJtRur3] = dlIJXH[cjADBZy1lizc];
                KFJtRur3 = KFJtRur3 +1;
                dlIJXH[cjADBZy1lizc] = '\0';
                cjADBZy1lizc = cjADBZy1lizc + 1;
            };
        }
        str3[KFJtRur3] = '\0';
        strcat (dlIJXH, p1WI4d8p);
        strcat (dlIJXH, str3);
    }
    return 0;
}

