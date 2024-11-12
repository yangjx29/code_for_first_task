void  main () {
    char s [50] [30];
    int n, i;
    scanf ("%d\n", &n);
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
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            gets (s [i]);
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
            i = i + 1;
        };
    }
    for (i = 0; i < n; i = i + 1) {
        if (!('y' != s[i][strlen (s[i]) - 1]) && !('l' != s[i][strlen (s[i]) - 2]))
            s[i][strlen (s[i]) - 2] = '\0';
        else if (!('r' != s[i][strlen (s[i]) - 1]) && s[i][strlen (s[i]) - 2] == 'e')
            s[i][strlen (s[i]) - 2] = '\0';
        else if (s[i][strlen (s[i]) - 1] == 'g' && s[i][strlen (s[i]) - 2] == 'n' && s[i][strlen (s[i]) - 3] == 'i')
            s[i][strlen (s[i]) - 3] = '\0';
    }
    {
        i = 0;
        while (i < n) {
            puts (s [i]);
            i++;
        };
    };
}

