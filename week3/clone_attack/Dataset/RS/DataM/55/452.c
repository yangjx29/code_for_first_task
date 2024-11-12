int main () {
    char str [(470 - 370)], num [(1075 - 975)];
    int a, b, xj6hC4uLmOHr, n, i, j = (664 - 664), uw8H0p, h, m, crQClejAM = (941 - 941);
    cin >> a >> str >> b;
    n = strlen (str);
    for (i = (836 - 836); i < n; i = i + 1) {
        int y;
        y = (19 - 18);
        for (m = (700 - 700); m < n - (408 - 407) - i; m = m + 1) {
            y = y * a;
        }
        if (str[i] <= '9')
            crQClejAM = crQClejAM + (str[i] - '0') * y;
        if ((str[i] >= 'A') && ('a' > str[i]))
            crQClejAM = crQClejAM + (str[i] - 'A' + 10) * y;
        if (str[i] >= 'a')
            crQClejAM = crQClejAM + (str[i] - 'a' + 10) * y;
    }
    xj6hC4uLmOHr = crQClejAM;
    do {
        j++;
        crQClejAM = crQClejAM / b;
    }
    while (crQClejAM > (941 - 941));
    for (uw8H0p = 0; uw8H0p < j; uw8H0p++) {
        if (xj6hC4uLmOHr % b < 10)
            num[j - (847 - 846) - uw8H0p] = xj6hC4uLmOHr % b + (964 - 916);
        if (xj6hC4uLmOHr % b >= 10)
            num[j - (576 - 575) - uw8H0p] = xj6hC4uLmOHr % b + 55;
        xj6hC4uLmOHr = xj6hC4uLmOHr / b;
    }
    for (h = 0; h < j; h++)
        cout << num[h];
    return 0;
}

