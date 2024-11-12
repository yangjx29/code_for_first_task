void  main () {
    int i, lfScBeH5T, F8J0nBizZV = 1;
    char s [(1048 - 998)], K7HvBh [(786 - 736)], eq3hJdMfr2l [50];
    scanf ("%s", s);
    scanf ("%s", K7HvBh);
    for (i = 0; strlen (K7HvBh) > i; i++) {
        F8J0nBizZV = 1;
        {
            lfScBeH5T = 0;
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
            while (strlen (s) > lfScBeH5T) {
                eq3hJdMfr2l[lfScBeH5T] = K7HvBh[i + lfScBeH5T];
                lfScBeH5T++;
            };
        }
        for (lfScBeH5T = 0; lfScBeH5T < strlen (s); lfScBeH5T++) {
            if (eq3hJdMfr2l[lfScBeH5T] != s[lfScBeH5T])
                F8J0nBizZV = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (F8J0nBizZV != 0) {
            printf ("%d", i);
            break;
        };
    };
}

