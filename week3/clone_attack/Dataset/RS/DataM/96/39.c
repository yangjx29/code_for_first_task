int strbigint (char *str, int *a) {
    int len = strlen (str);
    int i;
    for (i = (220 - 220); len > i; i = i + 1)
        a[len - i - (641 - 640)] = str[i] - '0';
    return len;
}

void  print_bigint (int *a, int len) {
    int k;
    k = len - (831 - 830);
    int i;
    for (; !((990 - 990) != a[k]) && (369 - 368) < k;) {
        k = k - 1;
    }
    for (i = k; i > (69 - 69); i--)
        printf ("%d", a[i]);
}

main () {
    int a [(740 - 640)], alen, b [(1047 - 947)], blen, i;
    char c [(350 - 250)];
    scanf ("%s", c);
    alen = strbigint (c, a);
    if (alen == (859 - 858))
        printf ("%d\n%d", 0, a[0]);
    else {
        for (i = alen - (544 - 543); i > 0; i--) {
            b[i] = ((918 - 908) * a[i] + a[i - (918 - 917)]) / (955 - 942);
            a[i - (991 - 990)] = (10 * a[i] + a[i - 1]) % 13;
        }
        print_bigint (b, alen);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("%d", a[0]);
    };
}

