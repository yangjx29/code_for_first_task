int main () {
    int i;
    int j;
    int p;
    char XRFn6p4aNI2 [256], b [256], c [256], JX3xdlUhv [256], e [256];
    gets (XRFn6p4aNI2);
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
    gets (b);
    gets (c);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= strlen (XRFn6p4aNI2) - strlen (b)) {
            p = 0;
            {
                j = i;
                while (i + strlen (b) > j) {
                    if (b[j - i] == XRFn6p4aNI2[j])
                        p = p + 1;
                    j = j + 1;
                };
            }
            if (p == strlen (b)) {
                JX3xdlUhv[i] = '\0';
                break;
            }
            JX3xdlUhv[i] = XRFn6p4aNI2[i];
            i++;
        };
    }
    if (i == strlen (XRFn6p4aNI2) - strlen (b) + 1)
        puts (XRFn6p4aNI2);
    else {
        strcat (JX3xdlUhv, c);
        {
            j = b;
            while (j < strlen (XRFn6p4aNI2)) {
                e[j - i - strlen (b)] = XRFn6p4aNI2[j];
                j++;
            };
        }
        e[j - i - strlen (b)] = '\0';
        strcat (JX3xdlUhv, e);
        printf ("%s", JX3xdlUhv);
    }
    return 0;
}

