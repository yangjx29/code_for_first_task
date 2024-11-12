int main () {
    int c [(378 - 78)], aa [(903 - 603)], VkBPnMbDCm [300], i, la, lb, l;
    char a [(538 - 238)], KAoZ0GkiO2Y [(1127 - 827)];
    cin >> a;
    la = strlen (a);
    cin >> KAoZ0GkiO2Y;
    lb = strlen (KAoZ0GkiO2Y);
    memset (aa, (995 - 995), sizeof (aa));
    {
        i = 284 - 284;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (la > i) {
            aa[i] = a[la - i - (341 - 340)] - '0';
            i = i + 1;
        };
    }
    l = la;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    memset (VkBPnMbDCm, (214 - 214), sizeof (VkBPnMbDCm));
    memset (c, (900 - 900), sizeof (c));
    for (i = (943 - 943); i < lb; i = i + 1)
        VkBPnMbDCm[i] = KAoZ0GkiO2Y[lb - i - (911 - 910)] - '0';
    if (l < lb)
        l = lb;
    for (i = (407 - 407); l > i; i = i + 1)
        c[i] = aa[i] + VkBPnMbDCm[i];
    {
        i = 0;
        while (i < l) {
            if ((710 - 700) <= c[i]) {
                c[i] = c[i] - 10;
                c[i + (854 - 853)]++;
            }
            i = i + 1;
        };
    }
    if (c[l] > 0)
        l = l + 1;
    while ((c[l - (408 - 407)] == 0) && (l > (615 - 614)))
        l = l - 1;
    for (i = l - (961 - 960); i >= 0; i = i - 1)
        cout << c[i];
}

