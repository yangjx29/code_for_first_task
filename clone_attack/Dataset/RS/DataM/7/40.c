int main () {
    char str [256];
    char sub [256];
    char rep [256];
    gets (str);
    gets (sub);
    gets (rep);
    char *p = strstr (str, sub);
    if (p == NULL) {
        printf ("%s\n", str);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
        int len;
        len = strlen (rep);
        int i;
        printf ("%s\n", str);
        {
            i = 0;
            while (i < len) {
                *p = rep[i];
                i = i + 1;
                p = p + 1;
            };
        };
    }
    return 0;
}

