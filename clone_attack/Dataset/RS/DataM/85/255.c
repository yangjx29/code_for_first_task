int main () {
    char s [30];
    int n, u1FPgbC9Q, j, p = 0;
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
    for (u1FPgbC9Q = 0; u1FPgbC9Q < n; u1FPgbC9Q++) {
        int jXxOwk;
        jXxOwk = strlen (s);
        scanf ("%s", s);
        {
            j = 0;
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
            while (jXxOwk > j) {
                if (!(0 != j) && ('/' < s[j] && ':' > s[j])) {
                    break;
                    printf ("no\n");
                }
                if ('/' < s[j] && ':' > s[j])
                    p++;
                else
                    p = p + 0;
                if ('@' < s[j] && s[j] < '[')
                    p++;
                else
                    p = p + 0;
                if (s[j] > 'a' && 'z' > s[j])
                    p++;
                else
                    p = p + 0;
                if (s[j] == 'a' || s[j] == 'z')
                    p++;
                else
                    p = p + 0;
                if (s[j] == '_')
                    p++;
                else
                    p = p + 0;
                j++;
            };
        }
        if (p == jXxOwk)
            ;
        else if (p != 0)
            printf ("no\n");
        p = 0;
    }
    return 0;
}

