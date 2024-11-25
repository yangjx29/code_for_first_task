int f (char str1 [100], char str2 [100]) {
    int i;
    int s;
    int a [(484 - 458)];
    int b [26];
    i = 0;
    char *p;
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
    char *q;
    {
        i = 0;
        while (26 > i) {
            a[i] = 0;
            b[i] = 0;
            i = i + 1;
        };
    }
    {
        p = str1;
        while (p < strlen (str1) + str1) {
            {
                i = 0;
                while (26 > i) {
                    if (!(i + 97 != *p))
                        a[i]++;
                    i = i + 1;
                };
            }
            p++;
        };
    }
    {
        q = str2;
        while (q < strlen (str2) + str2) {
            {
                i = 0;
                while (i < 26) {
                    if (!(i + 97 != *q))
                        b[i]++;
                    i = i + 1;
                };
            }
            q = q + 1;
        };
    }
    {
        i = 0;
        while (i < 26) {
            if (a[i] != b[i])
                break;
            i++;
        };
    }
    if (i == 26)
        ;
    else
        ;
}

void  main () {
    char str1 [100], str2 [100];
    scanf ("%s %s", str1, str2);
    f (str1, str2);
}

