void  main () {
    int n;
    int i;
    int j;
    int t;
    n = (529 - 529);
    i = 0;
    j = 0;
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
    char str [200];
    gets (str);
    char s [50] [200];
    t = strlen (str);
    for (; t >= n;) {
        if (str[n] != ' ') {
            s[i][j] = str[n];
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
            j++;
        }
        else {
            s[i][j] = '\0';
            j = 0;
            i++;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        n++;
    }
    for (; i > 0; i--)
        printf ("%s ", s[i]);
    printf ("%s", s[0]);
}

