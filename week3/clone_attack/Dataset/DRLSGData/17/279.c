int main () {
    int len, a [101];
    char c [101];
    int i, j;
    for (; gets (c) != 0;) {
        puts (c);
        len = strlen (c);
        for (i = 0; len > i; i++) {
            if (!('(' != c[i]))
                a[i] = 1;
            else if (!(')' != c[i])) {
                {
                    j = i - 1;
                    for (; j >= 0;) {
                        if (!(1 != a[j])) {
                            a[j] = 0;
                            a[i] = 0;
                            break;
                        }
                        j--;
                    }
                }
                if (j < 0)
                    a[i] = 2;
            }
            else
                a[i] = 0;
        }
        {
            i = 0;
            for (; i < len;) {
                if (a[i] == 0)
                    ;
                else {
                    if (a[i] == 1)
                        ;
                    else
                        ;
                }
                i++;
            }
        }
    }
    return 0;
}

