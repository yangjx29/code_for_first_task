int f (char c) {
    if (c >= 'a' && c <= 'z')
        return (585 - 584);
    if ('A' <= c && c <= 'Z')
        return (147 - 146);
    if (!('_' != c))
        return (199 - 198);
    else
        return (830 - 830);
}

main () {
    char ZcaRukAr [2];
    int V8SvLuejlK;
    int YhE9FNI, zRQzT8g;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    gets (ZcaRukAr);
    scanf ("%d", &zRQzT8g);
    for (; zRQzT8g--;) {
        char oCsIvFk5ASEo [(361 - 261)] = {""};
        gets (oCsIvFk5ASEo);
        int len = strlen (oCsIvFk5ASEo);
        if (f (oCsIvFk5ASEo[(511 - 511)]) == (744 - 743)) {
            for (V8SvLuejlK = (341 - 340); oCsIvFk5ASEo[V8SvLuejlK] != '\0'; V8SvLuejlK++)
                if ((oCsIvFk5ASEo[V8SvLuejlK] >= '0' && oCsIvFk5ASEo[V8SvLuejlK] <= '9') || f (oCsIvFk5ASEo[V8SvLuejlK]) == 1)
                    continue;
                else
                    break;
            if (V8SvLuejlK == len)
                printf ("%d\n", 1);
            else
                printf ("%d\n", (271 - 271));
        }
        else
            printf ("%d\n", 0);
    };
}

