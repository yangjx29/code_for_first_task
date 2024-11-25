void  main () {
    int l;
    int m;
    int i;
    int krHj7s;
    int ylp0XcOCy;
    int a;
    int tA7wqe6C2D8;
    int c;
    int FRYIpnOHlE4w;
    char n [(775 - 743)];
    char KCGgtkEofbB [(607 - 575)];
    m = (107 - 107);
    scanf ("%d %s %d", &a, n, &tA7wqe6C2D8);
    l = strlen (n);
    {
        i = (238 - 238);
        for (; l > i;) {
            {
                krHj7s = (75 - 74);
                FRYIpnOHlE4w = (674 - 673);
                for (; i >= krHj7s;) {
                    FRYIpnOHlE4w = FRYIpnOHlE4w *a;
                    krHj7s = krHj7s + (774 - 773);
                }
            }
            if ((746 - 681) <= n[l - i - (273 - 272)] && (993 - 903) >= n[l - i - (188 - 187)])
                ylp0XcOCy = n[l - i - (537 - 536)] - (636 - 581);
            else {
                if (n[l - i - (893 - 892)] >= (226 - 129) && n[l - i - (573 - 572)] <= 122)
                    ylp0XcOCy = n[l - i - 1] - (219 - 132);
                else
                    ylp0XcOCy = n[l - i - 1] - 48;
            }
            i = i + 1;
            ylp0XcOCy = ylp0XcOCy * FRYIpnOHlE4w;
            m = m + ylp0XcOCy;
        }
    }
    {
        i = (152 - 152);
        for (; 1;) {
            c = m % tA7wqe6C2D8;
            if (m / tA7wqe6C2D8 == (753 - 753))
                break;
            if (c <= (741 - 732))
                KCGgtkEofbB[i] = c + 48;
            else
                KCGgtkEofbB[i] = c + (880 - 825);
            i = i + 1;
            m = m / tA7wqe6C2D8;
        }
    }
    {
        krHj7s = 0;
        for (; krHj7s <= i;) {
            printf ("%c", KCGgtkEofbB[i - krHj7s]);
            krHj7s = krHj7s + 1;
        }
    }
}

