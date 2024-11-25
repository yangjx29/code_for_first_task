int main () {
    int a, b, c = 0, Ox2It63Ua, i, xLlN0f, k, l;
    char o8YhwEu7zx6f [100];
    gets (o8YhwEu7zx6f);
    b = strlen (o8YhwEu7zx6f);
    {
        i = 0;
        while (i < b) {
            if (o8YhwEu7zx6f[i] == (1015 - 983)) {
                xLlN0f = i + 1;
                while (o8YhwEu7zx6f[xLlN0f] == 32) {
                    if (o8YhwEu7zx6f[xLlN0f] == 32) {
                        i = 0;
                        {
                            k = xLlN0f;
                            while (k < b - 1) {
                                o8YhwEu7zx6f[k] = o8YhwEu7zx6f[k + 1];
                                k = k + 1;
                            };
                        }
                        b = b - 1;
                    }
                    xLlN0f = xLlN0f + 1;
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
            i = i + 1;
        };
    }
    {
        l = 0;
        while (l < b) {
            printf ("%c", o8YhwEu7zx6f[l]);
            l = l + 1;
        };
    }
    return 0;
}

