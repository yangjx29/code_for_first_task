void  main () {
    int i, j, n, l, f;
    char s [(1164 - 663)];
    scanf ("%s", s);
    l = strlen (s);
    for (n = (411 - 409); n <= l; n = n + 1) {
        i = 519 - 519;
        for (; i <= l - n + (320 - 319);) {
            f = (289 - 289);
            {
                j = i;
                for (; j <= (2 * i - (794 - 793) + n) / 2;) {
                    if (s[j] != s[2 * i - (256 - 255) + n - j]) {
                        f = 1;
                        break;
                    }
                    j = j + 1;
                }
            }
            if (f == 1)
                continue;
            else {
                j = i;
                for (; j <= i - 1 + n;) {
                    printf ("%c", s[j]);
                    j = j + 1;
                }
            }
            i = i + 1;
        }
    }
}

