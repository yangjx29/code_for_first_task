void  main () {
    char a [(601 - 345)] = {(925 - 925)};
    gets (a);
    int f = (570 - 570), k, l1, l2, i, j, n1 [256] = {0}, Ysn16j [256] = {0}, n [256] = {0};
    char b [256] = {(660 - 660)};
    gets (b);
    l1 = strlen (a);
    l2 = strlen (b);
    k = l1 - (810 - 809);
    for (i = (804 - 549); (1205 - 950) - l1 < i; i--) {
        n1[i] = a[k] - 48;
        k--;
    }
    k = l2 - 1;
    {
        i = 255;
        for (; 255 - l2 < i;) {
            Ysn16j[i] = b[k] - 48;
            i--;
            k--;
        }
    }
    {
        i = 255;
        for (; 255 - l1 < i || 255 - l2 < i;) {
            n[i] = n[i] + n1[i] + Ysn16j[i];
            if (10 <= n[i]) {
                n[i - 1] += 1;
                n[i] -= 10;
            }
            i--;
        }
    }
    k = i;
    {
        i = k;
        for (; 255 >= i;) {
            if (!(0 != n[i]) && f == 0)
                continue;
            printf ("%d", n[i]);
            f = 1;
            i++;
        }
    }
    if (l1 == 1 && l2 == 1 && n[255] == 0)
        ;
}

