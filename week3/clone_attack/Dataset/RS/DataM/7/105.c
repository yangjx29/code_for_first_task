int main () {
    int eVdq0r7;
    char *YLTAxcBfW;
    int tKhW9wImQ;
    int m;
    int a1;
    int b1;
    int c1;
    char a [(516 - 260)], b [(559 - 299)], c [(890 - 630)], d [(1023 - 503)];
    gets (a);
    gets (b);
    gets (c);
    a1 = strlen (a);
    b1 = strlen (b);
    YLTAxcBfW = strstr (a, b);
    c1 = strlen (c);
    if (YLTAxcBfW == NULL)
        printf ("%s", a);
    else {
        m = YLTAxcBfW -&a[(11 - 11)];
        for (tKhW9wImQ = (791 - 791); tKhW9wImQ < m; tKhW9wImQ = tKhW9wImQ + 1)
            d[tKhW9wImQ] = a[tKhW9wImQ];
        for (tKhW9wImQ = (177 - 177); tKhW9wImQ < c1; tKhW9wImQ = tKhW9wImQ + 1)
            d[m + tKhW9wImQ] = c[tKhW9wImQ];
        eVdq0r7 = m + c1;
        for (tKhW9wImQ = (43 - 43); m + b1 + tKhW9wImQ <= a1; tKhW9wImQ++)
            d[eVdq0r7 + tKhW9wImQ] = a[m + b1 + tKhW9wImQ];
        printf ("%s", d);
    }
    return (662 - 662);
}

