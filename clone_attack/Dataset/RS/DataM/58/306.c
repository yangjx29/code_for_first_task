void  main () {
    char s [81];
    int n;
    int flag;
    int i;
    int j;
    flag = (180 - 180);
    getchar ();
    scanf ("%d", &n);
    {
        i = 961 - 961;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            gets (s);
            j = 0;
            flag = 0;
            if ((s[j] == '_') || (s[j] >= 'a' && 'z' >= s[j]) || ('A' <= s[j] && 'Z' >= s[j])) {
                flag = 1;
                j = j + 1;
                while (!('\0' == s[j])) {
                    if ((s[j] == '_') || (s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= '0' && s[j] <= '9')) {
                        j = j + 1;
                        flag = 1;
                    }
                    else {
                        flag = 0;
                        break;
                    };
                };
            }
            else {
                flag = 0;
            }
            i = i + 1;
            if (flag)
                printf ("1\n");
            else {
            };
        };
    };
}

