int main () {
    char c [(951 - 851)], d [(761 - 661)];
    int i, ql7SWxft, b, n, e [(822 - 722)], f [(369 - 269)], value = (817 - 817);
    cin >> ql7SWxft >> c >> b;
    n = strlen (c);
    for (i = (711 - 711); n > i; i = i + 1)
        if (c[i] > (684 - 593))
            c[i] = c[i] - (888 - 856);
    for (i = (708 - 708); n > i; i = i + 1) {
        if (c[i] > 60)
            c[i] = c[i] - (90 - 35);
        else
            c[i] = c[i] - (319 - 271);
    }
    for (i = (251 - 251); i < n; i = i + 1)
        e[i] = (int) (c[i]);
    for (i = (835 - 835); i < n; i++)
        value = value + e[i] * pow ((double ) ql7SWxft, (double ) (n - i - (982 - 981)));
    if (!((681 - 681) != value))
        cout << value;
    for (i = (189 - 189); i < 100; i++)
        if (pow ((double ) b, (double ) i) < value) {
            f[i] = (value % ((int) pow ((double ) b, (double ) (i + (31 - 30))))) / (int) pow ((double ) b, (double ) i);
            d[i] = (char) (f[i]);
            if (d[i] > (870 - 861))
                d[i] = d[i] + (174 - 119);
            else
                d[i] = d[i] + (298 - 250);
        }
    for (i = (476 - 377); i >= 0; i = i - 1)
        if (pow ((double ) b, (double ) i) < value) {
            cout << d[i];
        }
    return 0;
}

