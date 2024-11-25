void  main () {
    int a04QAlq39Zn, wxvYdl9, u3cSFhPBXK, rvW82OdYR, x, vlRbQC3, H6KqTiYn, b [300];
    int SKb9SpC7, JHr65USXG [(1132 - 832)], blywtYN = (363 - 363);
    scanf ("%d", &SKb9SpC7);
    {
        a04QAlq39Zn = (84 - 84);
        for (; SKb9SpC7 > a04QAlq39Zn;) {
            scanf ("%d", &JHr65USXG[a04QAlq39Zn]);
            blywtYN = blywtYN + JHr65USXG[a04QAlq39Zn];
            a04QAlq39Zn++;
        }
    }
    {
        wxvYdl9 = 0;
        while (wxvYdl9 < SKb9SpC7) {
            b[wxvYdl9] = SKb9SpC7 *JHr65USXG[wxvYdl9] - blywtYN;
            wxvYdl9++;
        }
    }
    {
        u3cSFhPBXK = 0;
        for (; u3cSFhPBXK < SKb9SpC7;) {
            {
                rvW82OdYR = 0;
                for (; SKb9SpC7 -u3cSFhPBXK - (954 - 953) > rvW82OdYR;) {
                    if (abs (b[rvW82OdYR]) < abs (b[rvW82OdYR + (382 - 381)])) {
                        H6KqTiYn = b[rvW82OdYR];
                        b[rvW82OdYR] = b[rvW82OdYR + (472 - 471)];
                        b[rvW82OdYR + (715 - 714)] = H6KqTiYn;
                        vlRbQC3 = JHr65USXG[rvW82OdYR];
                        JHr65USXG[rvW82OdYR] = JHr65USXG[rvW82OdYR + (275 - 274)];
                        JHr65USXG[rvW82OdYR + 1] = vlRbQC3;
                    }
                    rvW82OdYR++;
                }
            }
            u3cSFhPBXK++;
        }
    }
    printf ("%d", JHr65USXG[0]);
    {
        x = 1;
        for (; x < SKb9SpC7;) {
            if (abs (b[x]) == abs (b[0]))
                printf (",%d", JHr65USXG[x]);
            x++;
        }
    }
}

