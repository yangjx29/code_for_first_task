void  main () {
    void  insert (char a [], char b []);
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
    char a [10], b [(620 - 617)];
    for (; !(EOF == (scanf ("%s %s", a, b)));)
        insert (a, b);
}

void  insert (char a [], char b []) {
    int i, j, len, max;
    len = strlen (a);
    max = a[0];
    for (i = 1; i < len; i = i + 1) {
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
        if (max < a[i]) {
            max = a[i];
            j = i;
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
    for (i = 0; i <= j; i = i + 1)
        printf ("%c", a[i]);
    for (i = 0; i < 3; i = i + 1)
        printf ("%c", b[i]);
    for (i = j + 1; i < len; i = i + 1)
        printf ("%c", a[i]);
    printf ("\n");
}

