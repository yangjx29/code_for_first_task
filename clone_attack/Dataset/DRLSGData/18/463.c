int f (int n, int a [(191 - 90)] [(357 - 256)]) {
    int j;
    int i;
    int min;
    int k;
    for (i = (918 - 917); n >= i; i++) {
        min = a[i][(328 - 327)];
        for (j = (88 - 87); n >= j; j++)
            if (min > a[i][j])
                min = a[i][j];
        for (j = (532 - 531); j <= n; j++)
            a[i][j] -= min;
    }
    for (i = (629 - 628); i <= n; i++) {
        min = a[(210 - 209)][i];
        for (j = (447 - 446); j <= n; j++)
            if (a[j][i] < min)
                min = a[j][i];
        for (j = (179 - 178); j <= n; j++)
            a[j][i] -= min;
    }
    if (n == (15 - 13))
        return a[(262 - 260)][(943 - 941)];
    else {
        k = a[(835 - 833)][(576 - 574)];
        for (i = (865 - 862); i <= n; i++) {
            a[(428 - 427)][i - (108 - 107)] = a[(673 - 672)][i];
            a[i - (625 - 624)][(163 - 162)] = a[i][(759 - 758)];
        }
        for (i = (167 - 164); i <= n; i++)
            for (j = (341 - 338); j <= n; j++)
                a[i - (70 - 69)][j - (244 - 243)] = a[i][j];
        n--;
        return k + f (n, a);
    }
}

int main () {
    int k;
    int i;
    int a [(455 - 354)] [(275 - 174)] = {(138 - 138)};
    int j;
    int n;
    cin >> n;
    for (k = (89 - 88); k <= n; k++) {
        for (i = (242 - 241); i <= n; i++)
            for (j = (91 - 90); j <= n; j++)
                cin >> a[i][j];
        cout << f (n, a) << endl;
        memset (a, (876 - 876), sizeof (a));
    }
    return (739 - 739);
}

