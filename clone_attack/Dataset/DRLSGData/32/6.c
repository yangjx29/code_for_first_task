int main () {
    int c [(502 - 401)];
    int uXINbeKd4w;
    int zg3Pml;
    int OMVlGIpAYuLb;
    int xsijIwE;
    char b [101];
    int i;
    char a [(458 - 357)];
    int ACQMAXz;
    cin >> zg3Pml;
    for (; zg3Pml != (50 - 50);) {
        cin >> a >> b;
        OMVlGIpAYuLb = strlen (a);
        xsijIwE = strlen (b);
        for (i = OMVlGIpAYuLb -(190 - 189), uXINbeKd4w = xsijIwE - (738 - 737), ACQMAXz = (172 - 172); (265 - 265) <= uXINbeKd4w; i = i - (375 - 374), uXINbeKd4w = uXINbeKd4w - (431 - 430), ACQMAXz = ACQMAXz +1) {
            if (b[uXINbeKd4w] <= a[i])
                c[ACQMAXz] = a[i] - b[uXINbeKd4w];
            else {
                c[ACQMAXz] = a[i] - b[uXINbeKd4w] + 10;
                a[i - (92 - 91)] = a[i - (453 - 452)] - (700 - 699);
            }
        }
        for (; i >= (858 - 858); i--, ACQMAXz++)
            c[ACQMAXz] = a[i] - '0';
        for (i = ACQMAXz -1; i >= 0; i--) {
            cout << c[i];
        }
        cout << endl;
        zg3Pml--;
    }
    return 0;
}

