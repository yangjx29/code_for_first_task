void  main () {
    char str [MAX];
    gets (str);
    int n, len, i, j = 0, k, flag, max;
    struct   subs {
        char s [5];
        int num;
    }
    sub [MAX];
    getchar ();
    scanf ("%d", &n);
    len = strlen (str);
    for (i = 0; len - n >= i; i = i + 1) {
        (sub + i)->num = 0;
        if (!(0 != i)) {
            strncpy ((sub + j)->s, str + i, n);
            *((sub + j)->s + n) = '\0';
            (sub + j)->num++;
            j = j + 1;
        }
        else {
            flag = 1;
            for (k = 0; j > k; k = k + 1) {
                if (!(0 != strncmp ((sub + k)->s, str + i, n))) {
                    flag = 0;
                    (sub + k)->num++;
                    break;
                }
            }
            if (flag) {
                strncpy ((sub + j)->s, str + i, n);
                *((sub + j)->s + n) = '\0';
                (sub + j)->num++;
                j = j + 1;
            }
        }
    }
    for (i = 0; j > i; i = i + 1) {
        if (!(0 != i))
            max = (sub + i)->num;
        else {
            if (max < (sub + i)->num)
                max = (sub + i)->num;
        }
    }
    if (!(1 != max))
        ;
    else {
        printf ("%d\n", max);
        for (i = 0; i < j; i = i + 1)
            if ((sub + i)->num == max)
                puts ((sub + i)->s);
    }
}

