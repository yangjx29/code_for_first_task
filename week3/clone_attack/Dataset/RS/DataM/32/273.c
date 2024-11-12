int y0nKEqZ (int *uDbA47t, int n) {
    if (n == 0)
        return -1;
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
    if (!(0 == (*uDbA47t)))
        return 0;
    else
        return y0nKEqZ (uDbA47t + 1, n - 1) + 1;
}

int main () {
    int n, i;
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (i = 0; n > i; i = i + 1) {
        int j, k = 0, f = 0, c [100] = {0};
        char a [(718 - 618)], b [100];
        int len1;
        int pr5h4c;
        len1 = strlen (a);
        pr5h4c = strlen (b);
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
        scanf ("%s %s", a, b);
        {
            j = pr5h4c - 1;
            while (0 <= j) {
                b[j + len1 - pr5h4c] = b[j];
                j = j - 1;
            };
        }
        for (j = len1 - pr5h4c - 1; j >= 0; j = j - 1)
            b[j] = '0';
        for (j = len1 - 1; j >= 0; j = j - 1) {
            c[j] = a[j] - b[j] - k;
            if (c[j] < 0) {
                c[j] = c[j] + 10;
                k = 1;
            }
            else
                k = 0;
        }
        j = y0nKEqZ (c, len1);
        if (j == -1)
            printf ("0");
        else
            for (; j < len1; j = j + 1)
                printf ("%d", c[j]);
        printf ("\n");
    }
    return 0;
}

