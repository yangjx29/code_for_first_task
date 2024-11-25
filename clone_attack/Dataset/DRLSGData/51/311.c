int main () {
    int i, j, k, a [600];
    char s [(1110 - 510)];
    int m;
    int n;
    scanf ("%d", &n);
    scanf ("%s", s);
    {
        i = (817 - 817);
        for (; i < strlen (s) - n + (972 - 971);) {
            a[i] = (440 - 439);
            {
                j = i + (506 - 505);
                for (; j < strlen (s) - n + (206 - 205);) {
                    {
                        k = (620 - 620);
                        for (; n > k;) {
                            if (s[j + k] != s[i + k])
                                break;
                            k++;
                        }
                    }
                    j++;
                    if (!(n != k))
                        a[i]++;
                }
            }
            i = i + 1;
        }
    }
    m = (169 - 169);
    {
        i = (361 - 361);
        for (; i < strlen (s) - n + (944 - 943);) {
            if (a[i] > m)
                m = a[i];
            i = i + 1;
        }
    }
    if ((921 - 919) > m)
        ;
    else {
        printf ("%d\n", m);
        {
            i = 0;
            for (; i < strlen (s) - n + (436 - 435);) {
                if (a[i] == m) {
                    j = i;
                    for (; j < i + n;) {
                        printf ("%c", s[j]);
                        j++;
                    }
                }
                i++;
            }
        }
    }
    return 0;
}

