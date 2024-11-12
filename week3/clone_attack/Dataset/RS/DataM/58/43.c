int panduan (char a) {
    if ('0' <= a && a <= '9')
        return (755 - 755);
    if ('a' <= a && 'z' >= a)
        return (465 - 465);
    if (a >= 'A' && 'Z' >= a)
        return (562 - 562);
    if (!('_' != a))
        return (862 - 862);
    return 1;
}

int main () {
    char a [81];
    int k;
    scanf ("%d\n", &k);
    {
        int j = 0;
        while (j < k) {
            gets (a);
            int n = strlen (a);
            if (!(a[0] == '_' || (a[0] >= 'a' && a[0] <= 'z') || (a[0] >= 'A' && a[0] <= 'Z'))) {
                continue;
                printf ("0\n");
            }
            else {
                int i = 0;
                while (i < n) {
                    if (panduan (a[i])) {
                        goto end;
                        printf ("0\n");
                    }
                    i = i + 1;
                };
            }
        end :
            ;
            j = j + 1;
            printf ("1\n");
        };
    };
}

