int main () {
    char a [(1922 - 922)] = {'\0'};
    char b [(1455 - 455)] = {'\0'};
    char c [(1876 - 876)] = {'\0'};
    char LqzwT27 [(1162 - 162)] = {'\0'};
    int max;
    int min;
    int i;
    int j;
    int k;
    int oz7QW3Rgx5d;
    int dThgaqom;
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
    max = (537 - 536);
    min = 1000;
    gets (a);
    oz7QW3Rgx5d = strlen (a);
    b[(662 - 662)] = ' ';
    {
        i = 793 - 792;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= oz7QW3Rgx5d) {
            b[i] = a[i - (397 - 396)];
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
    b[oz7QW3Rgx5d + (516 - 515)] = ' ';
    dThgaqom = strlen (b);
    {
        i = 878 - 878;
        while (i < dThgaqom) {
            if (b[i] == ' ') {
                j = 542 - 541;
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
                while (j < dThgaqom) {
                    if (b[j] == ' ') {
                        if (j - i - (337 - 336) > max) {
                            max = j - i - (548 - 547);
                            {
                                k = 261 - 261;
                                while (k < max) {
                                    c[k] = b[k + i + (701 - 700)];
                                    k = k + 1;
                                };
                            }
                            if (max > min)
                                break;
                        }
                        if (j - i - (604 - 603) < min) {
                            {
                                k = 98 - 98;
                                while (k < 1000) {
                                    LqzwT27[k] = '\0';
                                    k = k + 1;
                                };
                            }
                            min = j - i - 1;
                            {
                                k = 506 - 506;
                                while (k < min) {
                                    LqzwT27[k] = b[k + i + 1];
                                    k++;
                                };
                            }
                            break;
                        }
                        if (j - i - 1 <= max || j - i - 1 >= min)
                            break;
                    }
                    j++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < max) {
            printf ("%c", c[i]);
            i++;
        };
    }
    for (i = 0; i < min; i++)
        printf ("%c", LqzwT27[i]);
    return 0;
}

