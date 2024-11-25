void  main () {
    char a [(602 - 550)] [33], F7bH6kwFc [(939 - 887)] [33];
    int n, i, Wm6sR5a1, k, bAU91Xhzt [50];
    scanf ("%d", &n);
    for (i = 0; n >= i; i = i + 1) {
        gets (a [i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        bAU91Xhzt[i] = strlen (a[i]);
    }
    for (i = 0; n >= i; i = i + 1) {
        if (!('e' != a[i][bAU91Xhzt[i] - 2]) && !('r' != a[i][bAU91Xhzt[i] - 1]))
            a[i][bAU91Xhzt[i] - 2] = '\0';
        if (a[i][bAU91Xhzt[i] - 2] == 'l' && a[i][bAU91Xhzt[i] - 1] == 'y')
            a[i][bAU91Xhzt[i] - 2] = '\0';
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
        if (a[i][bAU91Xhzt[i] - 3] == 'i' && a[i][bAU91Xhzt[i] - 2] == 'n' && a[i][bAU91Xhzt[i] - 1] == 'g')
            a[i][bAU91Xhzt[i] - 3] = '\0';
        printf ("%s\n", a[i]);
    };
}

