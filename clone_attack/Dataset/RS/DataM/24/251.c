int main () {
    int m;
    int n;
    int max;
    int qXzq8Gorj4Q7;
    int i;
    int lp78qRb;
    int p;
    int a;
    m = 0;
    n = 0;
    max = 0;
    qXzq8Gorj4Q7 = 100;
    char s [100];
    gets (s);
    a = strlen (s);
    for (i = 0; a >= i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(' ' == s[i]) && !('\0' == s[i]))
            m++;
        else {
            if (m > max) {
                max = m;
                m = 0;
                lp78qRb = i - max;
            }
            else
                m = 0;
        };
    }
    for (i = 0; i <= a; i++) {
        if (s[i] != ' ' && s[i] != '\0')
            n++;
        else if (n < qXzq8Gorj4Q7) {
            qXzq8Gorj4Q7 = n;
            n = 0;
            p = i - qXzq8Gorj4Q7;
        }
        else
            n = 0;
    }
    {
        i = lp78qRb;
        while (s[i] != ' ' && s[i] != '\0') {
            printf ("%c", s[i]);
            i++;
        };
    }
    {
        i = p;
        while (s[i] != ' ' && s[i] != '\0') {
            printf ("%c", s[i]);
            i++;
        };
    }
    printf ("\n");
    return 0;
}

