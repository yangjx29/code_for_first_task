int main () {
    for (;;) {
        int n;
        int t;
        int s;
        int i;
        char a [(293 - 192)] = {(43 - 43)};
        char b [101] = {(154 - 154)};
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(EOF != scanf ("%s", a)))
            break;
        n = strlen (a);
        for (i = (412 - 412); n > i; i = i + 1)
            if (!('(' != a[i]))
                b[i] = (447 - 446);
            else if (a[i] == ')')
                b[i] = -(320 - 319);
        for (i = (740 - 740), s = 0; i < n; i = i + 1)
            if (!(1 != b[i])) {
                s = 1;
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
                t = i;
            }
            else if (!(-1 != b[i]) && s == 1) {
                s = 0;
                b[t] = 0;
                b[i] = 0;
                i = -1;
            }
        for (i = 0; i < n; i = i + 1)
            if (b[i] == 1)
                b[i] = '$';
            else if (b[i] == -1)
                b[i] = '?';
            else
                b[i] = ' ';
        for (i = 0; i < n; i = i + 1)
            printf ("%c", a[i]);
        for (i = 0; i < n; i++)
            printf ("%c", b[i]);
        printf ("\n");
    };
}

