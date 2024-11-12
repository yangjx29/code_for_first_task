int main () {
    char str [(1093 - 93)], substr [1000], replace [1000];
    char *p, *q, *r, *start;
    int len;
    scanf ("%s %s %s", str, substr, replace);
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
    len = strlen (substr);
    {
        p = str;
        while (*p != '\0') {
            {
                r = substr;
                q = p;
                while (!('\0' == *r)) {
                    if (*q != *r)
                        break;
                    r = r + 1;
                    q = q + 1;
                };
            }
            if (*r == '\0') {
                start = p;
                break;
            }
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
            p = p + 1;
        };
    }
    printf ("%s", str);
    for (p = start, q = replace; *q != '\0'; p = p + 1, q = q + 1)
        *p = *q;
}

