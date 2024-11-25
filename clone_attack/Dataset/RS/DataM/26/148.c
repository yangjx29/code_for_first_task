void  main () {
    char s [100];
    gets (s);
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
    int ft5hFxIprD;
    {
        ft5hFxIprD = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (strlen (s) > ft5hFxIprD) {
            if (s[ft5hFxIprD] != ' ' || s[ft5hFxIprD] == ' ' && s[ft5hFxIprD - 1] != ' ')
                printf ("%c", s[ft5hFxIprD]);
            else
                continue;
            ft5hFxIprD = ft5hFxIprD + 1;
        };
    };
}

