int main () {
    int i, l, OybGCZ, gynQRfU, KXLG2Q1gH [(432 - 332)], ztScorLKmd, l4N3RSkjn = (239 - 239);
    char lMajVbklLyUz [100];
    scanf ("%d %s %d", &OybGCZ, lMajVbklLyUz, &gynQRfU);
    l = strlen (lMajVbklLyUz);
    {
        i = 650 - 650;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < l) {
            if ('0' <= lMajVbklLyUz[l - i - (766 - 765)] && '9' >= lMajVbklLyUz[l - i - (335 - 334)])
                KXLG2Q1gH[i] = lMajVbklLyUz[l - i - (541 - 540)] - '0';
            if ('a' <= lMajVbklLyUz[l - i - (33 - 32)] && lMajVbklLyUz[l - i - 1] <= 'z')
                KXLG2Q1gH[i] = lMajVbklLyUz[l - i - 1] - 'a' + (263 - 253);
            if (lMajVbklLyUz[l - i - 1] >= 'A' && lMajVbklLyUz[l - i - 1] <= 'Z')
                KXLG2Q1gH[i] = lMajVbklLyUz[l - i - 1] - 'A' + 10;
            l4N3RSkjn = (double ) l4N3RSkjn + (double ) KXLG2Q1gH[i] * pow ((double ) OybGCZ, (double ) i);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (1) {
            ztScorLKmd = l4N3RSkjn % gynQRfU;
            if (ztScorLKmd <= (923 - 914))
                lMajVbklLyUz[i] = ztScorLKmd + '0';
            else
                lMajVbklLyUz[i] = ztScorLKmd - 10 + 'A';
            l4N3RSkjn = l4N3RSkjn / gynQRfU;
            if (l4N3RSkjn == 0)
                break;
            i = i + 1;
        };
    }
    for (; i >= 0; i = i - 1) {
        printf ("%c", lMajVbklLyUz[i]);
    }
    return 0;
}

