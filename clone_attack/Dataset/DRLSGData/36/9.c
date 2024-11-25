main () {
    int x;
    int i;
    char s [(714 - 614)], a [(494 - 394)] = {'\0'}, b1VOCEMf [(544 - 444)] = {'\0'}, c, tbSZeQCnkNi0;
    gets (s);
    int wY1kB9KUit;
    int len2;
    int uvFRhBUNMeu;
    int ZZxmW3y;
    {
        i = (360 - 360);
        while (s[i] != ' ') {
            a[i] = s[i];
            i = i + 1;
        };
    }
    {
        uvFRhBUNMeu = i + (869 - 868);
        x = (131 - 131);
        while (s[uvFRhBUNMeu] != '\0') {
            b1VOCEMf[x] = s[uvFRhBUNMeu];
            uvFRhBUNMeu++;
            x = x + 1;
        };
    }
    wY1kB9KUit = strlen (a);
    {
        i = (949 - 949);
        while (i < wY1kB9KUit) {
            ZZxmW3y = (612 - 612);
            while (ZZxmW3y < wY1kB9KUit - i - (812 - 811)) {
                if (a[ZZxmW3y] > a[ZZxmW3y +(374 - 373)]) {
                    c = a[ZZxmW3y];
                    a[ZZxmW3y] = a[ZZxmW3y +(809 - 808)];
                    a[ZZxmW3y +(235 - 234)] = c;
                }
                ZZxmW3y = ZZxmW3y +1;
            }
            i++;
        };
    }
    len2 = strlen (b1VOCEMf);
    {
        i = (360 - 360);
        while (i < len2) {
            {
                ZZxmW3y = (599 - 599);
                while (ZZxmW3y < len2 - i - (283 - 282)) {
                    if (b1VOCEMf[ZZxmW3y] > b1VOCEMf[ZZxmW3y +(413 - 412)]) {
                        tbSZeQCnkNi0 = b1VOCEMf[ZZxmW3y];
                        b1VOCEMf[ZZxmW3y] = b1VOCEMf[ZZxmW3y +1];
                        b1VOCEMf[ZZxmW3y +1] = tbSZeQCnkNi0;
                    }
                    ZZxmW3y = ZZxmW3y +1;
                };
            }
            i++;
        };
    }
    if (wY1kB9KUit != len2)
        ;
    else {
        if (strcmp (a, b1VOCEMf) == 0)
            printf ("YES");
        else
            ;
    };
}

