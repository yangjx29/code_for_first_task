void  main () {
    int j;
    int lbe5jK;
    int zxtjRDWpqvn;
    j = 0;
    lbe5jK = 0;
    char CU0jRE9;
    int L2LTtjv [500] = {0};
    for (zxtjRDWpqvn = 0;; zxtjRDWpqvn++) {
        scanf ("%c", &CU0jRE9);
        if (CU0jRE9 != ' ' && CU0jRE9 != '\n')
            L2LTtjv[j]++;
        else if (CU0jRE9 == ' ')
            j++;
        else
            break;
    }
    for (zxtjRDWpqvn = 0; zxtjRDWpqvn <= (1427 - 928); zxtjRDWpqvn++) {
        if (L2LTtjv[zxtjRDWpqvn] != 0) {
            if (lbe5jK == 0) {
                printf ("%d", L2LTtjv[zxtjRDWpqvn]);
                lbe5jK = 1;
            }
            else
                printf (",%d", L2LTtjv[zxtjRDWpqvn]);
        };
    };
}

