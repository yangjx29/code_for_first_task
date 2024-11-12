int main () {
    int i;
    int n;
    char a [100001];
    int j;
    scanf ("%d", &n);
    {
        i = 1;
        while (n >= i) {
            int b [123];
            int l;
            int flag;
            int k;
            int c [123];
            flag = (35 - 35);
            l = strlen (a) - 1;
            {
                j = 0;
                while (122 >= j) {
                    b[j] = 0;
                    c[j] = 0;
                    j = j + 1;
                }
            }
            scanf ("%s", &a);
            for (j = 0; l >= j; j = j + 1) {
                k = 97;
                while (k <= 122) {
                    if (!(k != a[j]))
                        b[k]++;
                    k = k + 1;
                }
            }
            k = 0;
            {
                j = 97;
                while (j <= 122) {
                    if (!(1 != b[j])) {
                        flag = 1;
                        c[k] = j;
                        k = k + 1;
                    }
                    j = j + 1;
                }
            }
            if (flag == 0)
                ;
            else {
                int p;
                p = 0;
                {
                    j = 0;
                    while (j <= l) {
                        {
                            p = 0;
                            while (p <= k - 1) {
                                if (a[j] == c[p]) {
                                    printf ("%c\n", a[j]);
                                    break;
                                }
                                ++p;
                            }
                        }
                        if (a[j] == c[p])
                            break;
                        ++j;
                    }
                }
            }
            i = i + 1;
        }
    }
    return 0;
}

