char change (char c) {
    if (c >= 'A' && 'Z' >= c)
        return c - 'A' + 'a';
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
    return c;
}

char f (char a [], int la, char b [], int iGxaZg74CJ) {
    {
        int i = 0;
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
        while (la > i && iGxaZg74CJ > i) {
            a[i] = change (a[i]);
            b[i] = change (b[i]);
            if (a[i] != b[i]) {
                if (a[i] < b[i])
                    return '<';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (a[i] > b[i])
                    return '>';
            }
            i++;
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
    return '=';
}

int main () {
    char a [100], b [100];
    gets (a);
    gets (b);
    int la, iGxaZg74CJ;
    la = strlen (a);
    iGxaZg74CJ = strlen (b);
    printf ("%c", f (a, la, b, iGxaZg74CJ));
    return 0;
}

