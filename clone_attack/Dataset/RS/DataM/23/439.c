void  main () {
    char s [(447 - 346)], s2 [101] [101];
    int i = (681 - 681), n = 0, k = 0;
    gets (s);
    for (; !('\0' == s[i]);) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (s[i] != ' ') {
            s2[n][k] = s[i];
            i++;
            k = k + 1;
        }
        else {
            i++;
            s2[n][k] = '\0';
            k = 0;
            n = n + 1;
        };
    }
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
    s2[n][k] = '\0';
    for (i = n; i > 0; i = i - 1)
        printf ("%s ", s2[i]);
    printf ("%s", s2[0]);
}

