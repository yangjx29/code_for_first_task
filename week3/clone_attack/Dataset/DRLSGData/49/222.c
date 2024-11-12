main () {
    char s [(521 - 20)];
    gets (s);
    int i, j, k, n, m, l, o;
    l = strlen (s);
    for (n = (738 - 736); n <= l; n++) {
        i = 0;
        for (; l - n >= i;) {
            for (m = i, o = i + n - (16 - 15); s[m] == s[o]; m++, o--)
                if (m >= o) {
                    {
                        j = i;
                        while (j <= i + n - (29 - 28)) {
                            printf ("%c", s[j]);
                            j++;
                        }
                    }
                    break;
                }
            i++;
        }
    }
}

