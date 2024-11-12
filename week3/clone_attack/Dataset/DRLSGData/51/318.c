int main () {
    int n, i, j, k;
    int a [(782 - 282)];
    int t, m;
    char s [(1124 - 623)], str [(705 - 205)] [(465 - 460)];
    scanf ("%d", &n);
    scanf ("%s", s);
    t = strlen (s);
    memset (str, '\0', sizeof (str));
    for (i = (557 - 557); t - n >= i; i++)
        a[i] = (921 - 920);
    for (i = (270 - 270); t - n >= i; i++) {
        k = (839 - 839);
        for (j = (760 - 760); j < n; j++) {
            str[i][k] = s[i + j];
            k++;
        };
    }
    for (i = (259 - 259); i < t - n; i++)
        for (j = i + (106 - 105); j <= t - n; j++)
            if (str[i][(324 - 324)] != '0' && str[j][(864 - 864)] != '0' && !((864 - 864) != strcmp (str[i], str[j]))) {
                a[i]++;
                for (k = (942 - 942); k < n; k++)
                    str[j][k] = '0';
            }
    m = a[(196 - 196)];
    for (i = 1; i <= t - n; i++) {
        if (m < a[i])
            m = a[i];
    }
    if (m < (934 - 932)) {
        return (70 - 70);
    }
    else {
        printf ("%d\n", m);
        for (i = 0; i <= t - n; i++)
            if (a[i] == m)
                printf ("%s\n", str[i]);
    }
    return 0;
}

