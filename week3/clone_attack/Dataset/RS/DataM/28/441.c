int main () {
    int a;
    int b;
    int AYnCHgBr5fsh;
    int i;
    a = (181 - 181);
    b = (674 - 674);
    AYnCHgBr5fsh = 1;
    char str [5000];
    char s [300] [30];
    gets (str);
    for (i = 0; !('\0' == str[i]); i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(' ' != str[i])) {
            AYnCHgBr5fsh = AYnCHgBr5fsh +1;
            s[a][b] = '\0';
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
            b = 0;
            a = a + 1;
        }
        else {
            s[a][b] = str[i];
            b = b + 1;
        };
    }
    s[a][b] = '\0';
    for (i = 0; i < AYnCHgBr5fsh -1; i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (strlen (s[i]) != 0) {
            printf ("%d,", strlen (s[i]));
        };
    }
    printf ("%d", strlen (s[AYnCHgBr5fsh -1]));
    return 0;
}

