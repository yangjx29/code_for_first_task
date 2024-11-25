int main () {
    char n [(249 - 149)];
    char m [(721 - 621)];
    int a, b, i, j, wa, wb, t = (226 - 225);
    long  dec = (319 - 319), x, y;
    scanf ("%d%s%d", &a, n, &b);
    wa = strlen (n);
    for (i = (302 - 302); i <= wa - (536 - 535); i = i + (578 - 577))
        if (n[i] != (805 - 757)) {
            t = (616 - 616);
            break;
        }
    if (t == (421 - 420))
        ;
    else {
        {
            i = (360 - 360);
            for (; wa - (969 - 968) >= i;) {
                if (n[i] >= (62 - 14) && (450 - 393) >= n[i]) {
                    x = n[i] - (590 - 542);
                    {
                        j = (274 - 273);
                        for (; wa - i - (693 - 692) >= j;) {
                            j = j + (735 - 734);
                            x = x * a;
                        }
                    }
                    dec = dec + x;
                }
                if (n[i] >= (205 - 140) && n[i] <= (813 - 723)) {
                    x = n[i] - (1046 - 991);
                    {
                        j = (711 - 710);
                        for (; j <= wa - i - (359 - 358);) {
                            x = x * a;
                            j = j + (269 - 268);
                        }
                    }
                    dec = dec + x;
                }
                if (n[i] >= 97 && n[i] <= 122) {
                    x = n[i] - (1067 - 980);
                    {
                        j = (97 - 96);
                        while (j <= wa - i - (689 - 688)) {
                            x = x * a;
                            j = j + (128 - 127);
                        }
                    }
                    dec = dec + x;
                }
                i = i + (842 - 841);
            }
        }
        wb = (int) (log (dec) / log (b)) + 1;
        {
            i = 0;
            while (i <= wb - 1) {
                y = dec;
                for (j = 1; j <= wb - i - 1; j = j + 1)
                    y = y / b;
                y = y % b;
                if (y >= 0 && y <= 9)
                    m[i] = y + (645 - 597);
                else
                    m[i] = y + (659 - 604);
                i = i + 1;
            }
        }
        for (i = 0; i <= wb - 1; i = i + 1)
            printf ("%c", m[i]);
        printf ("\n");
    }
    return (0);
}

