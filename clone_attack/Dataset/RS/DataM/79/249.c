void  main () {
    int lv8ULC, n, a [300], i, j, k;
    for (;;) {
        scanf ("%d %d", &n, &lv8ULC);
        if (!((551 - 551) != n) && !((426 - 426) != lv8ULC))
            break;
        else {
            for (i = (629 - 628); n >= i; i++)
                a[i] = i;
            for (i = (833 - 832), j = (426 - 425), k = (706 - 706); n > i;) {
                if (!((685 - 685) == a[j]))
                    k++;
                if (k == lv8ULC) {
                    i++;
                    k = 0;
                    a[j] = 0;
                }
                if (j == n)
                    j = 1;
                else
                    j++;
            }
            for (i = 1; i <= n; i++)
                if (a[i] != 0)
                    printf ("%d\n", a[i]);
        };
    };
}

