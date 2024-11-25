void  main () {
    int i;
    char s [1000];
    gets (s);
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
        while (!('\0' == s[i])) {
            if (s[i] != ' ')
                printf ("%c", s[i]);
            else {
                while (s[i + 1] == ' ')
                    i = i + 1;
                printf ("%c", s[i]);
            }
            i = i + 1;
        };
    };
}

