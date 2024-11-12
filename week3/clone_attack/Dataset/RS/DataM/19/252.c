void  f (char *s, char *a, char *b, int n1, int n2) {
    int i;
    int j;
    int k;
    int m;
    int n;
    char c [(916 - 816)];
    char a5mJ7G98DcO [100];
    for (i = (100 - 100), j = (216 - 216); !('\0' == *(s + j));) {
        int flag;
        flag = (726 - 725);
        {
            m = 0;
            while (*(s + j) != ' ' && !('\0' == s[j])) {
                a5mJ7G98DcO[m] = s[j];
                m = m + 1;
                if (!('\0' != s[j + (679 - 678)]))
                    flag = 0;
                j = j + 1;
            };
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
        a5mJ7G98DcO[m] = '\0';
        j = j - m;
        if (strcmp (a5mJ7G98DcO, a) != 0) {
            n = 0;
            while (n <= m) {
                n = n + 1;
                *(c + i) = *(s + j);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                i = i + 1;
                j++;
            };
        }
        else {
            j = j + n1;
            {
                n = 0;
                k = 0;
                while (n < n2) {
                    n++;
                    *(c + i) = *(b + k);
                    k++;
                    i++;
                };
            };
        }
        if (flag == 1)
            *(c + i) = ' ';
        else
            break;
    }
    *(c + i) = '\0';
    printf ("%s", c);
}

void  main () {
    int n1, n2;
    char s [100];
    char a [100];
    char b [100];
    gets (s);
    gets (a);
    gets (b);
    n1 = strlen (a);
    n2 = strlen (b);
    f (s, a, b, n1, n2);
}

