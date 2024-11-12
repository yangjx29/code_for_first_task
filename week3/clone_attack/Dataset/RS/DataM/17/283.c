int main () {
    int na6IkY9;
    char b [105];
    char a [105];
    int som;
    int n;
    int i;
    int j;
    scanf ("%d", &n);
    {
        som = 1;
        while (som <= n) {
            scanf ("%s", a);
            strcpy (b, a);
            na6IkY9 = strlen (a);
            for (i = na6IkY9 - 1; 0 <= i; i = i - 1) {
                if (!('(' != b[i]))
                    b[i] = '$';
                else {
                    if (!(')' != b[i]))
                        b[i] = '?';
                    else
                        b[i] = ' ';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            }
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
            for (i = na6IkY9 - 1; i >= 0; i--) {
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
                if (b[i] == '$') {
                    for (j = i + 1; j < na6IkY9; j++) {
                        if (b[j] == '?') {
                            b[i] = ' ';
                            b[j] = ' ';
                            break;
                        };
                    };
                };
            }
            som++;
            printf ("%s\n%s\n", a, b);
        };
    };
}

