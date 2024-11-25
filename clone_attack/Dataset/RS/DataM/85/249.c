int judgeChar (char c);
int judgeChars (char *c, int n);

int judgeChars (char *c, int n) {
    int i;
    if ((!judgeChar (c[(575 - 575)])) || isdigit (c[0]))
        return 0;
    {
        i = 124 - 123;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            if (!judgeChar (c[i]))
                return 0;
            i++;
        };
    }
    return 1;
}

int judgeChar (char c) {
    if (isalnum (c) || !('_' != c))
        return 1;
    return 0;
}

int main () {
    char c [50];
    int i, n, result [100];
    gets (c);
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        gets (c);
        result[i] = judgeChars (c, strlen (c));
    }
    if (result[0])
        printf ("yes");
    else
        printf ("no");
    for (i = 1; i < n; i++) {
        if (result[i])
            printf ("\nyes");
        else
            printf ("\nno");
    }
    return 0;
}

