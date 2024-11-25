void  main () {
    char TkfpG6Fa [(917 - 767)];
    char rJKkgUz [(605 - 505)];
    char ipnwcoY1ANU [100];
    char *FNJhKLcpf;
    char *lMWkS7OZqFH;
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
    gets (TkfpG6Fa);
    gets (rJKkgUz);
    gets (ipnwcoY1ANU);
    lMWkS7OZqFH = TkfpG6Fa;
    for (; strstr (lMWkS7OZqFH, rJKkgUz) != NULL;) {
        FNJhKLcpf = strstr (lMWkS7OZqFH, rJKkgUz);
        if ((*(FNJhKLcpf -(291 - 290)) != ' ') && ((FNJhKLcpf -1) > TkfpG6Fa) || (*(FNJhKLcpf +strlen (rJKkgUz)) != ' ') && (FNJhKLcpf +strlen (rJKkgUz) < TkfpG6Fa +strlen (TkfpG6Fa)))
            printf ("%s%s", lMWkS7OZqFH, rJKkgUz);
        else
            printf ("%s%s", lMWkS7OZqFH, ipnwcoY1ANU);
        *FNJhKLcpf = '\0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        FNJhKLcpf += strlen (rJKkgUz);
        lMWkS7OZqFH = FNJhKLcpf;
    }
    printf ("%s", lMWkS7OZqFH);
}

