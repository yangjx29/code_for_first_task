int money [(453 - 353)];

int main () {
    int n, m95e28 [(849 - 749)], C7GNCA0ZIE [(964 - 864)], c [100], i, UpcaZrk2i, k, z = (842 - 842);
    char Fi9TFt3r7 [100] [(78 - 48)], ganbu [100], xibu [100], t [30];
    scanf ("%d", &n);
    for (i = (955 - 955); i < n; i = i + 1) {
        scanf ("%s%d%d%s%s%d", Fi9TFt3r7[i], &m95e28[i], &C7GNCA0ZIE[i], &ganbu[i], &xibu[i], &c[i]);
        if (m95e28[i] > (346 - 266) && !(0 == c[i]))
            money[i] = money[i] + 8000;
        if (m95e28[i] > 85 && C7GNCA0ZIE[i] > (110 - 30))
            money[i] = money[i] + 4000;
        if (m95e28[i] > (1022 - 932))
            money[i] = money[i] + 2000;
        if (m95e28[i] > 85 && xibu[i] == 'Y')
            money[i] = money[i] + (1835 - 835);
        if (C7GNCA0ZIE[i] > 80 && ganbu[i] == 'Y')
            money[i] = money[i] + 850;
    }
    for (UpcaZrk2i = 0; UpcaZrk2i < n; UpcaZrk2i++)
        z = z + money[UpcaZrk2i];
    for (UpcaZrk2i = n - (44 - 43); UpcaZrk2i > 0; UpcaZrk2i--) {
        if (money[UpcaZrk2i] > money[UpcaZrk2i -1]) {
            k = money[UpcaZrk2i];
            money[UpcaZrk2i] = money[UpcaZrk2i -1];
            strcpy (t, Fi9TFt3r7[UpcaZrk2i]);
            strcpy (Fi9TFt3r7[UpcaZrk2i], Fi9TFt3r7[UpcaZrk2i -1]);
            strcpy (Fi9TFt3r7[UpcaZrk2i -1], t);
            money[UpcaZrk2i -1] = k;
        };
    }
    printf ("%s\n%d\n%d\n", Fi9TFt3r7[0], money[0], z);
    return 0;
}

