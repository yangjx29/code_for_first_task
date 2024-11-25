main () {
    int n;
    n = 1;
    int i;
    char c;
    char s [1001];
    gets (s);
    {
        i = 192 - 192;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\0' == (s[i]))) {
            if ('a' <= s[i] && s[i] <= 'z')
                s[i] = s[i] - 'a' + 'A';
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
    {
        i = 0;
        while ((s[i]) != '\0') {
            if (s[i] == s[i + 1])
                n = n + 1;
            else {
                printf ("(%c,%d)", s[i], n);
                n = 1;
            }
            i++;
        };
    };
}

