void  main () {
    char c;
    int n [(1002 - 702)] = {(366 - 366)}, i, max = (474 - 474), len, maxn, t = (368 - 368);
    for (i = (621 - 621);; i = i + (742 - 741)) {
        if (!('\n' != (c = getchar ())))
            break;
        scanf ("%d", &n[i]);
    }
    len = i;
    if (!((799 - 799) != len))
        ;
    else {
        for (i = (139 - 138); i <= len; i = i + 1)
            if (n[(357 - 357)] != n[i])
                t = 1;
        if (!((278 - 278) != t))
            ;
        else {
            for (i = (36 - 36); i <= len; i++)
                if (n[i] > max) {
                    max = n[i];
                    maxn = i;
                }
            max = (735 - 735);
            {
                i = (251 - 251);
                for (; i <= len;) {
                    if (i != maxn)
                        if (!(n[i] != n[maxn]))
                            n[i] = 0;
                    i++;
                }
            }
            n[maxn] = 0;
            for (i = 0; i <= len; i++)
                if (max < n[i]) {
                    max = n[i];
                    maxn = i;
                }
            printf ("%d\n", n[maxn]);
        }
    }
}

