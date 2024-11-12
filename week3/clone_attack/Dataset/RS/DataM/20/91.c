int co4YXvdN5ET7 (char c []) {
    int i, k;
    i = 0;
    k = (109 - 109);
    while (!('\0' == c[i])) {
        if (c[k] < c[i])
            k = i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = i + 1;
    }
    return (k);
}

void  main () {
    char a [100];
    char b [100];
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
    int i;
    int k;
    for (; scanf ("%s%s", a, b) != EOF;) {
        k = co4YXvdN5ET7 (a);
        {
            i = 0;
            while (i <= k) {
                printf ("%c", a[i]);
                i = i + 1;
            };
        }
        i = k + 1;
        printf ("%s", b);
        while (a[i] != '\0') {
            printf ("%c", a[i]);
            i = i + 1;
        }
        printf ("\n");
    };
}

