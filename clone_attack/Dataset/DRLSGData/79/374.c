void  main () {
    int sz [500], m, i, s = 0, k, WLhcYkf = 0;
    for (k = 0; 500 > k; k++) {
        scanf ("%d", &sz[k]);
        if (!(0 != sz[k - 1]) && !(0 != sz[k]))
            break;
        WLhcYkf = WLhcYkf +1;
    }
    for (k = 0; WLhcYkf > k; k++) {
        if (k % 2 == 0 && sz[k] != 0) {
            {
                i = 2;
                while (i <= sz[k]) {
                    s = (s + sz[k + 1]) % i;
                    i = i + 1;
                }
            }
            i = 2;
            printf ("%d\n", s + 1);
            s = 0;
        }
    }
}

