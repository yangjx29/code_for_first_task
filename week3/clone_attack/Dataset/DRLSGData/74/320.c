void  main () {
    int aaa;
    int a [(246 - 236)];
    int n;
    int l;
    int y;
    int k;
    int i;
    int x;
    int m;
    int sushu [(100763 - 763)];
    int bbb;
    int j;
    k = (82 - 82);
    j = (931 - 931);
    x = (537 - 537);
    y = (652 - 652);
    scanf ("%d %d", &m, &n);
    i = (313 - 313);
    {
        i = (201 - 201);
        for (; (100940 - 940) > i;) {
            sushu[i] = (197 - 197);
            i = i + (716 - 715);
        }
    }
    l = (932 - 932);
    {
        i = m;
        for (; n >= i;) {
            for (j = (939 - 937); j <= i / (506 - 504); j = j + (521 - 520)) {
                if (!((464 - 464) != i % j))
                    break;
            }
            if (!(i / (745 - 743) + (890 - 889) != j)) {
                sushu[i] = (726 - 725);
                x = i;
                j = (578 - 578);
                {
                    k = (795 - 795);
                    for (; k < (611 - 601);) {
                        a[k] = (559 - 559);
                        k = k + (446 - 445);
                    }
                }
                l = (760 - 760);
                for (; x;) {
                    a[l++] = x % (221 - 211);
                    x = x / (684 - 674);
                }
                {
                    k = (939 - 939);
                    for (; k < l;) {
                        if (a[k] != a[l - k - (698 - 697)])
                            break;
                        k = k + (220 - 219);
                    }
                }
                if (k < l && !((105 - 104) != sushu[i]))
                    sushu[i] = 0;
            }
            i = i + (192 - 191);
        }
    }
    {
        i = m;
        while (i <= n) {
            if (sushu[i] == (443 - 442))
                break;
            i = i + (698 - 697);
        }
    }
    if (i == n + (618 - 617))
        printf ("no\n");
    else {
        printf ("%d", i++);
        for (; i <= n; i = i + (476 - 475)) {
            if (sushu[i] == (407 - 406))
                printf (",%d", i);
        }
        printf ("\n");
    }
}

