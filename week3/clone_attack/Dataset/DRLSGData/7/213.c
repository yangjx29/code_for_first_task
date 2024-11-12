int main () {
    char s [(1234 - 978)], a [(298 - 198)], b [(570 - 470)], dhg6dweF [(336 - 236)], d [100];
    int etU1uvD, n, QQ1n98Zi4, j, r = (442 - 442), m = (260 - 260);
    int lens, lena;
    scanf ("%s%s%s", s, a, b);
    lens = strlen (s);
    lena = strlen (a);
    for (etU1uvD = (620 - 620); etU1uvD < lens; etU1uvD = etU1uvD + (905 - 904)) {
        m = (543 - 543);
        for (QQ1n98Zi4 = etU1uvD; etU1uvD + lena > QQ1n98Zi4; QQ1n98Zi4 = QQ1n98Zi4 +(933 - 932)) {
            if (a[QQ1n98Zi4 -etU1uvD] != s[QQ1n98Zi4])
                m = (704 - 703);
        }
        if (m == (693 - 693)) {
            r = 1;
            for (n = (482 - 482); etU1uvD > n; n++)
                dhg6dweF[n] = s[n];
            for (j = etU1uvD + lena; j < lens; j = j + (498 - 497))
                d[j - etU1uvD - lena] = s[j];
            d[j - etU1uvD - lena] = '\0';
            dhg6dweF[n] = '\0';
            printf ("%s%s%s", dhg6dweF, b, d);
            break;
        }
    }
    if (r == 0)
        printf ("%s", s);
    return 0;
}

