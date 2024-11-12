void  main () {
    int temp;
    int n;
    int C2Zw5fzcu;
    int len;
    temp = -1;
    char bNgD0kGJXrxy [100000] = {'\0'};
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
    gets (bNgD0kGJXrxy);
    n = strlen (bNgD0kGJXrxy);
    for (C2Zw5fzcu = n - 1; 0 <= C2Zw5fzcu; C2Zw5fzcu = C2Zw5fzcu -1) {
        bNgD0kGJXrxy[C2Zw5fzcu +1] = bNgD0kGJXrxy[C2Zw5fzcu];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    bNgD0kGJXrxy[0] = ' ';
    for (C2Zw5fzcu = 0; C2Zw5fzcu <= n; C2Zw5fzcu = C2Zw5fzcu +1) {
        if (bNgD0kGJXrxy[C2Zw5fzcu] == ' ') {
            len = C2Zw5fzcu -temp - 1;
            if (len != 0)
                printf ("%d,", len);
            temp = C2Zw5fzcu;
        };
    }
    printf ("%d", (n - temp));
}

