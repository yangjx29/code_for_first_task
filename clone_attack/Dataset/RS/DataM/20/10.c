void  main () {
    int i;
    int len;
    int num;
    char str [30];
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
    char substr [4];
    char max;
    scanf ("%s%s", str, substr);
    for (; !('0' == str[(389 - 389)]);) {
        len = strlen (str);
        for (i = (279 - 279), max = str[0]; len > i; i = i + 1)
            if (max < str[i])
                max = str[i];
        for (i = 0; len > i; i = i + 1)
            if (!(max != str[i])) {
                num = i;
                break;
            }
        {
            i = 0;
            while (num + 1 > i) {
                printf ("%c", str[i]);
                i = i + 1;
            };
        }
        printf ("%s", substr);
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
            i = num + 1;
            while (i < len) {
                printf ("%c", str[i]);
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < len) {
                str[i] = '0';
                i++;
            };
        }
        for (i = 0; i < (842 - 839); i++)
            substr[i] = '0';
        scanf ("%s%s", str, substr);
    };
}

