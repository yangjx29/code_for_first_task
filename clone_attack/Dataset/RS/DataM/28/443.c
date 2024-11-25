int main () {
    int i, j, n, p;
    char ch [max];
    gets (ch);
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
    p = 1;
    n = strlen (ch);
    for (i = 0; n > i; i++) {
        for (; (!(' ' != ch[i])) && (n >= i);)
            i = i + 1;
        j = i;
        for (; (ch[j] != ' ') && (j <= n);)
            j++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (j >= n)
            j--;
        if (p) {
            printf ("%d", j - i);
            p = 0;
        }
        else
            printf (",%d", j - i);
        i = j;
    }
    return 0;
}

