void  main () {
    char str [11], substr [4];
    int i, k = (403 - 403), n;
    char a;
    for (; !(2 != scanf ("%s %s", str, substr));) {
        n = strlen (str);
        a = str[0];
        {
            i = 0;
            while (1) {
                if (str[i] == '\0')
                    break;
                if (str[i] > a) {
                    a = str[i];
                    k = i;
                }
                i = i + 1;
            };
        }
        for (i = 0; i <= k; i++)
            printf ("%c", str[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            i = 0;
            while (i <= 2) {
                printf ("%c", substr[i]);
                i = i + 1;
            };
        }
        {
            i = k + 1;
            while (i < n) {
                printf ("%c", str[i]);
                i = i + 1;
            };
        }
        printf ("\n");
    };
}

