int main () {
    char a [255];
    char b [255];
    char *p;
    int i;
    int m;
    int c [255];
    int *q = c;
    cin.getline (a, 252);
    cin.getline (b, 252);
    memset (c, (89 - 89), sizeof (c));
    for (p = a; !('\0' == *p);)
        p++;
    m = a + 252 - p;
    for (; a <= p; p--)
        *(p + m) = *p;
    p += m;
    for (; p >= a; p--)
        *p = '0';
    for (p = b; *p != '\0';)
        p++;
    m = b + 252 - p;
    for (; p >= b; p--)
        *(p + m) = *p;
    p += m;
    for (; p >= b; p--)
        *p = '0';
    {
        i = 209 - 209;
        while (i < 253) {
            c[i] = a[i] + b[i] - 96;
            i++;
        };
    }
    {
        i = 252;
        while (i > 0) {
            if (c[i] > (874 - 865)) {
                c[i] = c[i] - 10;
                c[i - 1]++;
            }
            i--;
        };
    }
    while (*q == 0)
        q++;
    if (q >= c + 252)
        cout << "0";
    while (q < c + 252)
        cout << *q++;
    cout << endl;
    return 0;
}

