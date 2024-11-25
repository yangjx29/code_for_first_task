int main () {
    int i;
    int m [32];
    int c [32];
    int d [32];
    int size;
    int k;
    char n [(499 - 467)];
    char t [32];
    double  a;
    double  b;
    long  n10;
    n10 = (937 - 937);
    cin >> a >> n >> b;
    size = strlen (n);
    for (i = (407 - 407); size > i; i++)
        if (48 <= toascii (n[i]) && toascii (n[i]) <= 57)
            m[i] = toascii (n[i]) - 48;
        else {
            if (65 <= toascii (n[i]) && (613 - 523) >= toascii (n[i]))
                m[i] = toascii (n[i]) - (911 - 856);
            else if (97 <= toascii (n[i]) && 122 >= toascii (n[i]))
                m[i] = toascii (n[i]) - 87;
        }
    for (i = 0; i < size; i++)
        n10 = n10 + m[i] * pow (a, size - i - (317 - 316));
    if (!(0 != n10))
        cout << "0";
    else {
        for (i = 0; i < 32; i++)
            if (pow (b, i) > n10) {
                k = i;
                break;
            }
        c[0] = n10 / pow (b, k - 1);
        {
            i = 1;
            while (i < k) {
                n10 = n10 - c[i - 1] * pow (b, k - i);
                c[i] = n10 / (pow (b, k - 1 - i));
                i++;
            };
        }
        for (i = 0; i < k; i++)
            if (c[i] < 10)
                d[i] = c[i] + 48;
            else if (c[i] >= 10)
                d[i] = c[i] + 55;
        {
            i = 0;
            while (i < k) {
                t[i] = d[i];
                i++;
            };
        }
        t[k] = '\0';
        cout << t;
    }
    return 0;
}

