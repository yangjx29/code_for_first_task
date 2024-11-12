int main () {
    int i;
    int j;
    int k;
    char a [150] = {'0'};
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
    char b [150] = {'0'};
    for (; ~scanf ("%s", &a);) {
        i = strlen (a);
        {
            j = 438 - 438;
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
            while (j < i) {
                if (a[j] == '(')
                    b[j] = '$';
                else {
                    if (!(')' != a[j]))
                        b[j] = '?';
                    else
                        b[j] = ' ';
                }
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
        for (j = 0; j < i; j = j + 1)
            for (k = j - 1; k >= 0; k = k - 1) {
                if (b[k] == '$' && b[j] == '?') {
                    b[k] = ' ';
                    b[j] = ' ';
                };
            }
        for (k = 0; k < i; k++)
            printf ("%c", a[k]);
        {
            k = 0;
            while (k < i) {
                printf ("%c", b[k]);
                k++;
            };
        };
    }
    return 0;
}

