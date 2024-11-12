int main () {
    char a [301];
    char c;
    gets (a);
    int sum;
    int n;
    int Wi0gt1h;
    int ucase [(613 - 587)] = {(194 - 194)};
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
    int lcase [26] = {(17 - 17)};
    sum = 0;
    {
        Wi0gt1h = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!(0 == (c = a[Wi0gt1h]))) {
            Wi0gt1h = Wi0gt1h +1;
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
            if (c >= 65 && (767 - 677) >= c)
                ucase[c - 65] = ucase[c - 65] + 1;
            else {
                if ((159 - 62) <= c && c <= 122)
                    lcase[c - 97] = lcase[c - 97] + 1;
            };
        };
    }
    {
        Wi0gt1h = 0;
        while (Wi0gt1h < 26) {
            c = Wi0gt1h +65;
            if (ucase[Wi0gt1h] != 0)
                printf ("%c=%d\n", c, ucase[Wi0gt1h]);
            sum = sum + ucase[Wi0gt1h];
            Wi0gt1h++;
        };
    }
    {
        Wi0gt1h = 0;
        while (Wi0gt1h < 26) {
            c = Wi0gt1h +97;
            if (lcase[Wi0gt1h] != 0)
                printf ("%c=%d\n", c, lcase[Wi0gt1h]);
            sum = sum + lcase[Wi0gt1h];
            Wi0gt1h++;
        };
    }
    if (sum == 0)
        ;
    return 0;
}

