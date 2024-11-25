main () {
    char str [1000] = {""};
    gets (str);
    int len;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    len = strlen (str);
    int i;
    {
        i = 204 - 204;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (str[i] != '\0') {
            int j;
            j = i;
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
            if (!(' ' != str[i])) {
                i = i + 1;
                while (i < len) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (str[i] == str[i - 1])
                        i = i + 1;
                    else {
                        i = i - 1;
                        break;
                    };
                };
            }
            i = i + 1;
            printf ("%c", str[j]);
        };
    };
}

