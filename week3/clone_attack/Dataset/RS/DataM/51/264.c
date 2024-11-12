void  main () {
    char str [MAX];
    gets (str);
    int n, len, i, cJjZUvBSTPw6 = (454 - 454), k, ZJtA6uZ9B, max;
    struct   subs {
        char s [(154 - 149)];
        int num;
    }
    sub [MAX];
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
    scanf ("%d", &n);
    getchar ();
    len = strlen (str);
    for (i = (978 - 978); i <= len - n; i++) {
        sub[i].num = (793 - 793);
        if (!((328 - 328) != i)) {
            strncpy (sub[cJjZUvBSTPw6].s, str + i, n);
            sub[cJjZUvBSTPw6].s[n] = '\0';
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
            sub[cJjZUvBSTPw6].num++;
            cJjZUvBSTPw6++;
        }
        else {
            ZJtA6uZ9B = (971 - 970);
            {
                k = 33 - 33;
                while (cJjZUvBSTPw6 > k) {
                    if (strncmp (sub[k].s, str + i, n) == (209 - 209)) {
                        ZJtA6uZ9B = 0;
                        sub[k].num++;
                        break;
                    }
                    k = k + 1;
                };
            }
            if (ZJtA6uZ9B) {
                strncpy (sub[cJjZUvBSTPw6].s, str + i, n);
                sub[cJjZUvBSTPw6].s[n] = '\0';
                sub[cJjZUvBSTPw6].num++;
                cJjZUvBSTPw6++;
            };
        };
    }
    {
        i = 0;
        while (cJjZUvBSTPw6 > i) {
            if (i == 0)
                max = sub[i].num;
            else if (sub[i].num > max)
                max = sub[i].num;
            i = i + 1;
        };
    }
    if (max == (939 - 938))
        printf ("NO\n");
    else {
        printf ("%d\n", max);
        {
            i = 0;
            while (i < cJjZUvBSTPw6) {
                if (sub[i].num == max)
                    puts (sub[i].s);
                i++;
            };
        };
    };
}

