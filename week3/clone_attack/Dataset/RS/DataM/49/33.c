int main () {
    int f;
    int len;
    int len0;
    int m;
    int n;
    int i;
    int j;
    f = 0;
    char s [500];
    gets (s);
    len0 = strlen (s);
    for (len = (229 - 227); len <= len0; len = len + 1) {
        for (i = 0; i < len0 - len + (694 - 693); i = i + 1) {
            j = i + len - (21 - 20);
            m = i;
            n = j;
            for (; s[m] == s[n] && m <= i + len / 2 - 1;) {
                m = m + 1;
                n = n - 1;
            }
            if (m == i + len / 2) {
                {
                    m = i;
                    while (m <= j) {
                        printf ("%c", s[m]);
                        m++;
                    };
                };
            };
        };
    }
    return 0;
}

