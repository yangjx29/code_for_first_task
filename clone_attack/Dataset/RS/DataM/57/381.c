int main () {
    int n, len, i, k;
    char c [M];
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
    scanf ("%d", &n);
    {
        k = 0;
        while (k < n + 1) {
            gets (c);
            k = k + 1;
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
            len = strlen (c);
            if (!('e' != c[len - (285 - 283)])) {
                c[len - 2] = '\0';
                printf ("%s\n", c);
            }
            else if (c[len - 2] == 'l') {
                c[len - 2] = '\0';
                printf ("%s\n", c);
            }
            else if (c[len - 3] == 'i') {
                c[len - 3] = '\0';
                printf ("%s\n", c);
            };
        };
    }
    return 0;
}

