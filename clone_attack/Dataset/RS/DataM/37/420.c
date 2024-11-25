int main () {
    char str [100000];
    int ggO21Vhdq;
    int i;
    int n;
    int xXbfwu;
    int k;
    scanf ("%d", &ggO21Vhdq);
    {
        i = 0;
        while (ggO21Vhdq > i) {
            scanf ("%s", str);
            n = strlen (str);
            {
                xXbfwu = 0;
                while (n - 1 > xXbfwu) {
                    {
                        k = xXbfwu + 1;
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
                        while (n > k) {
                            if (!(str[k] != str[xXbfwu])) {
                                str[xXbfwu] = str[k] = 1;
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
                                break;
                            }
                            k = k + 1;
                        };
                    }
                    if (!(xXbfwu + 1 != k)) {
                        xXbfwu = k;
                    }
                    else if (k == n) {
                        printf ("%c\n", str[xXbfwu]);
                        break;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    xXbfwu = xXbfwu + 1;
                };
            }
            i = i + 1;
            if (xXbfwu >= n - 1) {
                printf ("no\n");
            };
        };
    };
}

