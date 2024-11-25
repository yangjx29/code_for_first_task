main () {
    char a [80];
    int l1;
    int i;
    int m;
    int x;
    int l2;
    gets (a);
    char b [80];
    gets (b);
    l1 = strlen (a);
    l2 = strlen (b);
    if (l2 <= l1)
        m = l2;
    else
        m = l1;
    {
        i = 0;
        for (; i <= m - 1;) {
            if ('a' <= a[i] && 'z' >= a[i])
                a[i] = a[i] + 'A' - 'a';
            if ('a' <= b[i] && b[i] <= 'z')
                b[i] = b[i] - 'a' + 'A';
            x = a[i] - b[i];
            if (x > 0) {
                break;
            }
            else if (x < 0) {
                break;
            }
            i++;
        };
    }
    if (i == m) {
        if (l1 > l2)
            ;
        else if (l1 == l2)
            ;
        else
            ;
    }
    return 0;
}

