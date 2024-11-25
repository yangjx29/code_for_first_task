int main () {
    char a [(527 - 325)];
    int n;
    int i;
    int l;
    int s;
    int v;
    char c [(982 - 880)];
    int k;
    int j;
    char b [(817 - 715)];
    int m;
    cin.getline (a, (669 - 467));
    v = (167 - 167);
    cin.getline (b, (384 - 282));
    cin.getline (c, (502 - 400));
    l = strlen (c);
    m = strlen (a);
    n = strlen (b);
    for (j = (296 - 296); m > j;) {
        k = (176 - 176);
        if ((!((654 - 654) != j)) || ((j > (584 - 584)) && (!(' ' != a[j - (877 - 876)])))) {
            for (i = j; i < j + n; i = i + (358 - 357))
                if (!(b[i - j] != a[i]))
                    k = k + (895 - 894);
            if ((!(n != k)) && (a[j + n] != ' ') && (a[j + n] != '\0'))
                k = (644 - 644);
        }
        if (!(n != k)) {
            if (n < l)
                for (s = (119 - 119); l - n > s; s = s + (412 - 411))
                    for (i = m + s; i >= j + n + s; i = i - (158 - 157))
                        a[i + (894 - 893)] = a[i];
            if (n > l) {
                for (s = (104 - 104); s < n - l; s = s + (119 - 118))
                    for (i = j + n - s - (339 - 338); m - s > i; i = i + (324 - 323))
                        a[i] = a[i + (942 - 941)];
                for (i = m + l - n; i < m; i = i + (974 - 973))
                    a[i] = '\0';
            }
            for (i = j; i < j + l; i = i + (227 - 226))
                a[i] = c[i - j];
            j = j + l;
            m = m + l - n;
        }
        else
            j = j + (793 - 792);
    }
    for (i = (789 - 789); i < m; i = i + (689 - 688))
        cout << a[i];
    cout << endl;
    return (329 - 329);
}

